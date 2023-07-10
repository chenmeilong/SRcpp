#include <QCoreApplication>
#include <QWaitCondition>
#include <QMutex>
#include <QThread>
#include <stdio.h>
const int DataSize=1000;
const int BufferSize=80;
int buffer[BufferSize];
QWaitCondition bufferEmpty;
QWaitCondition bufferFull;
QMutex mutex;								//(a)使用互斥量保证对线程操作的原子性
int numUsedBytes=0;							//(b)表示存在多少可用字节
int rIndex=0;								//(c)实例中有连个消费者  指示读取缓冲区的位置为全局变量
class Producer : public QThread
{
public:
    Producer();
    void run();
};
Producer::Producer()
{
}
void Producer::run()
{
    for(int i=0;i<DataSize;i++)				//(a)加入互斥量保护
    {
       mutex.lock();
       if(numUsedBytes==BufferSize)			//(b)检测缓冲区是否填满
          bufferEmpty.wait(&mutex);			//(c)如果缓冲区填满，则等待 缓冲区有空位。wait()函数解锁互斥量，并在此等待
       buffer[i%BufferSize]=numUsedBytes;	//(d)等待到缓冲区未填满，则向缓冲区写入整数
       ++numUsedBytes;						//增加numUsedBytes变量
       bufferFull.wakeAll();				//(e)最后唤醒等待“缓冲区有可以用数据”
       mutex.unlock();
    }
}
class Consumer : public QThread
{
public:
    Consumer();
    void run();
};
Consumer::Consumer()
{
}
void Consumer::run()
{
    forever
    {
        mutex.lock();
        if(numUsedBytes==0)
            bufferFull.wait(&mutex);			//(a)缓冲区无数据时则等待（等待生产的数量是满的） 缓冲区有空位。wait()函数解锁互斥量，并在此等待
        printf("%ul::[%d]=%d\n",currentThreadId(),rIndex,buffer[rIndex]);
                                                //(b)
        rIndex=(++rIndex)%BufferSize;			//将rIndex变量循环加1
        --numUsedBytes;							//(c)
        bufferEmpty.wakeAll();					//(d)唤醒所有休眠着的消费者（ 当生产者生产满了）
        mutex.unlock();
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Producer producer;
    Consumer consumerA;
    Consumer consumerB;
    producer.start();
    consumerA.start();
    consumerB.start();
    producer.wait();
    consumerA.wait();
    consumerB.wait();
    return a.exec();
}

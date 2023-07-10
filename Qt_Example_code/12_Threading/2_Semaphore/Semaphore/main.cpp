#include <QCoreApplication>
#include <QSemaphore>
#include <QThread>
#include <stdio.h>

const int DataSize=1000;
const int BufferSize=80;
int buffer[BufferSize];  //生产者向buffer写入数据 到终点 则0开始覆盖数据
QSemaphore freeBytes(BufferSize);  //freeBytes信号量控制可被生产者填充的缓冲区部分，80表示一开始有80个缓冲区可以被填充
QSemaphore usedBytes(0);   //信号量控制可被消费者读取的缓冲区部分，被初始化为0，表示程序一开始时缓冲区中没有数据可以供读取

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
    for(int i=0;i<DataSize;i++)
    {
       freeBytes.acquire();    //生产者获取一块空闲单元，如果缓冲区被消费者尚未读取的数据填满，对此函数的调用就会阻塞，知道消费者读取了这些数据为止
                               //acquire(n)函数用于获取n个资源，当没有足够的资源时调用就会阻塞，直到有资源调用
       buffer[i%BufferSize]=(i%BufferSize);//填写缓冲区单元
       usedBytes.release();   //调用该函数将可用的资源+1，表示消费之此时可以读取这个刚刚填好的单元  release(n)释放n个资源
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
    for(int i=0;i<DataSize;i++)
    {
        usedBytes.acquire();

        fprintf(stderr,"%d",buffer[i%BufferSize]);
        if(i%16==0&&i!=0)
            fprintf(stderr,"\n");

        freeBytes.release();
    }
    fprintf(stderr,"\n");
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Producer producer;
    Consumer consumer;

    producer.start();
    consumer.start();

    producer.wait();
    consumer.wait();

    return a.exec();
}

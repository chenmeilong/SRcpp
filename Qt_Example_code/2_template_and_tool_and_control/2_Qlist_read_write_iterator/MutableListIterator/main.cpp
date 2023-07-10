#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<int> list;
    QMutableListIterator<int> i(list);       //创建list列表的读写迭代器
    for(int j=0;j<10;++j)
        i.insert(j);   //插入
    for(i.toFront();i.hasNext();)        //i.toFront()将迭代点移动到最前端
        qDebug()<<i.next();          //往后移动一个单位迭代点
    for(i.toBack();i.hasPrevious();)    //意思是从后往前遍历
    {
        qDebug()<<i.peekPrevious()<<"aaa";
        if(i.previous()%2==0)         //i.previous 当前迭代点的前一个值是否为偶数    且往前移动一个迭代点
        {
            i.remove();          //删除当前迭代值
        }
        else
        {
            i.setValue(i.peekNext()*10);   //i.peekNext()  当前后一个迭代值，不移动迭代点
        }
    }
    for(i.toFront();i.hasNext();)
        qDebug()<<i.next();
    return a.exec();
}

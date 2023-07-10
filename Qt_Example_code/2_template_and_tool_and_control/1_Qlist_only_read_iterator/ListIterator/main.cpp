#include <QCoreApplication>               //GUI则需要引用#include <QApplication>
#include <QDebug>                        //包含QList对象的头文件
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<int> list;                   //创建空列表
    list<<1<<2<<3<<4<<5;               //利用操作运算符“<<”输入5个整数值
    QListIterator<int> i(list);       //   以list为参数初始化  QListIterator迭代器对象i
    for(;i.hasNext();)                //i.hasNext()  下一项是否有数据 进行遍历
        qDebug()<<i.next();
    return a.exec();
}

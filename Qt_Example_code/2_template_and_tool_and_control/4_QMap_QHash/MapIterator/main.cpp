#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QMap<QString,QString> map;					//创建一个QMap栈对象
    //向栈对象插入<城市,区号>对
    map.insert("beijing","111");
    map.insert("shanghai","021");
    map.insert("nanjing","025");
    QMapIterator<QString,QString> i(map);		//创建一个只读迭代器
    for(;i.hasNext();)							//(a)
        qDebug()<<"  "<<i.key()<<"  "<<i.next().value();
    QMutableMapIterator<QString,QString> mi(map);
    if(mi.findNext("111"))						//(b)
        mi.setValue("010");
    QMapIterator<QString,QString> modi(map);
    qDebug()<<"  ";
    for(;modi.hasNext();)						//再次遍历并输出修改后的结果
        qDebug()<<" "<<modi.key()<<"  "<<modi.next().value();

    return a.exec();
}

#include "widget.h"
#include <QDebug>
#include <QVariant>
#include <QColor>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QVariant v(709);					//(a)  声明一个QVariant变量v，并初始化为一个整数
    qDebug()<<v.toInt();				//(b)   将QVariant变量v转换成整数并输出
    QVariant w("How are you! ");		//(c)   声明字符串
    qDebug()<<w.toString();				//(d)    转换成字符串输出
    QMap<QString,QVariant>map;			//(e)    声明一个QMap变量map  使用字符串作为键，QVariant变量作为值。
    map["int"]=709;						//输入整数型
    map["double"]=709.709;				//输入浮点型
    map["string"]="How are you! ";		//输入字符串
    map["color"]=QColor(255,0,0);		//输入QColor类型的值
    //调用相应的转换函数并输出
    qDebug()<<map["int"]<< map["int"].toInt();
    qDebug()<<map["double"]<< map["double"].toDouble();
    qDebug()<<map["string"]<< map["string"].toString();
    qDebug()<<map["color"]<< map["color"].value<QColor>();	//(f)
    QStringList sl;						//创建一个字符串列表
    sl<<"A"<<"B"<<"C"<<"D";
    QVariant slv(sl);					//将该列表保存在一个QVariant变量中
    if(slv.type()==QVariant::StringList)//(g)
    {
        QStringList list=slv.toStringList();
        for(int i=0;i<list.size();++i)
            qDebug()<<list.at(i);		//输出列表内容
    }

}

Widget::~Widget()
{

}

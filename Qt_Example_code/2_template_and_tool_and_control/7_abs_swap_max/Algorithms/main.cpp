#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a0(argc, argv);
    double a=-19.3,b=9.7;
    double c=qAbs(a);        				//(a)
    double max=qMax(b,c);    				//(b)
    int bn=qRound(b);        				//(c)
    int cn=qRound(c);
    qDebug()<<"a="<<a;
    qDebug()<<"b="<<b;
    qDebug()<<"c=qAbs(a)= "<<c;            //abs取绝对值
    qDebug()<<"qMax(b,c)= "<<max;          //取最大值
    qDebug()<<"bn=qRound(b)= "<<bn;
    qDebug()<<"cn=qRound(c)= "<<cn;
    qSwap(bn,cn);							//(d)    swap 交换
    //调用qDebug()函数输出所有的计算结果
    qDebug()<<"qSwap(bn,cn):"<<"bn="<<bn<<" cn="<<cn;

    return a0.exec();
}

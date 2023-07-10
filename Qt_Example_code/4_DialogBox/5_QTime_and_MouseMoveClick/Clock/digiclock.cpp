#include "digiclock.h"
#include <QTimer>
#include <QTime>
#include <QMouseEvent>
DigiClock::DigiClock(QWidget *parent):QLCDNumber(parent)
{
    /* 设置时钟背景 */								//(a)
     QPalette p=palette();
     p.setColor(QPalette::Window,Qt::blue);    //设置背景色为蓝色
     setPalette(p);
     setWindowFlags(Qt::FramelessWindowHint);	//(b)设置窗体标识，设置窗体为一个没有面板边框和标题栏的窗体
     setWindowOpacity(0.5);						//(c)窗体透明度为 0.5
     QTimer *timer=new QTimer(this);			//新建一个定时器对象
     connect(timer,SIGNAL(timeout()),this,SLOT(showTime()));	//(d)连接定时器timeout信号与显示时间的槽函数showTime()
     timer->start(1000);						//(e)以1s为周期启动定时器
     showTime();								//初始时间显示
     resize(150,60);							//设置电子时钟显示的尺寸
     showColon=true;                            //初始化   控制时与分之间的显闪功能
}

void DigiClock::showTime()
{
    QTime time=QTime::currentTime();			//(a)  获取当前系统时间
    QString text=time.toString("hh:mm");		//(b)将当前时间转换成字符串类型，指定显示类型
    if(showColon)								//(c)
    {
        text[2]=':';
        showColon=false;
    }
    else
    {
        text[2]=' ';
        showColon=true;
    }
    display(text);								//显示转换好的字符串时间
}
//点击响应函数
void DigiClock::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition=event->globalPos()-frameGeometry().topLeft();  //保存当前鼠标的相对左上角的相对位置
        event->accept();
    }
    if(event->button()==Qt::RightButton)
    {
        close();     //退出窗体
    }
}
//鼠标移动响应函数
void DigiClock::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)    //判断鼠标的状态  是否为左键移动
    {
        move(event->globalPos()-dragPosition);//move的参数为窗体左上角的位置，所以要使用鼠标当前点的位置减去相对窗体左上角的偏移值。
        event->accept();
    }
}



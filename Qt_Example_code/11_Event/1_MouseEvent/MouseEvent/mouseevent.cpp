#include "mouseevent.h"

MouseEvent::MouseEvent(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("鼠标事件"));					//设置窗体的标题
    statusLabel = new QLabel;						//(a)
    statusLabel->setText(tr("当前位置："));
    statusLabel->setFixedWidth(100);
    MousePosLabel = new QLabel;						//(b)
    MousePosLabel->setText(tr(""));
    MousePosLabel->setFixedWidth(100);
    statusBar()->addPermanentWidget(statusLabel);	//(c)在状态栏添加控件
    statusBar()->addPermanentWidget(MousePosLabel);
    this->setMouseTracking(true);					//(d)设置窗体追踪鼠标
    resize(400,200);
}

void MouseEvent::mousePressEvent(QMouseEvent *e)   //鼠标按下响应函数
{
    QString str="("+QString::number(e->x())+","+QString::number(e->y()) +")";//(a)
    if(e->button()==Qt::LeftButton)
    {
        statusBar()->showMessage(tr("左键：")+str);
    }
    else if(e->button()==Qt::RightButton)
    {
        statusBar()->showMessage(tr("右键：")+str);
    }
    else if(e->button()==Qt::MidButton)
    {
        statusBar()->showMessage(tr("中键：")+str);
    }
}

void MouseEvent::mouseMoveEvent(QMouseEvent *e)  //移动响应事件
{
    MousePosLabel->setText("("+QString::number(e->x())+","+QString::number(e->y())+")");
}

void MouseEvent::mouseReleaseEvent(QMouseEvent *e)  //释放响应事件
{
    QString str="("+QString::number(e->x())+","+QString::number(e->y()) +")";
    statusBar()->showMessage(tr("释放在：")+str,3000);
}

void MouseEvent::mouseDoubleClickEvent(QMouseEvent *e){
        QString str="("+QString::number(e->x())+","+QString::number(e->y()) +")";//(a)
     statusBar()->showMessage(tr("双击：")+str);
}

MouseEvent::~MouseEvent()
{

}

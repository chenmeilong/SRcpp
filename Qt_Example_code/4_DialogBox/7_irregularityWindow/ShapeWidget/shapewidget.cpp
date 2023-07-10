#include "shapewidget.h"
#include <QMouseEvent>
#include <QPainter>
#include <QPixmap>
#include <QBitmap>
ShapeWidget::ShapeWidget(QWidget *parent)
    : QWidget(parent)
{
    QPixmap pix;						//新建一个QPixmap对象
    pix.load("16.png",0,Qt::AvoidDither|Qt::ThresholdDither|Qt::ThresholdAlphaDither);//调用 QPixmap的load()函数为 QPixmap对象填入图像值
    resize(pix.size());					//设置窗口大小为图片大小
    setMask(QBitmap(pix.mask()));		//为窗口增加遮罩 ，看起来是透明的
}

void ShapeWidget::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
    if(event->button()==Qt::RightButton)
    {
        close();
    }
}

void ShapeWidget::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}
//完成在主体窗口的画图
void ShapeWidget::paintEvent(QPaintEvent * event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,QPixmap("16.png"));
}

ShapeWidget::~ShapeWidget()
{

}

#include "mywidget.h"
#include <qapplication.h>
#include <qpushbutton.h>
#include <qfont.h>
MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    setMinimumSize( 200, 120 );          //设置窗口的最大值和最小值
    setMaximumSize( 200, 120 );
    QPushButton *quit = new QPushButton( "Quit", this);
    quit->setGeometry( 62, 40, 75, 30 );              //左上和右下的角的坐标
    quit->setFont( QFont( "Times", 18, QFont::Bold ) );  //字体使用Times,18号字体,加粗
    connect( quit, SIGNAL(clicked()), qApp, SLOT(quit()) );
}

MyWidget::~MyWidget()
{

}

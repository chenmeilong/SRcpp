#include "mainwindow.h"
#include <QApplication>
#include <Qsplitter>
#include<QTextEdit>
#include <QTextCodec>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont font("ZYSong18030",12);                               //指定显示字体
    a.setFont(font);
    //主分割窗口
    QSplitter *splitterMain =new QSplitter(Qt::Horizontal,0);	//(a)    水平分割窗口
    QTextEdit *textLeft =new QTextEdit(QObject::tr("Left Widget"), splitterMain);//(b)
    textLeft->setAlignment(Qt::AlignCenter);					//(c)设置对齐方式为居中
    //右部分分割窗口												//(d)
    QSplitter *splitterRight =new QSplitter(Qt::Vertical,splitterMain);  //新建一个QSplitter类对象，作为右分割窗口，设置窗口为垂直分割窗口，并以主分割窗口为父窗口
    splitterRight->setOpaqueResize(false);						//(e)  设置分割线 拖拽时实时更新显示
    QTextEdit *textUp =new QTextEdit(QObject::tr("Top Widget"), splitterRight);
    textUp->setAlignment(Qt::AlignCenter);
    QTextEdit *textBottom =new QTextEdit(QObject::tr("Bottom Widget"), splitterRight);
    textBottom->setAlignment(Qt::AlignCenter);
    splitterMain->setStretchFactor(1,1);						//(f)  设置伸缩控件
    splitterMain->setWindowTitle(QObject::tr("Splitter"));
    splitterMain->show();

    //MainWindow w;
    //w.show();

    return a.exec();
}

#include "mainwindow.h"
#include <QTextEdit>
#include <windows.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Splash Example");
    QTextEdit *edit=new QTextEdit;
    edit->setText("Splash Example!");
    setCentralWidget(edit);
    resize(600,450);
    Sleep(1000);								//(a)延时1s让启动动画显示1S
}

MainWindow::~MainWindow()
{

}

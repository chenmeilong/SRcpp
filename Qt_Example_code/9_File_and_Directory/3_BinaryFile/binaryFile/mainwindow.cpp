#include "mainwindow.h"
#include <QtDebug>
#include <QFile>
#include <QDataStream>
#include <QDate>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    fileFun();
}

void MainWindow::fileFun()
{
    /*将二进制数据写到数据流 */							//(a)
    QFile file("binary.dat");
    file.open(QIODevice::WriteOnly | QIODevice::Truncate);
    QDataStream out(&file);                         //将数据序列化
    out << QString(tr("周何骏："));                   //字符串序列化
    out << QDate::fromString("1996/09/25", "yyyy/MM/dd");
    out << (qint32)21;                              //整数序列化
    file.close();
    /*从文件中读取数据 */								//(b)
    file.setFileName("binary.dat");
    if(!file.open(QIODevice::ReadOnly))
    {
         qDebug()<< "error!";
         return;
    }
    QDataStream in(&file);                          //从文件中读出数据
    QString name;
    QDate birthday;
    qint32 age;
    in >> name >> birthday >> age;               		//获取字符串和整数
    qDebug() << name << birthday << age;
    file.close();
}

MainWindow::~MainWindow()
{

}

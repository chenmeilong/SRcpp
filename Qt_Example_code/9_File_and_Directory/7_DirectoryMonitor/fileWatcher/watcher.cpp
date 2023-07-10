#include "watcher.h"
#include <QVBoxLayout>
#include <QDir>
#include <QMessageBox>
#include <QApplication>
Watcher::Watcher(QWidget *parent)
    : QWidget(parent)
{
    QStringList args=qApp->arguments();
    QString path;
    if(args.count()>1)								//监视目录
    {
        path=args[1];
    }
    else
    {
        path=QDir::currentPath();
    }
    pathLabel = new QLabel;
    pathLabel->setText(tr("监视的目录：")+path);
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(pathLabel);
    fsWatcher.addPath(path);
    connect(&fsWatcher,SIGNAL(directoryChanged(QString)),this,SLOT(directoryChanged(QString)));		//响应函数连接
}

void Watcher::directoryChanged(QString path)
{
    QMessageBox::information(NULL,tr("目录发生变化"),path);
}

Watcher::~Watcher()
{

}

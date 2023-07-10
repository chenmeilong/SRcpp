#include "threaddlg.h"
#include <QHBoxLayout>
ThreadDlg::ThreadDlg(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle(tr("线程"));
    startBtn = new QPushButton(tr("开始"));
    stopBtn = new QPushButton(tr("停止"));
    quitBtn = new QPushButton(tr("退出"));
    QHBoxLayout *mainLayout = new QHBoxLayout(this);
    mainLayout->addWidget(startBtn);
    mainLayout->addWidget(stopBtn);
    mainLayout->addWidget(quitBtn);
    connect(startBtn,SIGNAL(clicked()),this,SLOT(slotStart()));
    connect(stopBtn,SIGNAL(clicked()),this,SLOT(slotStop()));
    connect(quitBtn,SIGNAL(clicked()),this,SLOT(close()));
}

void ThreadDlg::slotStart()
{
    for(int i=0;i<MAXSIZE;i++)
    {
        workThread[i]=new WorkThread();	//(a)实例化一个多线程
    }
    for(int i=0;i<MAXSIZE;i++)
    {
        workThread[i]->start();			//(b)启动
    }
    startBtn->setEnabled(false);
    stopBtn->setEnabled(true);
}

void ThreadDlg::slotStop()
{
    for(int i=0;i<MAXSIZE;i++)
    {
        workThread[i]->terminate();  //终止保存在workThread[]数组中的WorkThread类实例，不会立即终止这个线程
        workThread[i]->wait();        //使线程阻塞等待直到退出超时
    }
    startBtn->setEnabled(true);
    stopBtn->setEnabled(false);
}

ThreadDlg::~ThreadDlg()
{

}

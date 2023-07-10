#include "tcpclientsocket.h"

TcpClientSocket::TcpClientSocket(QObject *parent)
{
    connect(this,SIGNAL(readyRead()),this,SLOT(dataReceived()));        //数据接收处理槽绑定
    connect(this,SIGNAL(disconnected()),this,SLOT(slotDisconnected())); //连接断开时触发槽
}
void TcpClientSocket::dataReceived()
{
    while(bytesAvailable()>0)
    {
        int length = bytesAvailable();
        char buf[1024];
        read(buf,length);
        QString msg=buf;
        emit updateClients(msg,length);
    }
}
void TcpClientSocket::slotDisconnected()
{
    emit disconnected(this->socketDescriptor());
}

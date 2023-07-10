#include "server.h"

Server::Server(QObject *parent,int port):QTcpServer(parent)
{
    listen(QHostAddress::Any,port);   //指定可对任意端口监听  QHostAddress::LocalHost本地端口
}
void Server::incomingConnection(int socketDescriptor)
{
    TcpClientSocket *tcpClientSocket=new TcpClientSocket(this);
                                                            //(a)tcp客户端 处理实例化
    connect(tcpClientSocket,SIGNAL(updateClients(QString,int)),
            this,SLOT(updateClients(QString,int)));			//(b) 给客户端发送数据信号
    connect(tcpClientSocket,SIGNAL(disconnected(int)),this,
            SLOT(slotDisconnected(int)));					//(c)端口连接信号
    tcpClientSocket->setSocketDescriptor(socketDescriptor);  //将创建的套接字指定参数socketDescriptor
    tcpClientSocketList.append(tcpClientSocket);			//(e)加入套接字列表
}
void Server::updateClients(QString msg,int length)
{
    emit updateServer(msg,length);                          //(a)发出updateServer信号，用来通知服务器对话框更新相应的显示状态
    for(int i=0;i<tcpClientSocketList.count();i++)          //(b)实现广播消息
    {
        QTcpSocket *item = tcpClientSocketList.at(i);
        if(item->write(msg.toLatin1(),length)!=length)
        {
            continue;
        }
    }
}
void Server::slotDisconnected(int descriptor)
{
    for(int i=0;i<tcpClientSocketList.count();i++)
    {
        QTcpSocket *item = tcpClientSocketList.at(i);
        if(item->socketDescriptor()==descriptor)
        {
            tcpClientSocketList.removeAt(i);
            return;
        }
    }
    return;
}

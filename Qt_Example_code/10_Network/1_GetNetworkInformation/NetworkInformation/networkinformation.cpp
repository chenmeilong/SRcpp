#include "networkinformation.h"

NetworkInformation::NetworkInformation(QWidget *parent)
    : QWidget(parent)
{
    hostLabel = new QLabel(tr("主机名："));
    LineEditLocalHostName = new QLineEdit;
    ipLabel = new QLabel(tr("IP 地址："));
    LineEditAddress = new QLineEdit;
    detailBtn = new QPushButton(tr("详细"));
    mainLayout = new QGridLayout(this);
    mainLayout->addWidget(hostLabel,0,0);
    mainLayout->addWidget(LineEditLocalHostName,0,1);
    mainLayout->addWidget(ipLabel,1,0);
    mainLayout->addWidget(LineEditAddress,1,1);
    mainLayout->addWidget(detailBtn,2,0,1,2);
    getHostInformation();
    connect(detailBtn,SIGNAL(clicked()),this,SLOT(slotDetail()));
}

void NetworkInformation::getHostInformation()
{
    QString localHostName = QHostInfo::localHostName();			//(a)获取主机名字
    LineEditLocalHostName->setText(localHostName);
    QHostInfo hostInfo = QHostInfo::fromName(localHostName);	//(b)根据主机名获取主机相关信息

    QList<QHostAddress> listAddress = hostInfo.addresses();    //获得主机的IP地址列表
    if(!listAddress.isEmpty())									//ip不为空
    {
        LineEditAddress->setText(listAddress.first().toString());  //使用第一个ip
    }
}

void NetworkInformation::slotDetail()
{
    QString detail="";
    QList<QNetworkInterface> list=QNetworkInterface::allInterfaces();
                                                                //(a)获取IP地址和网络地址的列表
    for(int i=0;i<list.count();i++)
    {
        QNetworkInterface interface=list.at(i);
        detail=detail+tr("设备：")+interface.name()+"\n";
                                                                //(b)
        detail=detail+tr("硬件地址：")+interface.hardwareAddress()+"\n";
                                                                //(c)
        QList<QNetworkAddressEntry> entryList=interface.addressEntries();
                                                                //(d)
        for(int j=1;j<entryList.count();j++)
        {
            QNetworkAddressEntry entry=entryList.at(j);
            detail=detail+"\t"+tr("IP 地址：")+entry.ip().toString()+"\n";
            detail=detail+"\t"+tr("子网掩码：")+entry.netmask().toString() +"\n";
           detail=detail+"\t"+tr("广播地址：")+entry.broadcast().toString() +"\n";
        }
    }
    QMessageBox::information(this,tr("Detail"),detail);
}

NetworkInformation::~NetworkInformation()
{

}

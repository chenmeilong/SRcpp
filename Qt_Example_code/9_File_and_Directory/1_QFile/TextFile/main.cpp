#include <QCoreApplication>
#include <QFile>
#include <QtDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QFile file("textFile1.txt");					//(a)
    if(file.open(QIODevice::ReadOnly))				//(b)
    {
       char buffer[2048];
       qint64 lineLen = file.readLine(buffer,sizeof(buffer));	//读一行
       if(lineLen!=-1)								//读取失败返回-1
       {
           qDebug()<<buffer;
       }
    }
    return a.exec();
}

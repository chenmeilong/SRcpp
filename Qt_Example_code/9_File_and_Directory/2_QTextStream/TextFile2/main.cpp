#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QFile data("data.txt");
    if(data.open(QFile::WriteOnly|QFile::Truncate))//QFile::Truncate将原有文件内容清空
    {
        QTextStream out(&data);
        out<<QObject::tr("score:")<<qSetFieldWidth(10)<<left<<80<< endl;//格式左对齐，占用10个字符位置
    }
    return a.exec();
}

#include "mainwindow.h"
#include <QApplication>
#include <QPixmap>
#include <QSplashScreen>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pixmap("Qt.png");				//(a)
    QSplashScreen splash(pixmap);			//(b)创建图片大小的窗口
    splash.show();							//显示此启动图片
    a.processEvents();						//使程序在启动画面的同时仍能响应鼠标等其他操作
    MainWindow w;
    w.show();
    splash.finish(&w);						//主体窗口初始化完成后，结束启动动画显示
    return a.exec();
}

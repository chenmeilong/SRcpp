﻿#include "mainwindow.h"
#include <QApplication>
#include "butterfly.h"
#include <QGraphicsScene>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QGraphicsScene *scene = new QGraphicsScene;   //新建场景类
    scene->setSceneRect(QRectF(-200,-200,400,400));   //-200,-200 左上角点，因为中心点才是原点
    Butterfly *butterfly = new Butterfly;
    butterfly->setPos(-100,0);              //设置起点
    scene->addItem(butterfly);
    QGraphicsView *view = new QGraphicsView;
    view->setScene(scene);
    view->resize(400,400);
    view->show();

    //MainWindow w;
    //w.show();

    return a.exec();
}

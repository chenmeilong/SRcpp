#include "mainwindow.h"
#include <QApplication>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QItemSelectionModel>
#include <QDirModel>
#include <QTreeView>
#include <QListView>
#include <QTableView>
#include <QSplitter>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDirModel model;											//(a)新建 QDirModel对象，为数据访问做准备
    /* 新建三种不同的View对象，以便文件目录可以以三种不同的方式显示 */
    QTreeView tree;
    QListView list;
    QTableView table;
    tree.setModel(&model);										//(b)传对象
    list.setModel(&model);
    table.setModel(&model);
    tree.setSelectionMode(QAbstractItemView::MultiSelection);	//(c) 设置QTreeView对象的选择方式为多选
    list.setSelectionModel(tree.selectionModel());				//(d)设置QListView 对象与QTreeView对象使用相同的选择模式
    table.setSelectionModel(tree.selectionModel());				//(e)
    QObject::connect(&tree,SIGNAL(doubleClicked(QModelIndex)),&list,
                           SLOT(setRootIndex(QModelIndex)));
    QObject::connect(&tree,SIGNAL(doubleClicked(QModelIndex)),&table,
                           SLOT(setRootIndex(QModelIndex)));	//(f)实现双击选择目录
    QSplitter *splitter = new QSplitter;
    splitter->addWidget(&tree);
    splitter->addWidget(&list);
    splitter->addWidget(&table);
    splitter->setWindowTitle(QObject::tr("Model/View"));
    splitter->show();

    //MainWindow w;
    //w.show();

    return a.exec();
}

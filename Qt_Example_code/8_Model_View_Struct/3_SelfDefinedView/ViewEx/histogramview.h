#ifndef HISTOGRAMVIEW_H
#define HISTOGRAMVIEW_H

#include <QAbstractItemView>
#include <QItemSelectionModel>
#include <QRegion>
#include <QMouseEvent>
class HistogramView : public QAbstractItemView
{
    Q_OBJECT
public:
    HistogramView(QWidget *parent=0);
    //虚函数声明											//(a)
    QRect visualRect(const QModelIndex &index)const;
    void scrollTo(const QModelIndex &index,ScrollHint hint= EnsureVisible);
    QModelIndex indexAt(const QPoint &point)const;		//(b)
    //为selections赋初值
    void setSelectionModel(QItemSelectionModel *selectionModel);
    QRegion itemRegion(QModelIndex index);
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *event);			//(c)
protected slots:
    void selectionChanged(const QItemSelection &selected,
          const QItemSelection &deselected);			//(d)
    void dataChanged(const QModelIndex &topLeft,
          const QModelIndex &bottomRight);				//(e)
protected:
    //虚函数声明
    QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction,
          Qt::KeyboardModifiers modifiers);
    int horizontalOffset()const;
    int verticalOffset()const;
    bool isIndexHidden(const QModelIndex &index)const;
    void setSelection(const QRect &rect,QItemSelectionModel:: SelectionFlags flags);//(f)
    QRegion visualRegionForSelection(const QItemSelection &selection) const;
private:
    QItemSelectionModel *selections;					//(g)
    QList<QRegion> MRegionList;							//(h)
    QList<QRegion> FRegionList;
    QList<QRegion> SRegionList;
};

#endif // HISTOGRAMVIEW_H

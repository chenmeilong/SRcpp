#ifndef BUTTERFLY_H
#define BUTTERFLY_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsScene>
#include <QGraphicsView>
class Butterfly : public QObject,public QGraphicsItem
{
    Q_OBJECT
public:
    explicit Butterfly(QObject *parent = 0);
    void timerEvent(QTimerEvent *);				//(a)定时器实现动画的原理是在定时器的timeEvent()中对QGraphicsItem进行重绘
    QRectF boundingRect() const;				//(b)为图元限制区域范围，所有继承自QGraphicsItem的自定义图元都必须实现此函数

signals:

public slots:
protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);	//重绘函数
private:
    bool up;									//(c)标识蝴蝶翅膀的位置，上或下
    QPixmap pix_up;      						//用于表示两幅蝴蝶的图片
    QPixmap pix_down;
    qreal angle;
};

#endif // BUTTERFLY_H

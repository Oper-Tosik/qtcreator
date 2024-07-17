#ifndef DRAWAREA_H
#define DRAWAREA_H

#include <QMainWindow>
#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <vector>
#include "R2Graph.h"

class DrawArea : public QWidget
{
    Q_OBJECT
public:
    double xmin, xmax, ymin, ymax;
    std::vector<R2Point> points;

    QPointF mapToPixels(const R2Point& t) const {
        double x = (t.x - xmin)/(xmax - xmin);
        double y = (t.y - ymin)/(ymax - ymin);
        return QPointF(x*width(), height()*(1. - y));
    }

    R2Point mapFromPixels(const QPointF& p) const {
        int w = width();
        int h = height();
        if (w == 0 || h == 0)
            return R2Point(0., 0.);
        double x = xmin + p.x()*(xmax - xmin)/w;
        double y = ymin + (h - p.y())*(ymax - ymin)/h;
        return R2Point(x, y);
    }

    explicit DrawArea(QWidget *parent = nullptr);

    void drawGrid(QPainter* painter);
    void drawPoints(QPainter* painter);
    void onClear();

    void paintEvent(QPaintEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void resizeEvent(QResizeEvent *event);

signals:

public slots:
};

#endif // DRAWAREA_H

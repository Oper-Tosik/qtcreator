#ifndef DRAWAREA_H
#define DRAWAREA_H

#include <QMainWindow>
#include <QWidget>
#include <vector>
#include "R2Graph.h"

class DrawArea : public QWidget
{
    Q_OBJECT
public:
    double xmin, xmax, ymin, ymax;
    std::vector<R2Point> points;

    std::vector<R2Point> convexHull;
    bool pictureComputed;

    int catchedPoint;   // -1, if a point is not catched

    void onDraw();
    void computeConvex();
    void onClear();

    QPointF mapToPixels(const R2Point& t) const {
        double x = width()*(t.x - xmin)/(xmax - xmin);
        double y = height()*(ymax - t.y)/(ymax - ymin);
        return QPointF(x, y);
    }

    R2Point mapFromPixels(const QPointF& p) const {
        int w = width();
        int h = height();
        if (w == 0 || h == 0)
            return R2Point(0, 0);

        double x = xmin + (p.x()/double(w))*(xmax - xmin);
        double y = ymax - (p.y()/double(h))*(ymax - ymin);
        return R2Point(x, y);
    }

    explicit DrawArea(QWidget *parent = 0);
    void drawGrid(QPainter* painter);
    void drawPoints(QPainter* painter);
    void drawConvexHull(QPainter* painter);

    int findPoint(const QPointF& p) const;

signals:

public slots:
    void paintEvent(QPaintEvent*);
    void mousePressEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void resizeEvent(QResizeEvent *);
};

#endif // DRAWAREA_H

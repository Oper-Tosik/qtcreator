#include <QPainter>
#include "drawarea.h"

DrawArea::DrawArea(QWidget *parent):
    QWidget{parent},
    xmin(-8.), xmax(8.),
    ymin(-6.), ymax(6.),
    points()
{

}

void DrawArea::paintEvent(QPaintEvent *) {
    QPainter painter(this);
    QBrush backgroundBrush(Qt::lightGray);
    int w = width();
    int h = height();
    QRect clientRect(0, 0, w, h);
    painter.fillRect(clientRect, backgroundBrush);
    drawGrid(&painter);
}

void DrawArea::drawGrid(QPainter *painter) {
    QPen grayPen(Qt::gray, 1);
    QPen blackPen(Qt::black, 3);

    painter->setPen(grayPen);
    int y0 = int(ymin);
    int y1 = int(ymax);
    for (int y = y0; y <= y1; ++y) {
        if (y == 0)
            continue;
        painter->drawLine(
            mapToPixels(R2Point(xmin, y)),
            mapToPixels(R2Point(xmax, y))
        );
    }

    int x0 = int(xmin);
    int x1 = int(xmax);
    for (int x = x0; x <= x1; ++x) {
        if (x == 0)
            continue;
        painter->drawLine(
            mapToPixels(R2Point(x, ymin)),
            mapToPixels(R2Point(x, ymax))
        );
    }

    painter->setPen(blackPen);
    painter->drawLine(
        mapToPixels(R2Point(xmin, 0.)),
        mapToPixels(R2Point(xmax, 0.))
    );
    painter->drawLine(
        mapToPixels(R2Point(0., ymin)),
        mapToPixels(R2Point(0., ymax))
    );

}

void DrawArea::mouseReleaseEvent(QMouseEvent *event) {
    QPointF = event->pos();
    R2Point t = mapFromPixels(pos);
    points.push_back(t);
    update();
}

void DrawArea::drawPoints(QPainter *painter) {
    QPen redPen(Qt::red, 1);
    QBrush redBrush(Qt::red);
    painter->setPen(redPen);
    painter->setBrush(redBrush);
    for (size_t i = 0; i < points.size(); ++i) {
        QPointF center = mapToPixels(points[i]);
        painter->drawEllipse(center.x(), center,y(), 8., 8.);
    }
}

void DrawArea::onClear() {
    points
}









































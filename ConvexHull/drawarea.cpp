#include <QPainter>
#include <QMouseEvent>
#include <QPainterPath>
#include "drawarea.h"
#include "convexHull.h"

const double threshold = 0.1;

DrawArea::DrawArea(QWidget *parent) :
    QWidget(parent),
    xmin(-8.),
    xmax(8.),
    ymin(-6.),
    ymax(6.),
    points(),
    convexHull(),
    pictureComputed(false),
    catchedPoint(-1)
{
    setMouseTracking(true);
}

void DrawArea::paintEvent(QPaintEvent*) {
    QPainter painter(this);
    painter.fillRect(
        QRect(0, 0, width(), height()),
        QBrush(Qt::lightGray)
    );
    drawGrid(&painter);

    painter.setRenderHints(QPainter::Antialiasing);
    drawPoints(&painter);
    if (pictureComputed) {
        drawConvexHull(&painter);
    }
}

void DrawArea::drawGrid(QPainter* painter) {
    QPen greyPen(Qt::gray, 1);
    QPen blackPen(Qt::black, 3);
    painter->setPen(greyPen);
    for (int y = int(ymin); y <= int(ymax); ++y) {
        if (y == 0)
            continue;
        painter->drawLine(
            mapToPixels(R2Point(xmin, y)),
            mapToPixels(R2Point(xmax, y))
        );
    }
    for (int x = int(xmin); x <= int(xmax); ++x) {
        if (x == 0)
            continue;
        painter->drawLine(
            mapToPixels(R2Point(x, ymin)),
            mapToPixels(R2Point(x, ymax))
        );
    }

    painter->setPen(blackPen);
    painter->drawLine(
        mapToPixels(R2Point(xmin, 0)),
        mapToPixels(R2Point(xmax, 0))
    );
    painter->drawLine(
        mapToPixels(R2Point(0, ymin)),
        mapToPixels(R2Point(0, ymax))
    );
}

void DrawArea::drawConvexHull(QPainter *painter) {
    if (convexHull.size() <= 1)
        return;

    QPen bluePen(Qt::blue, 4);
    painter->setPen(bluePen);
    painter->setBrush(Qt::NoBrush);

    QPainterPath path;
    path.moveTo(mapToPixels(convexHull[0]));
    for (size_t i = 1; i < convexHull.size(); ++i) {
        path.lineTo(mapToPixels(convexHull[i]));
    }
    path.lineTo(mapToPixels(convexHull[0]));

    painter->drawPath(path);

    QPen greenPen(Qt::darkGreen, 1);
    painter->setPen(greenPen);
    painter->setBrush(QBrush(Qt::darkGreen));
    for (size_t i = 0; i < convexHull.size(); ++i) {
        painter->drawEllipse(
            mapToPixels(convexHull[i]), 4., 4.
        );
    }

}

void DrawArea::mouseReleaseEvent(QMouseEvent* e) {
    QPointF pos = e->pos();
    R2Point t = mapFromPixels(pos);
    if (catchedPoint < 0) {
        points.push_back(t);
    } else {
        points[catchedPoint] = t;
    }
    catchedPoint = (-1);
    if (pictureComputed)
        computeConvex();
    setCursor(Qt::ArrowCursor);
    update();
}

void DrawArea::drawPoints(QPainter* painter) {
    QPen redPen(Qt::red, 3);
    painter->setPen(redPen);
    R2Vector dx(0.3, 0);
    R2Vector dy(0, 0.3);
    for (int i = 0; i < int(points.size()); ++i) {
        R2Point t = points[i];
        painter->drawLine(
            mapToPixels(t - dx),
            mapToPixels(t + dx)
        );
        painter->drawLine(
            mapToPixels(t - dy),
            mapToPixels(t + dy)
        );
    }

}

void DrawArea::onClear() {
    points.clear();
    convexHull.clear();
    pictureComputed = false;
    catchedPoint = (-1);
    update();
}

void DrawArea::onDraw() {
    if (points.size() < 2)
        return;
    computeConvex();
    update();
}

void DrawArea::computeConvex() {
    computeConvexHull(points, convexHull);
    pictureComputed = true;
}

void DrawArea::resizeEvent(QResizeEvent *) {
    int w = width();
    int h = height();
    if (w == 0 || h == 0)
        return;
    double aspect = double(h)/double(w);
    double dy = (xmax - xmin)*aspect;
    ymin = (-dy/2.);
    ymax = ymin + dy;
}

void DrawArea::mouseMoveEvent(QMouseEvent* event) {
    R2Point t = mapFromPixels(event->pos());
    if (catchedPoint >= 0) {
        points[catchedPoint] = t;
        if (pictureComputed) {
            onDraw();
        }
        update();
    } else {
        int idx = findPoint(event->pos());
        if (idx >= 0) {
            setCursor(Qt::OpenHandCursor);
        } else {
            setCursor(Qt::ArrowCursor);
        }
    }
}

int DrawArea::findPoint(const QPointF& p) const {
    R2Point t = mapFromPixels(p);
    for (int i = 0; i < int(points.size()); ++i) {
        double d = t.distance(points[i]);
        if (d <= threshold)
            return i;
    }
    return (-1);
}

void DrawArea::mousePressEvent(QMouseEvent* event) {
    int idx = findPoint(event->pos());
    if (idx < 0)
        return;
    catchedPoint = idx;
}



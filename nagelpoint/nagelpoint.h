#ifndef NAGELPOINT_H
#define NAGELPOINT_H

#include <QMainWindow>

class DrawArea;

extern DrawArea* drawArea;

QT_BEGIN_NAMESPACE
namespace Ui { class nagelpoint; }
QT_END_NAMESPACE


class nagelpoint : public QMainWindow
{
    Q_OBJECT

public:
    explicit nagelpoint(QWidget *parent = 0);
    ~nagelpoint();
    void showCoordRange(
        double xmin, double xmax,
        double ymin, double ymax
    );

private:
    void setCoordinates();

private slots:
    void on_xmin_editingFinished();
    void on_xmax_editingFinished();
    void on_ymin_editingFinished();
    void on_clearButton_clicked();
    void on_drawButton_clicked();
    void on_closeButton_clicked();

private:
    Ui::nagelpoint *ui;
};

extern nagelpoint* nagelPoint;

#endif // NAGELPOINT_H

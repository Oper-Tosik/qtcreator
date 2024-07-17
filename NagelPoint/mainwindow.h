#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <math.h>

class DrawArea;

extern DrawArea* drawArea;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void showCoordRange(
        double xmin, double xmax,
        double ymin, double ymax
    );

private:
    void setCoordinates();

private slots:
    void on_ALineX_editingFinished();
    void on_ALineY_editingFinished();
    void on_BLineX_editingFinished();
    void on_BLineY_editingFinished();
    void on_CLineX_editingFinished();
    void on_CLineY_editingFinished();

    void on_clearButton_clicked();
    void on_drawButton_clicked();

    void on_NagelButton_clicked();
    void on_GergonneButton_clicked();
    void on_LemoineButton_clicked();
    void on_FermatButton_clicked();

private:
    Ui::MainWindow *ui;
};

extern MainWindow* mainWindow;

#endif // MAINWINDOW_H

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Margin right
void MainWindow::on_ALineX_editingFinished() {}

void MainWindow::on_ALineY_editingFinished() {}

void MainWindow::on_BLineX_editingFinished() {}

void MainWindow::on_BLineY_editingFinished() {}

void MainWindow::on_CLineX_editingFinished() {}

void MainWindow::on_CLineY_editingFinished() {}

void MainWindow::on_drawButton_clicked()
{
    ui->drawArea->onDraw();
}

void MainWindow::on_clearButton_clicked()
{
    ui->drawArea->onClear();
}

//Top bar
void MainWindow::on_GergonneButton_clicked()
{
    ui->drawArea->onDraw();
}

void MainWindow::on_NagelButton_clicked()
{
    ui->drawArea->onDraw();
}

void MainWindow::on_LemoineButton_clicked()
{
    ui->drawArea->onDraw();
}

void MainWindow::on_FermatButton_clicked()
{
    ui->drawArea->onDraw();
}

//void MainWindow::setCoordinates() {
//    //points of triagles
//    double pointA = ui->ALine->text().toDouble();
//    double pointB = ui->BLine->text().toDouble();
//    double pointC = ui->CLine->text().toDouble();

//    double sideA = fabs(pointB - pointC);
//    double sideB = fabs(pointC - pointA);
//    double sideC = fabs(pointA - pointB);

//    if (sideA < sideB + sideC &&
//        sideB < sideA + sideC &&
//        sideC < sideA + sideB)
//        return;

//    // drawArea->setCoordinates(xmin, xmax, ymin);
//    // We try to save the relative position of center
//    double yCenter = (0. - ymin)/(ymax - ymin);
//    double aspect = (double) drawArea->height() / (double) drawArea->width();
//    double dx = xmax - xmin;
//    double dy = dx*aspect;
//    ymin = 0. - dy*yCenter;
//    ymax = ymin + dy;

//    QString txt;
//    // txt.sprintf("%.1f", ymin);
//    txt = QString::number(ymin, 'f', 1);
//    ui->ymin->setText(txt);

//    // txt.sprintf("%.1f", ymax);
//    txt = QString::number(ymax, 'f', 1);
//    ui->ymax->setText(txt);

//    drawArea->setCoordinates(xmin, xmax, ymin, ymax);
//    // drawArea->update();
//}

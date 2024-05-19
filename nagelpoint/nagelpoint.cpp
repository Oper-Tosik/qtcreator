#include "nagelpoint.h"
#include "ui_nagelpoint.h"

nagelpoint::nagelpoint(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::nagelpoint)
{
    ui->setupUi(this);
}

nagelpoint::~nagelpoint()
{
    delete ui;
}


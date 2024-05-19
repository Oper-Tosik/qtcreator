#include "nagelpoint.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    nagelpoint w;
    w.show();
    return a.exec();
}

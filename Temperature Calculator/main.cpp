#include "TemperatureCalculator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TemperatureCalculator w;
    w.show();
    return a.exec();
}

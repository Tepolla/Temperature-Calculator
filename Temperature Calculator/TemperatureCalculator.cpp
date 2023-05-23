#include "TemperatureCalculator.h"
#include <QPushButton>

TemperatureCalculator::TemperatureCalculator(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

TemperatureCalculator::~TemperatureCalculator()
{
}

void TemperatureCalculator::onButtonClicked(QPushButton* button){

}
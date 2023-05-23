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
    if (button == ui.StartingFButton) {
        StartingUnit = 'F';
        ui.StartingFButton->setStyleSheet("background-color: gray;");
        ui.StartingCButton->setStyleSheet("background-color: white;");
        ui.StartingKButton->setStyleSheet("background-color: white;");
    } else if (button == ui.StartingCButton) {
        StartingUnit = 'C';
        ui.StartingFButton->setStyleSheet("background-color: white;");
        ui.StartingCButton->setStyleSheet("background-color: gray;");
        ui.StartingKButton->setStyleSheet("background-color: white;");
    }
    else if (button == ui.StartingKButton) {
        StartingUnit = 'K';
        ui.StartingFButton->setStyleSheet("background-color: white;");
        ui.StartingCButton->setStyleSheet("background-color: white;");
        ui.StartingKButton->setStyleSheet("background-color: gray;");
    }

    if (button == ui.FButton) {
        ConversionUnit = 'F';
        ui.FButton->setStyleSheet("background-color: gray;");
        ui.CButton->setStyleSheet("background-color: white;");
        ui.KButton->setStyleSheet("background-color: white;");
    }
    else if (button == ui.CButton) {
        ConversionUnit = 'C';
        ui.FButton->setStyleSheet("background-color: white;");
        ui.CButton->setStyleSheet("background-color: gray;");
        ui.KButton->setStyleSheet("background-color: white;");
    }
    else if (button == ui.KButton) {
        ConversionUnit = 'K';
        ui.FButton->setStyleSheet("background-color: white;");
        ui.CButton->setStyleSheet("background-color: white;");
        ui.KButton->setStyleSheet("background-color: gray;");
    }

    if (StartingUnit == ConversionUnit) {
        /*QString input = ui.InputBox->toPlainText;
        ui.ConvertedValueLabel->setText();*/
    }
    else {
        ui.ConvertedValueLabel->setText("Replace this with some converted unit");
    }
}
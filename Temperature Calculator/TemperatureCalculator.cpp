#include "TemperatureCalculator.h"
#include "tempConversion.h"
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
    QString newText = ui.InputBox->toPlainText();
    bool isValid;
    //long double value = newText.toLongDouble(&isValid);
    //double value = newText.toDouble(&isValid);
    long double value = std::stold(newText.toStdString());
    if(isValid){
        if (button == ui.StartingFButton) {
            StartingUnit = 'F';
            ui.StartingFButton->setStyleSheet("background-color: black;");
            ui.StartingCButton->setStyleSheet("background-color: white;");
            ui.StartingKButton->setStyleSheet("background-color: white;");
            ui.ConvertedValueLabel->setText("Works");
        }
        else if (button == ui.StartingCButton) {
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
            // GONNA HAVE TO FIGURE OUT HOW TO TURN THE INPUTBOX DATA INTO LONG DOUBLE
            // AS WELL AS MAKE SURE IT'S A PROPER NUMBER
            tempConversion tC(StartingUnit, ConversionUnit, value);
            ui.ConvertedValueLabel->setText("Replace this with some converted unit");
        }
    }


}
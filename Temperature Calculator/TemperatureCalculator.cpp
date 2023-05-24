#include "TemperatureCalculator.h"
#include "tempConversion.h"
#include <QPushButton>

TemperatureCalculator::TemperatureCalculator(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    connect(ui.StartingFButton, &QPushButton::clicked, this, &TemperatureCalculator::onButtonClicked);
    connect(ui.StartingCButton, &QPushButton::clicked, this, &TemperatureCalculator::onButtonClicked);
    connect(ui.StartingKButton, &QPushButton::clicked, this, &TemperatureCalculator::onButtonClicked);
    connect(ui.FButton, &QPushButton::clicked, this, &TemperatureCalculator::onButtonClicked);
    connect(ui.CButton, &QPushButton::clicked, this, &TemperatureCalculator::onButtonClicked);
    connect(ui.KButton, &QPushButton::clicked, this, &TemperatureCalculator::onButtonClicked);
}

TemperatureCalculator::~TemperatureCalculator()
{
}

void TemperatureCalculator::onButtonClicked()
{
    QString newText = ui.InputBox->toPlainText();
    bool isValid;
    long double value = newText.toDouble(&isValid);
    if (isValid) {
        QPushButton* button = qobject_cast<QPushButton*>(sender());

        if (button == ui.StartingFButton) {
            StartingUnit = 'F';
            ui.StartingFButton->setStyleSheet("QPushButton { background-color: gray; }");
            ui.StartingCButton->setStyleSheet("QPushButton { background-color: white; }");
            ui.StartingKButton->setStyleSheet("QPushButton { background-color: white; }");
        }
        else if (button == ui.StartingCButton) {
            StartingUnit = 'C';
            ui.StartingFButton->setStyleSheet("QPushButton { background-color: white; }");
            ui.StartingCButton->setStyleSheet("QPushButton { background-color: gray; }");
            ui.StartingKButton->setStyleSheet("QPushButton { background-color: white; }");
        }
        else if (button == ui.StartingKButton) {
            StartingUnit = 'K';
            ui.StartingFButton->setStyleSheet("QPushButton { background-color: white; }");
            ui.StartingCButton->setStyleSheet("QPushButton { background-color: white; }");
            ui.StartingKButton->setStyleSheet("QPushButton { background-color: gray; }");
        }
        
        if (button == ui.FButton) {
            ConversionUnit = 'F';
            ui.FButton->setStyleSheet("QPushButton { background-color: gray; }");
            ui.CButton->setStyleSheet("QPushButton { background-color: white; }");
            ui.KButton->setStyleSheet("QPushButton { background-color: white; }");
        }
        else if (button == ui.CButton) {
            ConversionUnit = 'C';
            ui.FButton->setStyleSheet("QPushButton { background-color: white; }");
            ui.CButton->setStyleSheet("QPushButton { background-color: gray; }");
            ui.KButton->setStyleSheet("QPushButton { background-color: white; }");
        }
        else if (button == ui.KButton) {
            ConversionUnit = 'K';
            ui.FButton->setStyleSheet("QPushButton { background-color: white; }");
            ui.CButton->setStyleSheet("QPushButton { background-color: white; }");
            ui.KButton->setStyleSheet("QPushButton { background-color: gray; }");
        }

        if (StartingUnit == ConversionUnit) {
            QString convertedValue = QString::number(value, 'g', 15);
            ui.ConvertedValueLabel->setText(convertedValue);
        }
        else {
            tempConversion tC(StartingUnit, ConversionUnit, value);
            QString convertedValue = QString::number(tC.getConvertedValue(), 'g', 15);
            ui.ConvertedValueLabel->setText(convertedValue);
        }
    }
}

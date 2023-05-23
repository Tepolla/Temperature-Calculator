#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TemperatureCalculator.h"

class TemperatureCalculator : public QMainWindow
{
    Q_OBJECT

public:
    TemperatureCalculator(QWidget *parent = nullptr);
    ~TemperatureCalculator();
    QPushButton* createButton(QWidget* parent);

private slots:
    void onButtonClicked(QPushButton* button);

private:
    Ui::TemperatureCalculatorClass ui;
    char StartingUnit;
    char ConversionUnit;
};
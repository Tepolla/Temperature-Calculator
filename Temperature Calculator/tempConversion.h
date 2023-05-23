#pragma once

class tempConversion {
private:
	long double F, C, K;

	long double FahrenheitToCelsius();
	long double CelsiusToFahrenheit();
	long double KelvinToCelsius();
	long double CelsiusToKelvin();

public:
	tempConversion(char S, long double sV);
	long double getFahrenheit();
	long double getCelsius();
	long double getKelvin();
};
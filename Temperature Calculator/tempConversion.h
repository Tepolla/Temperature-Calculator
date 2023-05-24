#pragma once

class tempConversion {
private:

	long double convertedValue;


	long double FahrenheitToCelsius(long double);
	long double CelsiusToFahrenheit(long double);
	long double KelvinToCelsius(long double);
	long double CelsiusToKelvin(long double);
	long double FahrenheitToKelvin(long double);
	long double KelvinToFahrenheit(long double);

public:
	tempConversion(char, char, long double);
	long double getConvertedValue();
};
#include "tempConversion.h"

tempConversion::tempConversion(char S, long double sV) {
	switch (S) {
	case 'F':
		this->F = sV;
		this->C = FahrenheitToCelsius();
		this->K = CelsiusToKelvin();
		break;
	case 'C':
		this->C = sV;
		this->F = CelsiusToFahrenheit();
		this->K = CelsiusToKelvin();
		break;
	case 'K':
		this->K = sV;
		this->C = KelvinToCelsius();
		this->F = CelsiusToFahrenheit();
		break;
	}
}

long double tempConversion::FahrenheitToCelsius() {
	return ((this->F - 32) * 5) / 9;
}

long double tempConversion::CelsiusToFahrenheit() {
	return ((this->C * 9) / 5) + 32;
}

long double tempConversion::KelvinToCelsius() {
	return (this->K - 273.15);
}

long double tempConversion::CelsiusToKelvin() {
	return (this->C + 273.15);
}

long double tempConversion::getFahrenheit() {
	return this->F;
}

long double tempConversion::getCelsius() {
	return (this->C);
}

long double tempConversion::getKelvin() {
	return this->K;
}
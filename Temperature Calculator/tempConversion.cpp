#include "tempConversion.h"

tempConversion::tempConversion(char S, char C, long double sV) {
	if (S != '\0' && C != '\0') {

		switch (S) {
		case 'F':
			if (C == 'C') {
				convertedValue = FahrenheitToCelsius(sV);
			}
			else {
				convertedValue = FahrenheitToKelvin(sV);
			}
			break;
		case 'C':
			if (C == 'F') {
				convertedValue = CelsiusToFahrenheit(sV);
			}
			else {
				convertedValue = CelsiusToKelvin(sV);
			}
			break;
		case 'K':
			if (C == 'F') {
				convertedValue = KelvinToFahrenheit(sV);
			}
			else {
				convertedValue = KelvinToCelsius(sV);
			}
			break;
		}
	}

}

long double tempConversion::FahrenheitToCelsius(long double F) {
	return ((F - 32) * 5) / 9;
}

long double tempConversion::CelsiusToFahrenheit(long double C) {
	return ((C * 9) / 5) + 32;
}

long double tempConversion::KelvinToCelsius(long double K) {
	return (K - 273.15);
}

long double tempConversion::CelsiusToKelvin(long double C) {
	return (C + 273.15);
}

long double tempConversion::FahrenheitToKelvin(long double F) {
	return ((F - 32) * 5 / 9 + 273.15);
}

long double tempConversion::KelvinToFahrenheit(long double K) {
	return ((K - 273.15) * 9 / 5 + 32);
}

long double tempConversion::getConvertedValue() {
	return convertedValue;
}
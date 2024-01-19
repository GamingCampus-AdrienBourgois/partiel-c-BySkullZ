#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
	if (_from == TemperatureUnits::CELSIUS && _to == TemperatureUnits::FAHRENHEIT) {
		return 9 / 5 * _value + 32;
	}
	else if (_from == TemperatureUnits::KELVIN && _to == TemperatureUnits::FAHRENHEIT) {
		return 9 / 5 * (_value - 273) + 32;
	}
	else if (_from == TemperatureUnits::FAHRENHEIT && _to == TemperatureUnits::CELSIUS) {
		return 5 / 9 * (_value - 32);
	}
	else if (_from == TemperatureUnits::CELSIUS && _to == TemperatureUnits::KELVIN) {
		return _value + 273;
	}
	else if (_from == TemperatureUnits::KELVIN && _to == TemperatureUnits::CELSIUS) {
		return _value - 273;
	}
	else if (_from == TemperatureUnits::FAHRENHEIT && _to == TemperatureUnits::KELVIN) {
		return 5 / 9 * (_value - 32) + 273;
	}

	return -1.0f;
}

#endif

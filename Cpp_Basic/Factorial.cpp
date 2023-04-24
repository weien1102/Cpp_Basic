#include "Factorial.h"

int Factorial::getValue() {
	if (number == 0) value=1;
	else {
		int n = number;
		number--;
		value = n * getValue();
	}

	return value;
}


#include <iostream>
using namespace std;

int main()
{
	//std::cout << "Hello World!\n";
	//算術運算子
	int number1 = 7;
	int number2 = 3;

	cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
	cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
	cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
	cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
	cout << number1 << " % " << number2 << " = " << number1 % number2 << endl;

	number1++;
	number1 = number1 + 1;
	number1 += 1;

	++number1;
	number1--;
	--number1;

	int a = 21;
	int b = 10;
	int c;

	if (a == b) {
		cout << "Line 1 - a is equal to b" << endl;
	}
	else {
		cout << "Line 1 - a is not equal to b" << endl;
	}

	if (a < b) {
		cout << "Line 2 - a is less than b" << endl;
	}
	else {
		cout << "Line 2 - a is not less than b" << endl;
	}

	if (a > b) {
		cout << "Line 3 - a is greater than b" << endl;
	}
	else {
		cout << "Line 3 - a is not greater than b" << endl;
	}

	/* Let's change the values of a and b */
	a = 5;
	b = 20;
	if (a <= b) {
		cout << "Line 4 - a is either less than \ or equal to  b" << endl;
	}

	if (b >= a) {
		cout << "Line 5 - b is either greater than \ or equal to b" << endl;
	}

	//bitwise operation
	int value1 = 0b00111100; // 60
	int value2 = 0b00001101; // 13

	cout << "value1 = " << value1 << endl;
	cout << "value2 = " << value2 << endl;

	// bitwise and
	// (value1 & value2) = 0b00001100
	cout << "value1 & value2 = " << (value1 & value2) << endl;

	// bitwise or
	// (value1 | value2) = 0b00111101; 
	cout << "value1 | value2 = " << (value1 | value2) << endl;

	// bitwise xor
	// (value1 ^ value2) = 0b00110001
	cout << "value1 ^ value2 = " << (value1 ^ value2) << endl;

	// bitwise not
	// (~value1) = 0b11000011
	cout << "~value1 = " << (~value1) << endl;
}

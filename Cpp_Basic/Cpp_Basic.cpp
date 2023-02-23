#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	int number1 = 7;
	int number2 = 3;

	cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
	cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
	cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
	cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
	cout << number1 << " % " << number2 << " = " << number1 % number2 << endl;

	cout << "number1 ++ = " << number1++ << endl;
	number1++;
	// number1 = number + 1;
	// number1 += 1;

	cout << "++number1 = " << ++number1 << endl;
	number1++;

	cout << "number1 (binary) = " << bitset<8>(number1) << endl;
	cout << "number2 (binary) = " << bitset<8>(number2) << endl;

	//bitwise operator, &, | ~
	cout << "number1 & number2 =" << bitset<8>(number1 & number2) << endl;
	cout << "number1 | number2 =" << bitset<8>(number1 | number2) << endl;
	cout << "~number1 = " << bitset<8>(~number1) << endl;

	//logical (relational) operators, &&, ||, !, ^
	bool a0 = false;
	bool a1 = true;
	cout << "a0 && a1 = " << (a0 && a1) << endl;
	cout << "a0 || a1 = " << (a0 || a1) << endl;
	cout << "a0 ^ a1 = " << (a0 ^ a1) << endl;
	cout << "!a0 = " << (!a0) << endl;

	//bitwise shift
	cout << "number1 (decimal) = " << dec << number1 << endl;
	cout << "number1 (binary) = " << bitset<8>(number1) << endl;
	int number1a = (number1 << 1);
	int number1b = (number1 >> 1);
	cout << "number1 shift left  = " << number1a << endl;
	cout << "number1 shift left  = " << bitset<8>(number1a) << endl;
	cout << "number1 shift right = " << number1b << endl;
	cout << "number1 shift right = " << bitset<8>(number1b) << endl;
	cout << "number1 (decimal) = " << dec << number1 << endl;
}

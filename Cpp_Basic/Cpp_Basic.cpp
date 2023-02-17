#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Hello World!\n";

	// number systems
	//int number1{ 15 };
	//int number1(15);

	int number1 = 15; // Decimal
	int number2 = 017; // Octal
	int number3 = 0x0F; // Hexadecimal
	int number4 = 0b00001111; // Binary

	cout << "number1 : " << number1 << endl;
	cout << "number2 : " << number2 << endl;
	cout << "number3 : " << number3 << endl;
	cout << "number4 : " << number4 << endl;

	// Integer types
	int a0{};
	int a1{ 10 };

	int b0(5);

	int c0 = 10;

	int d = sizeof(a0);
	cout << "size of d : " << d << endl;

	// Integer modifier
	// signed, unsigned

	signed int e0 = 10;
	signed int e1 = -10;

	//unsigned int value4{-5}; // Compiler error.

	//short and long

	//Declare and initialize the variables
	float fnumber1{ 1.12345678901234567890f }; // Precision : 7
	double fnumber2{ 1.12345678901234567890 }; // Precision : 15
	long double fnumber3{ 1.12345678901234567890L };

	//Precision
	cout << setprecision(20); // Control the precision from std::cout.
	cout << "fnumber1 is : " << fnumber1 << endl; //7 digits
	cout << "fnumber2 is : " << fnumber2 << endl; // 15'ish digits
	cout << "fnumber3 is : " << fnumber3 << endl; // 15+ digits


	// bool
	bool bvalue1 = true;
	bool bvalve2 = false;

	// char
	char cvalue = 'A';
	//char cvalue = 65;
	cout << "the ascii code of: " << cvalue << " is " << static_cast<int>(cvalue) << endl;
	cout << "the ascii code of: " << cvalue << " is " << (int)cvalue << endl;


	// auto
	auto var1{ 12 };
	auto var2{ 1.2 };
	auto var3{ 1.2f };
	auto var4{ 'a' };

	// integer limit
	cout << "Int min: " << numeric_limits<int>::min() << endl;
	cout << "Int min: " << INT_MIN << endl;

	cout << "Int max: " << numeric_limits<int>::max() << endl;
	cout << "Int max: " << INT_MAX << endl;

	cout << "Unsigned Int Min: " << numeric_limits<unsigned int>::min() << endl;
	cout << "Unsigned Int Max: " << numeric_limits<unsigned int>::max() << endl;

	cout << "Long Int Min " << numeric_limits<long int>::min() << endl;
	cout << "Long Int Max " << numeric_limits<long int>::max() << endl;

	cout << "Unsigned Long Int Min " << numeric_limits<unsigned long int>::min() << endl;
	cout << "Unsigned Long Int Max " << numeric_limits<unsigned long int>::max() << endl;


}

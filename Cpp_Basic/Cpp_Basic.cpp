#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//std::cout << "Hello World!\n";

	//設定變數初始值
	int number1 = 15;
	int number2(20);
	int number3{ 30 };
	int number4 = 017;
	int number5 = 0x0f;

	cout << "number1= " << number1 << endl;
	cout << "number2= " << number2 << endl;
	cout << "number3= " << number3 << endl;
	cout << "number4= " << number4 << endl;
	cout << "number5= " << number5 << endl;
	cout << "number1的記憶體大小" << sizeof(number1) << endl;

	// signed, unsigned
	signed int a0 = 10;
	signed int a1 = -10;
	cout << "unsigned int a1=" << a1 << endl;

	//short, long
	short int b0 = 10;
	cout << "short int b0 = " << b0 << ", size of b0 is " << sizeof(b0) << endl;
	long int b1 = 10;
	cout << "long int b1 = " << b1 << ", size of b1 is " << sizeof(b1) << endl;

	//float, double
	float fnumber1{ 1.1234567890123456789f };
	double fnumber2{ 1.1234567890123456789 };
	long double fnumber3{ 1.1234567890123456789L };

	cout << "float fnumber1 = " << fnumber1 << ",size of fnumber1 is " << sizeof(fnumber1) << endl;
	cout << "double fnumber2 = " << fnumber2 << ",size of fnumber2 is " << sizeof(fnumber2) << endl;
	cout << "long double fnumber3 = " << fnumber3 << ",size of fnumber3 is " << sizeof(fnumber3) << endl;

	//precision
	cout << setprecision(20);
	cout << "重新設定精確度" << endl;
	cout << "float fnumber1 = " << fnumber1 << ",size of fnumber1 is " << sizeof(fnumber1) << endl;
	cout << "double fnumber2 = " << fnumber2 << ",size of fnumber2 is " << sizeof(fnumber2) << endl;
	cout << "long double fnumber3 = " << fnumber3 << ",size of fnumber3 is " << sizeof(fnumber3) << endl;

	//bool
	bool bvalue1 = true;
	bool bvalue2 = 0;
	bool bvalue3 = 5;

	//char
	char cvalue1 = 'A';
	char cvalue2 = 65;
	cout << "the ascii code of " << cvalue1 << " is " << static_cast<int>(cvalue1) << endl;
	cout << "the ascii code of " << cvalue1 << " is " << (int)cvalue1 << endl;

	//auto
	auto autovar1{ 12 };
	auto autovar2 = 12.0;
	auto autovar3(12.0f);
	auto autovar4{ 'a' };

	//integer limit
	cout << "Integer min: " << numeric_limits<int>::min() << endl;
	cout << "Integer max: " << numeric_limits<int>::max() << endl;
	cout << "Unsigned Integer min: " << numeric_limits<unsigned int>::min() << endl;
	cout << "Unsigned Integer max: " << numeric_limits<unsigned int>::max() << endl;

	//MSVC specific
	cout << "Integer min: " << INT_MIN << endl;
}

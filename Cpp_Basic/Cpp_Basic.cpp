#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/*cout << "Hello World!\n";*/
	int number1 = 15; //decimal
	int number2 = 017; //octal
	int number3 = 0x0f; //hexadecimal
	int number4 = 0b00001111; //binary

	cout << "number1 = " << hex << number1 << endl;
	cout << dec;
	cout << "number2 = " << number2 << endl;
	cout << "number3 = " << number3 << endl;
	cout << "number4 = " << number4 << endl;


	int a0;
	int a1{ 10 };
	int b0(15);

	cout << "size of b0 = " << sizeof(b0) << endl;

	// modifier: signed, unsigned, short, long
	signed int e0 = 10;
	unsigned int e1 = -10;

	float fnumber1{ 1.12345678901234567890 };
	double fnumber2{ 1.12345678901234567890 };
	long double fnumber3{ 1.12345678901234567890L };

	// precision
	cout << setprecision(20);
	cout << "fnumber1 = " << fnumber1 << endl;
	cout << "funmber2 = " << fnumber2 << endl;
	cout << "fnumber3 = " << fnumber3 << endl;

	// bool
	bool bvalue1 = 5; // true
	bool bvalue2 = 0; // false
	cout << "bvalue1 = " << boolalpha << bvalue1 << endl;
	cout << "bvalue2 = " << noboolalpha << bvalue2 << endl;

	// auto
	auto var1{ 12 };
	auto var2 = 12.0;
	auto var3 = 12.0f;
	auto var4('a');

	// integer limit
	cout << "short min: " << numeric_limits<short>::min() << endl;
	cout << "short max: " << numeric_limits<short>::max() << endl;
}

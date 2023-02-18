#include <iostream>
using namespace std;

int main()
{
    //std::cout << "Hello World!\n";

    int number1 = 15;
    int number2(15);
    int number3{ 15 };
    int number1a = 017; //Octal八進位
    int number1b = 0x0f; //Hexadecimal十六進位
    int number1c = 0b00001111; //Binary

    cout << "number1 = " << number1 << endl;
    cout << "the size of number1 is " << sizeof(number1) << endl;

    unsigned int a = 10;
    int b = -10;

    float fnumber1{ 1.12345678901234567890f };
    double fnumber2{ 1.12345678901234567890 };
    long double fnumber3{ 1.12345678901234567890L };
    cout << "the size of " << fnumber1 << " is " << sizeof(fnumber1) << endl;
    cout << "the size of " << fnumber2 << " is " << sizeof(fnumber2) << endl;
    cout << "the size of " << fnumber3 << " is " << sizeof(fnumber3) << endl;


    //bool
    bool bvalue1 = 5; //true
    bool bvalue2 = 0; //false
    cout << "bvalue1 is " << boolalpha << bvalue1 << endl;
    cout << "bvalue2 is " << noboolalpha << bvalue2 << endl;

    //char
    char cvalue1 = 'A';
    char cvalue2 = 65;
    cout << "the ascii code of " << cvalue1 << " is " << static_cast<int>(cvalue1) << endl;
    cout << "the ascii code of " << cvalue2 << " is " << (int)cvalue2 << endl;

    //auto
    auto autovar1{ 12 };
    auto autovar2{ 12.0 };
    auto autovar3{ 'A' };
    //auto autovar4; //compile error

    //integer limit
    cout << "Integer min: " << numeric_limits<int>::min() << endl;
    cout << "Integer max: " << numeric_limits<int>::max() << endl;
    cout << "Unsigned Integer min: " << numeric_limits<unsigned int>::min() << endl;
    cout << "Unsigned Integer max: " << numeric_limits<unsigned int>::max() << endl;
    return 0;
}

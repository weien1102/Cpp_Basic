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
    return 0;
}

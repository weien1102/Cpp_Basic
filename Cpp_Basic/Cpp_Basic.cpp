#include <iostream>
using namespace std;

int main()
{
    //std::cout << "Hello World!\n";
    int number1 = 5;
    int number2 = 3;

    //+, - , *, /, %
    cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
    cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
    cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
    cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
    cout << number1 << " % " << number2 << " = " << number1 % number2 << endl;

    // ++, --
    number1++;
    // cout << number1 << endl;
    // number1 = number1 + 1;
    // number += 1;
    cout << "number1++ =" << number1 << endl;

    ++number1;
    cout << "++number1 =" << number1 << endl;

    //關係運算子, >, <,  >=,  <=, ==, !=
    cout << number1 << " > " << number2 << " is " << boolalpha << (number1 > number2) << endl;
    cout << number1 << " < " << number2 << " is " << noboolalpha << (number1 < number2) << endl;

    //位元運算子, bitwise operators:
    //bitwise and
    cout << "number1 = " << number1 << endl;
    cout << "number2 = " << number2 << endl;
    cout << number1 << " & " << number2 << " = " << (number1 & number2) << endl;

    //bitwise or
    cout << "number1 = " << number1 << endl;
    cout << "number2 = " << number2 << endl;
    cout << number1 << " | " << number2 << " = " << (number1 | number2) << endl;

    //bitwise not
    cout << "number1 = " << number1 << endl;
    cout << "~" << number1 << " = " << (~number1)<< endl;

    //bitwise xor
    cout << "number1 = " << number1 << endl;
    cout << "number2 = " << number2 << endl;
    cout << number1 << " ^ " << number2 << " = " << (number1 ^ number2) << endl;

}

#include <iostream>
using namespace std;

void swap(int& x, int& y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    return;
}

int main()
{
    int i = 5;
    double d;

    int& i_ref = i;
    double& d_ref = d;

    cout << "Value of i = " << i << endl;
    cout << "Value of i reference = " << i_ref << endl;
    cout << endl;

    i_ref = 10;
    cout << "Value of i = " << i << endl;
    cout << "Value of i reference = " << i_ref << endl;
    cout << endl;

    d = 11.5;
    cout << "Value of d = " << d << endl;
    cout << "Value of d reference = " << d_ref << endl;

    int a = 100;
    int b = 200;
    cout << "swap前， a = " << a << endl;
    cout << "swap前， b = " << b << endl;
    swap(a, b);
    cout << "swap後， a = " << a << endl;
    cout << "swap後， b = " << b << endl;
}

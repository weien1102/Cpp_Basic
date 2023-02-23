#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;

const double PI = 3.1415926;
int main()
{
    int number = 250;
    cout << "number = " << number << endl;

    cout << "number (hex) = " << hex << number << endl;
    cout << "number (oct) = " << oct << number << endl;
    cout << "number (dec) = " << dec << number << endl;
    cout << "number (binary) = " << bitset<16>(number) << endl;

    cout << setfill('*') << setw(10) << number << endl;

    char a0 = 'A'; 
    char a1 = 65;
    cout << "a0 = " << a0 << endl;
    cout << "a1 = " << a1 << endl;

    const int WIDTH = 15;

    cout << setfill(' ');
    cout.setf(ios::right);
    //cout << right;
    cout << setw(WIDTH / 2) << "半徑" << setw(WIDTH) << "圓周長" << endl;
    cout.setf(ios::fixed);
    for (double radius = 1; radius <= 6; radius += 0.5) {
        cout << setprecision(1) << setw(WIDTH / 2) << radius << setprecision(6) << setw(WIDTH) << 2 * PI * radius << endl;
    }

    return 0;
}
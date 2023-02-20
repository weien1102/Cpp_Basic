#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.1415926;
int main()
{
    //std::cout << "Hello World!\n";
    int number = 250;
    //int number(250);
    //int number{250};
    //int number;

    //輸出基底
    cout << showbase;

    //輸出10進位數字格式
    cout << number << endl;

    //輸出16進位數字格式
    cout << hex << number << endl;

    //輸出8進位數字格式
    cout << oct << number << endl;

    cout << dec << setfill('*') << setw(10) << number << endl;

    double number2 = 12;
    cout << "number2 = " << showpoint << number2 << endl;

    cout << setfill(' ');
    const int WIDTH = 15;
    //cout.setf(std::ios::right);
    cout << right;
    cout << setw(WIDTH / 2) << "半徑" << setw(WIDTH) << "圓周長" << endl;
    for (double radius = 1; radius <= 6; radius += 0.5) {
        cout << fixed << setprecision(1) << setw(WIDTH / 2) << radius << fixed << setprecision(2) << setw(WIDTH) << 2*PI*radius << endl;
    }
}

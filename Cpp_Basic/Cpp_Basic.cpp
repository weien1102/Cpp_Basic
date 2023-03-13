#include <iostream>
using namespace std;

int absolute(int var) {
    if (var < 0) var = -var;
    return var;
}

double absolute(double var) {
    if (var < 0) var = -var;
    return var;
}

void display(int var1, double var2) {
    cout << "整數值為: " << var1 << endl;
    cout << "浮點數值為: " << var2 << endl;
}

void display(double var) {
    cout << "浮點數值為: " << var << endl;
}

void display(int var) {
    cout << "整數值為: " << var << endl;
}

int main()
{
    double n;
    cout << "輸入一個數值: ";
    cin >> n;
    cout << n << "的絕對值為" << absolute(n) << endl;

    int a = 5;
    double b = 5.5;
    display(a);
    display(b);
    display(a, b);
}

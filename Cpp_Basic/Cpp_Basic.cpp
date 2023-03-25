#include <iostream>
using namespace std;

void swap_by_reference(int& x, int& y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	return;
};

void swap_by_pointer(int* x, int* y) {
	int* temp;
	temp = x;
	x = y;
	y = temp;
	return;
};

int main()
{
	int i = 5;
	int j = 20;
	double d;

	int& i_ref = i;
	double& d_ref = d;

	cout << "Value of i = " << i << endl;
	cout << "Value of i reference = " << i_ref << endl;

	i_ref = j;
	cout << "Value of i = " << i << endl;
	cout << "Value of i reference = " << i_ref << endl;

	d = 11.5;
	cout << "Value of d = " << d << endl;
	cout << "Value of d reference = " << d_ref << endl;

	i = 10;
	cout << "Value of i = " << i << endl;
	cout << "Value of i reference = " << i_ref << endl;

	int a = 100;
	int b = 200;
	cout << "swap_by_reference前，a = " << a << endl;
	cout << "swap_by_reference前，b = " << b << endl;

	swap_by_reference(a, b); //呼叫函式後，原本的變數也跟著改變
	cout << "swap_by_reference後，a = " << a << endl;
	cout << "swap_by_reference後，b = " << b << endl;
	
	a = 100;
	b = 200;
	swap_by_pointer(&a, &b); //原本呼叫的變數沒有跟著改變
	cout << "swap_by_pointer後，a = " << a << endl;
	cout << "swap_by_pointer後，b = " << b << endl;
}

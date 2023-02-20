#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;

const double PI = 3.1415926535;

int main()
{
	unsigned int number = 250;
	//const double pi = 3.1415926;

	//預設輸出為十進位
	cout << number << endl;

	//輸出格式為16進位
	cout << showbase << hex << number << endl;

	//輸出格式為8進位
	cout << oct << number << endl;

	//輸出格式為2進位
	cout << bitset<8>{number} << endl;

	cout << setfill('*') << setw(8) << dec << number << endl;

	cout << "precision(5):" << setprecision(5) << PI << endl;

	const int WIDTH = 15;

	cout << setfill(' ');
	//cout.setf(std::ios::right); // 同義於 cout << right;
	cout << right;
	cout << setw(WIDTH / 2) << "半徑" << setw(WIDTH) << "圓周長" << endl;
	cout.setf(ios::fixed);
	for (double radius = 1; radius <= 6; radius += 0.5) {
		cout << setprecision(2) << setw(WIDTH / 2) << radius << setprecision(4) << setw(WIDTH) << (2 * PI * radius) << endl;
	}
}

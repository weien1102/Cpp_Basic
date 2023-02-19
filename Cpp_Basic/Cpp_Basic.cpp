#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.1415926535;

int main()
{
	//定義cout輸出格式 hex, oct, dec, setf, setw, setfill等指令的範例程式

	int number = 255;

	//預設數字輸出為10進位
	cout << number << endl;

	//設定數字輸出為16進位
	cout << hex << number << endl;

	//設定數字輸出為8進位
	cout << oct << number << endl;

	//設定數字輸出為10進位
	cout << dec << number << endl;

	//設定數字輸出為10進位, 並設定欄位寬度為5, 不足補_
	cout << setfill('_') << setw(10) << number << endl;

	cout << setfill(' ');

	const int WIDTH = 15;

	cout.setf(ios::right);  //equivalent: cout << right;
	cout << setw(WIDTH / 2) << "radius"
		<< setw(WIDTH) << "circumference" << '\n';

	cout.setf(ios::fixed);
	for (double radius = 1; radius <= 6; radius += 0.5) {
		cout << setprecision(1) << setw(WIDTH / 2)
			<< radius
			<< setprecision(2) << setw(WIDTH)
			<< (2 * PI * radius) << '\n';
	}

	return 0;
}

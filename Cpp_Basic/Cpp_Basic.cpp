#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.1415926535;

int main()
{
	//定義cout輸出格式 std::hex, std::oct, std::dec, setf, setw, setfill等指令的範例程式

	int number = 255;

	//預設數字輸出為10進位
	std::cout << number << std::endl;

	//設定數字輸出為16進位
	std::cout << std::hex << number << std::endl;

	//設定數字輸出為8進位
	std::cout << std::oct << number << std::endl;

	//設定數字輸出為10進位
	std::cout << std::dec << number << std::endl;

	//設定數字輸出為10進位, 並設定欄位寬度為5, 不足補_
	std::cout << std::setfill('_') << std::setw(10) << number << std::endl;

	cout << setfill(' ');

	const int WIDTH = 15;

	std::cout.setf(std::ios::right);  //equivalent: cout << right;
	std::cout << std::setw(WIDTH / 2) << "radius"
		<< std::setw(WIDTH) << "circumference" << '\n';

	std::cout.setf(std::ios::fixed);
	for (double radius = 1; radius <= 6; radius += 0.5) {
		std::cout << std::setprecision(1) << std::setw(WIDTH / 2)
			<< radius
			<< std::setprecision(2) << std::setw(WIDTH)
			<< (2 * PI * radius) << '\n';
	}

	return 0;
}

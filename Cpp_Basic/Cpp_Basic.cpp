#include <iostream>
#include <string>
using namespace std;

int main()
{
	//字串的初始方式
	string str0(10, '*');

	cout << "str0 = " << str0 << endl;

	string str1 = "Hello";
	auto str2 = "World";
	string str3 = str1 + " " + str2 + "!";
	string str3a = "\"Hello \\ World !\"";
	string str3b = R"("Hello \ World !")";

	cout << "str1 = " << str1 << endl;
	cout << "str2 = " << str2 << endl;
	cout << "str3 = " << str3 << endl;
	cout << "str3a = " << str3a << endl;
	cout << "str3b = " << str3b << endl;

	cout << "str3 capacity = " << str3.capacity() << endl;
	cout << "str3 length(size) = " << str3.length() << endl;
	cout << "str3 max_size = " << str3.max_size() << endl;
	cout << "is str3 empty?" << str3.empty() << endl;
	cout << "str3[0] = " << str3[0] << endl;
	cout << "str3.at(5) = " << str3.at(5) << endl;
	cout << "str3.back() = " << str3.back() << endl;
	cout << "str3.front() = " << str3.front() << endl;
	cout << "str3.substr(0, 5) = " << str3.substr(0, 5) << endl;
	cout << "str3.substr(7, 3) = " << str3.substr(7, 3) << endl;

	string str4;
	str4.append(str1);
	cout << "str4 = " << str4 << endl;
	str4.append(" ");
	str4 += str2;
	str4.push_back('!');
	cout << "str4 = " << str4 << endl;

	//字串搜尋
	cout << "str4.find(str1) = " << str4.find(str1) << endl;
	cout << "str4.find(\"o\",6) = " << str4.find("o", 6) << endl;
	cout << "str4.find(\"World\",7) = " << str4.find("World", 7) << endl;

	//字串插入
	str4.insert(5, " C++");
	cout << "str4 = " << str4 << endl;

	//字串移除
	str4.erase(str4.begin() + 6, str4.end() - 6);
	cout << "str4 = " << str4 << endl;

	//清除字串
	str4.clear();
	cout << "str4 = " << str4 << endl;

	//將字串內的數值字元轉換成數值類型
	string str5 = "123456789";
	int number1 = stoi(str5);
	cout << "number1 = " << number1 << endl;

	string str6 = "123.456789";
	double number2 = stod(str6);
	cout << "number2 = " << number2 << endl;

	//將數值轉換成字串
	string str7 = to_string(number1);
	cout << "str7 = " << str7 << endl;

	string str8 = to_string(number2);
	cout << "str8 = " << str8 << endl;
}

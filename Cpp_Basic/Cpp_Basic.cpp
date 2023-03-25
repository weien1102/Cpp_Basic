#include <iostream>
using namespace std;

int main()
{
	int var = 20;
	//int* ip; //不建議使用
	//int* ip=0; // C++98之前的空指標定義，不建議使用
	//int* ip = NULL; // C++98之前的空指標定義，不建議使用
	int* ip = nullptr; // C++11之後的空指標定義
 
	ip = &var;

	cout << "var = " << var << endl;
	cout << "&var = " << &var << endl;
	cout << "ip = " << ip << endl;
	cout << "*ip = " << *ip << endl;
	cout << endl;

	int** ipp = &ip;
	cout << "var = " << var << endl;
	cout << "ip (i.e. &var) = " << ip << endl;
	cout << "ipp (i.e. &ip) = " << ipp << endl;
	cout << "*ip = " << *ip << endl;
	cout << "*ipp = " << *ipp << endl;
	cout << "**ipp = " << **ipp << endl;
}

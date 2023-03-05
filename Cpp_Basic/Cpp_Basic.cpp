#include <iostream>
using namespace std;

// 判斷是否為質數
bool isPrime(int n) {
	if (n <= 1) return false;
    for (int i = 2; i < n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main()
{
    //列出小於等於n的所有質數

    int n;
    cout << "輸入一個數值n: ";
    cin >> n;
    cout << "小於等於" << n << "的質數有: ";
    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) cout << i << endl;
    }
}

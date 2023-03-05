#include <iostream>
using namespace std;

// 判斷是否為質數
bool isPrime(int p) {
	if (p <= 1) return false;
	for (int i = 2; i < p; i++) {
		if (p % i == 0) return false;
	}
	return true;
}

int main()
{
	//列出小於等於n的所有質數
	int n;
	int primes[100] = { 0 };
	cout << "輸入一個數值n: ";
	cin >> n;

	int j = 0;
	for (int i = 1; i <= n; i++) {
		if (isPrime(i)) {
			primes[j] = i;
			j++;
		}
	}

	// foreach loop
	cout << "小於等於" << n << "的質數有: " << endl;
	for (int p : primes) {
		if (p != 0) cout << p << endl;
	}
}

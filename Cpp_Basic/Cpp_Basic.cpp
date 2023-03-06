#include <iostream>
using namespace std;

int main()
{
    int n; 
    int sum = 0;
    
    cout << "請輸入一個數值n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "使用for loop: " << "i至" << n << "的總和" << sum << endl;
}

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
	Rectangle rect1(3, 5);

	cout << "rect1的面積: " << rect1.area() << endl;
	return 0;
}
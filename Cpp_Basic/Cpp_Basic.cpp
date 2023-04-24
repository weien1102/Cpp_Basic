#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include "Cylinder.h"
using namespace std;

int main() {
	Rectangle rect1(3, 5);
	cout << "rect1的高: " << rect1.getHeight() << endl;
	cout << "rect1的寬: " << rect1.getWidth() << endl;
	cout << "rect1的面積: " << rect1.area() << endl;
	cout << endl;

	Rectangle rect2;
	cout << "rect2的高: " << rect2.getHeight() << endl;
	cout << "rect2的寬: " << rect2.getWidth() << endl;
	cout << "rect2的面積: " << rect2.area() << endl;
	cout << endl;

	Circle cir1(3.0);
	cout << "cir1的半徑: " << cir1.getRadius() << endl;
	cout << "cir1的周長: " << cir1.circum() << endl;
	cout << "cir1的面積: " << cir1.area() << endl;
	cout << endl;

	Circle cir2;
	cout << "cir2的半徑: " << cir2.getRadius() << endl;
	cout << "cir2的周長: " << cir2.circum() << endl;
	cout << "cir2的面積: " << cir2.area() << endl;
	cout << endl;

	Cylinder cyl1;
	cout << "cyl1底面圓半徑: " << cyl1.getRadius() << endl;
	cout << "cyl1圓柱體高: " << cyl1.getHeight() << endl;
	cout << "cyl1底面圓面積: " << cyl1.area() << endl;
	cout << "cyl1圓柱體體積: " << cyl1.volume() << endl;
	cout << endl;

	Cylinder cyl2{ 3.0, 20.0 };
	cout << "cyl2底面圓半徑: " << cyl2.getRadius() << endl;
	cout << "cyl2圓柱體高: " << cyl2.getHeight() << endl;
	cout << "cyl2底面圓面積: " << cyl2.area() << endl;
	cout << "cyl2圓柱體體積: " << cyl2.volume() << endl;
	cout << endl;

	return 0;
}
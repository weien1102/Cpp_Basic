#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include "Cylinder.h"
using namespace std;

int main() {
	//cout << "Hello World!" << endl;

	Rectangle rect1(3, 4);
	cout << "rect1寬: " << rect1.getWidth() << endl;
	cout << "rect1高: " << rect1.getHeight() << endl;
	cout << "rect1面積: " << rect1.area() << endl;
	cout << endl;

	Rectangle rect2;
	cout << "rect2寬: " << rect2.getWidth() << endl;
	cout << "rect2高: " << rect2.getHeight() << endl;
	cout << "rect2面積: " << rect2.area() << endl;
	cout << endl;

	Circle cir1;
	cout << "cir1半徑: " << cir1.getRadius() << endl;
	cout << "cir1周長: " << cir1.circum() << endl;
	cout << "cir1面積: " << cir1.area() << endl;
	cout << endl;

	Circle cir2{ 3 };
	cout << "cir2半徑: " << cir2.getRadius() << endl;
	cout << "cir2周長: " << cir2.circum() << endl;
	cout << "cir2面積: " << cir2.area() << endl;
	cout << endl;

	Cylinder cyl1{ 5, 10 };
	cout << "cyl1切面圓半徑: " << cyl1.getRadius() << endl;
	cout << "cyl1圓柱體高: " << cyl1.getHeight() << endl;
	cout << "cyl1切面圓面積: " << cyl1.area() << endl;
	cout << "cyl1圓柱體體積: " << cyl1.volume() << endl;
	return 0;
}
#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include "Cylinder.h"
using namespace std;

int main()
{
	Rectangle rect1(3, 4);
	Rectangle rect2;
	cout << "rect1面積: " << rect1.area() << endl;
	cout << "rect2面積: " << rect2.area() << endl;
	cout << endl;

	Rectangle* rect3 = new Rectangle(5, 6);
	cout << "rect3面積: " << rect3->area() << endl;
	delete rect3;

	Rectangle* rect4 = nullptr;
	rect4 = &rect2;
	cout << "rect4面積: " << rect4->area() << endl;
	cout << endl;

	delete rect4;
	cout << "rect2面積: " << rect2.area() << endl;

	Circle cir1{ 10.0 };
	cout << "圓半徑: " << cir1.getRadius() << endl;
	cout << "圓周長: " << cir1.circum() << endl;
	cout << "圓面積: " << cir1.area() << endl;
	cout << endl;

	Cylinder cyl1{ 10.0, 20.0 };
	cout << "圓柱體切片半徑: " << cyl1.getRadius() << endl;
	cout << "圓柱體切片面積" << cyl1.area() << endl;
	cout << "圓柱體高度: " << cyl1.getHeight() << endl;
	cout << "圓柱體體積" << cyl1.volume() << endl;
	cout << endl;

	return 0;
}

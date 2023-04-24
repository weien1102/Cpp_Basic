#include "Rectangle.h"

Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
}

Rectangle::Rectangle() {
	width = 5;
	height = 5;
}

int Rectangle::area() {
	return width * height;
}
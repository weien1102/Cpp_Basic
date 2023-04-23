#include "Circle.h"

Circle::Circle(double r) {
	radius = r;
}

double Circle::circum() {
	return 2 * 3.14159 * radius;
}

double Circle::area() {
	return 3.14159 * radius * radius;
}

double Circle::getRadius() {
	return radius;
}
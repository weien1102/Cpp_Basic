#include "Cylinder.h"
Cylinder::Cylinder(double r, double h) : base{ r } {
	height = h;
}

double Cylinder::volume() {
	return base.area() * height;
}

double Cylinder::getHeight() {
	return height;
}

double Cylinder::getRadius() {
	return base.getRadius();
}

double Cylinder::area() {
	return base.area();
}
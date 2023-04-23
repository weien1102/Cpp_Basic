#include "Cylinder.h"
Cylinder::Cylinder(double r, double h): base(r){
	height = h;
}

double Cylinder::volume() {
	return base.area() * height;
}

double Cylinder::area() {
	return base.area();
}

double Cylinder::getRadius() {
	return base.getRadius();
}

double Cylinder::getHeight() {
	return height;
}
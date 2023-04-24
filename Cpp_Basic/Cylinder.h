#pragma once
#include "Circle.h"
class Cylinder
{
	Circle base;
	double height;
public:
	Cylinder();
	Cylinder(double, double);
	double area();
	double volume();
	double getRadius();
	double getHeight();
};


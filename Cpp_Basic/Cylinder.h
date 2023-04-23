#pragma once
#include "Circle.h"
class Cylinder
{
	Circle base;
	double height;
public:
	Cylinder(double, double);
	double volume();
	double area();
	double getRadius();
	double getHeight();
};


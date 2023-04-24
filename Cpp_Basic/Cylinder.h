#pragma once
#include "Circle.h"
class Cylinder
{
	Circle base;
	double height;
public:
	Cylinder(double, double);
	double volume();
	double getHeight();
	double getRadius();
	double area();
};


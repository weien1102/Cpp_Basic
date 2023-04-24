#include "Circle.h"

Circle::Circle(double r)
{
	radius = r;
}

Circle::Circle()
{
	radius = 5.0;
}

double Circle::area()
{
	return 3.14159 * radius * radius;
}

double Circle::circum()
{
	return 2.0 * 3.14159 * radius;
}

double Circle::getRadius()
{
	return radius;
}

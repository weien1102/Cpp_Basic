#include "Cylinder.h"

Cylinder::Cylinder():base(5.0)
{
	height = 10.0;
}

Cylinder::Cylinder(double r, double h): base{r}
{
	height = h;
}

double Cylinder::area()
{
	return base.area();
}

double Cylinder::volume()
{
	return base.area() * height;
}

double Cylinder::getRadius()
{
	return base.getRadius();
}

double Cylinder::getHeight()
{
	return height;
}

#include "circle.h"

Circle::Circle(double r)
{
	radius = r;
}

double Circle::calcArea()
{
	double a = 3.14*(radius*radius);
	return a;
}

void Circle::setRadius(double r)
{
	radius = r;
}

double Circle::getRadius()
{
	return radius;
}

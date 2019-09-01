#include "triangle.h"

Triangle::Triangle(double l, double w)
{
	length = l;
	width = w;

}

double Triangle::calcArea()
{
	double area = (1.0/2)* length*width;
	return area;
}

double Triangle::getLength()
{
	return length;
}

double Triangle::getWidth()
{
	return width;
}

void Triangle::setLength(double l)
{
	length = l;
}

void Triangle::setWidth(double w)
{
	width = w;
}

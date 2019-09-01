#include "rectangle.h"

Rectangle::Rectangle(double l, double w)
{
	length = l;
	width = w;
}

double Rectangle::calcArea()
{
	return length*width;
}

void Rectangle::setLength(double l)
{
	length = l;
}

void Rectangle::setWidth(double w)
{
	width = w;
}

double Rectangle::getLength()
{
	return length;
}

double Rectangle::getWidth()
{
	return width;
}

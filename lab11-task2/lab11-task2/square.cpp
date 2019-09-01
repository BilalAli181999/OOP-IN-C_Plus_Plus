#include "square.h"

Square::Square(double l)
{
	length = l;
}

double Square::calcArea()
{
	return length*length;
}

void Square::setLength(double l)
{
	length = l;
}

double Square::getLength()
{
	return length;
}

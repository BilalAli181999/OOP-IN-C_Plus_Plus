#include<iostream>
#include"task2.h"
//using namespace std;
circle::circle()
{
	radius = 0.0;
	pi = 3.14159;
}
circle::circle(double r)
{
	radius = r;
	pi = 3.14159;
}
void circle::setRadius(double r)
{
	radius = r;
}
double circle::getRadius()const
{
	return radius;
}
double circle::getArea()
{
	return pi*radius*radius;
}
double circle::getDiameter()
{
	double diameter;
	diameter = radius * 2;
	return diameter;
}
double circle::getCircumference()
{
	return 2 * pi*radius;
}
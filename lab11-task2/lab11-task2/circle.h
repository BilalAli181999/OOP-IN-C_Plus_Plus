#ifndef CIRCLE_H
#define CIRCLE_H
#include<iostream>
#include"shape.h"
using namespace std;
class Circle:public Shape
{
	double radius;
public:
	Circle(double r);
	double calcArea();
	void setRadius(double r);
	double getRadius();
};


#endif

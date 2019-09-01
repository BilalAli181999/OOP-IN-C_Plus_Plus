#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<iostream>
#include"shape.h"
using namespace std;
class Rectangle:public Shape
{
	double length;
	double width;
public:
	Rectangle(double l, double w);
	double calcArea();
	void setLength(double l);
	void setWidth(double w);
	double getLength();
	double getWidth();
};

#endif
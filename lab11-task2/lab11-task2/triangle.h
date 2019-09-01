#ifndef TRIANGLE_H
#define TRIANGLE_H
#include<iostream>
#include"shape.h"
using namespace std;
class Triangle:public Shape
{
	double length;
	double width;
public:
	Triangle(double l, double w);
	double calcArea();
	double getLength();
	double getWidth();
	void setLength(double l);
	void setWidth(double w);

};


#endif
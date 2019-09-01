#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>
using namespace std;
class Shape
{
private:
	double area;
public:
	virtual double calcArea() = 0;
	double getArea();
};
#endif // !SHAPE_H


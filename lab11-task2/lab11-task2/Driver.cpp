
#include<iostream>
#include"circle.h"
#include"rectangle.h"
#include"triangle.h"
#include"square.h"
using namespace std;
int main()
{
	cout << "\n Area of Circle: ";
	Shape *ptr1 = new Circle(12.3);
	cout<<ptr1->calcArea();

	cout << "\n Area of Square: ";
	Shape *ptr2 = new Square(5);
	cout << ptr2->calcArea();

	cout << "\n Area of Rectangle: ";
	Shape *ptr3 = new Rectangle(12.3,4.7);
	cout << ptr3->calcArea();

	cout << "\n Area of Traiangle: ";
	Shape *ptr4 = new Triangle(12.3,3.2);
	cout << ptr4->calcArea();

}





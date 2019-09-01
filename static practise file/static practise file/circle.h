//#ifndef CIRCLE_H
//#define CIRCLE_H
//#include<iostream>
//#include"rectangle.h"
//using namespace std;
////class circle;
////class rectangle;
////class rectangle
////{
////public:
////	int length;
////public:
////	rectangle(int l = 2)
////	{
////		length = l;
////	}
////	operator circle ()
////	{
////		
////		cout << "conversion operator";
////		return circle(length);
////	}
////
////	/*void operator=(const circle & ref)
////	{
////	cout << "+ operator c=f";
////	this->length = ref.radius;
////
////	}*/
////
////};
////
////class circle
////{
////public:
////	int radius;
////public:
////	circle(int r = 0)
////	{
////		radius = r;
////	}
////	//circle operator=(const rectangle & ref)
////	//{
////	//	cout << "+ operator c=f";
////	//	this->radius = ref.length;
////	//	return *this;
////	//}
////	operator rectangle()
////	{
////		//rectangle r( radius);
////		cout << "conversion";
////		return rectangle(radius);
////	}
////	/*operator circle()
////	{
////		cout << "conversion";
////		
////	}*/
////}; 
//
//
//class circle
//{
//public:
//	int radius;
//public:
//	circle(int r = 1)
//	{
//		cout << "\n circles constructor";
//		radius = r;
//	}
//	~circle()
//	{
//		cout << "\n circles destructor";
//	}
//	circle(circle & ref)
//	{
//		this->radius = ref.radius;
//		cout << "\n circles copy constructor";
//	}
//	//circle operator =(rectangle & ref)
//	//{
//	//	cout << "\n circles assignment operator";
//	//	this->radius = ref.length;
//	//}
//	operator rectangle()
//	{
//		rectangle r;
//		r.length = radius;
//		return r;
//	}
//
//};
//#endif
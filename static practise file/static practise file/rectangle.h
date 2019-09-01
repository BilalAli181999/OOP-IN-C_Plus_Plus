//#ifndef RECTANGLE_H
//#define RECTANGLE_H
////
////
//#include<iostream>
//#include"circle.h"
////using namespace std;
////
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
////		circle c(length);
////		cout << "conversion operator";
////		return c;
////	}
////	/*void operator=(const circle & ref)
////	{
////		cout << "+ operator c=f";
////		this->length = ref.radius;
////		
////	}*/
////
////}; 
////#endif
//class rectangle
//{
//public:
//	int length;
//public:
//	rectangle(int r = 1)
//	{
//		cout << "\n rectangles constructor";
//		length = r;
//	}
//	~rectangle()
//	{
//		cout << "\n rectangle destructor";
//	}
//	rectangle(circle & ref)
//	{
//		this->length = ref.radius;
//		cout << "\n rectangles copy constructor";
//	}
//	/*rectangle & operator =(circle & ref)
//	{
//	cout << "\n rectangles assignment operator";
//	this->length = ref.radius;
//	return *this;
//	}*/
//	operator circle()
//	{
//		circle  c;
//		c.radius = length;
//		return c;
//	}
//
//};
//#endif
#include<iostream>
#include"rectangle.h"
using namespace std;
//int main()
//{
//	cout << cmath::calcGcd(456, 18);
//	//cmath c;
//	//cout << c.calcGcd(456,18);
//	//cout << c.calcPowr(3, 8);
//}
class rectangle;

class circle
{
public:
	int radius;
public:
	circle(int r=1)
	{
		cout << "\n circles constructor";
		radius = r;
	}
	~circle()
	{
		cout << "\n circles destructor";
	}
	circle(circle & ref)
	{
		this->radius = ref.radius;
		cout<< "\n circles copy constructor";
	}
	//circle operator =(rectangle & ref)
	//{
	//	cout << "\n circles assignment operator";
	//	this->radius = ref.length;
	//}
	operator rectangle()
	{
		rectangle r;
		r.length = radius;
		return r;
	}

};
class rectangle
{
public:
	int length;
public:
	rectangle(int r = 1)
	{
		cout << "\n rectangles constructor";
		length = r;
	}
	~rectangle()
	{
		cout << "\n rectangle destructor";
	}
	rectangle(circle & ref)
	{
		this->length = ref.radius;
		cout << "\n rectangles copy constructor";
	}
	/*rectangle & operator =(circle & ref)
	{
		cout << "\n rectangles assignment operator";
		this->length = ref.radius;
		return *this;
	}*/
	operator circle()
	{
		circle  c;
		c.radius = length;
		return c;
	}

};
int main()
{
	circle c(10);
	rectangle r=c;
	
}
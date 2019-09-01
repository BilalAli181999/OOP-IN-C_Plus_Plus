#include<iostream>
#include"header1.h"
using namespace std;
//using namespace std;
////int main()
////{
////	
////	myArray arr;
////	arr.setData(12, 0);
////	arr.getSet(1) = 23;
////	arr.setData(25,2);
////	cout << arr.getData(2);
////}
////
////int main()
////{
////	bool s1=1, s2=1;
////	for (int a = 0; a <= 100 && s1; a++)
////	{
////		for (int b = 0; b <= 100 && s2; b++)
////		{
////			for (int c = 0; c <= 100 && s2; c++)
////			{
////				for (int d = 0; d <= 200 && s2; d=d+2)
////				{
////					if((a*a)+(b*b)+(c*c)==d*d)
////					{
////					if(a%2==0 && b%2==0 && c%2==0)
////					cout << "law does not exist";
////					}
////				}
////			}	
////		}
////	}
////}
//
////class h
////{
////	hello hi;
////public:
////	void start()
////	{
////		h::hi.get();
////	}
////};
//class hello
//{
//private:
//	char arr [3];
//	int a;
//	int b;
//public:	
//	void display()
//	{
//	}
//	hello(char s[])
//	{
//		cout << "array";
//	}
//	hello(char s)
//	{
//		cout << "1para";
//		a = s;
//		
//	}
//		
//	void set(int s)
//	{
//		a = s;
//	}
//	int get()
//	{
//		cout << "get inside";
//		return a;
//	}
//	hello()
//	{
//		cout << "without perimeters";
//	}
//	hello(hello & ref)
//	{
//		cout << "\n copy constructor";
//	}
//	~hello()
//	{
//		cout << "\n destructor";
//	}
//	
//};
//int main()
//{
//	char ch[50] = "bilal";
//	hello hel;
//	hello h1 = hel;
//}
//}
//
//
//class matrix
//{
//private: 
//	char a[3][3];
//public:
//	matrix()
//	{
//		int s = 49;
//		for (int i = 0; i < 3; i++)
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				a[i][j] =s ;
//				s++;
//			}
//			cout << "\n";
//		}
//		
//	}
//	void display()
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				cout << a[i][j];
//			}
//			cout << "\n";
//		}
//	}
//};
//int main()
//{
//	matrix m;
//	m.display();
//}

//#include<iostream>
//using namespace std;

//int main()
//{
//	double hour, min;
//	hour = 12;
//	min = 00;
//	
//	if (min != 0)
//		min = min / 5;
//	else
//		min = 12;
//
//	double a;
//	if (hour >= min)
//	{
//		a = (hour - min) * 5 * 6;
//	}
//	if (hour <= min)
//	{
//		a = (min - hour) * 5 * 6;
//	}
//	cout << "angle: " << a << "\'";
//	
//}

//class sarray
//{
//public:
//	int *data;
//	int size;
//public:
//	sarray()
//	{
//		size = 5;
//		data = new int[size];
//	}
//	int & operator[](int i)
//	{
//		return data[i];
//	}
//	void display()
//	{
//		for (int i = 0; i < size; i++)
//		{
//			cout << data[i] << " ";
//		}
//	}
//};
//void f()
//{
//	sarray a;
//}
//int main()
//{
//	sarray a;
//	a[2] = 32;
//	a[3] = 41;
//	a[0] = 31;
//	a.display();
//}
#include<iostream>

using namespace std;

//class fraction
//{
//public:
//	int num;
//	int den;
//public:
//	fraction(int n = 0, int d = 0)
//	{
//		cout << "\nCONSTRUCTOR";
//		num = n;
//		den = d;
//	}
//	fraction(fraction &ref)
//	{
//		cout << "\n COPY CONSTRUCTOR";
//
//	}
//	void operator=(fraction & ref)
//	{
//		cout << "\n= OPERATOR";
//		this->num = ref.num;
//		this->den = ref.den;
//	}
//	operator double()
//	{
//		cout << "\n DOUBLE OPERATOR";
//		return num;
//	}
//	operator int()
//	{
//		cout << "\n INT OPERATOR";
//		return den;
//	}
//	operator char()
//	{
//		cout << "\n CHAR OPERATOR";
//		return den;
//	}
//	fraction operator =(complexNum & ref)
//	{
//		cout << "\nf=c";
//		this->num = ref.i;
//		this->den = ref.r;
//		return *this;
//	}
//};
//
//class complexNum
//{
//public:
//	double i;
//	double r;
//public:
//	complexNum(int n = 0, int d = 0)
//	{
//		cout << "\nCONSTRUCTOR";
//		i = n;
//		r = d;
//	}
//	complexNum(fraction &ref)
//	{
//		cout << "\n COPY CONSTRUCTOR";
//
//	}
//	void operator=(complexNum & ref)
//	{
//		cout << "\n= OPERATOR";
//		this->i = ref.i;
//		this->r = ref.r;
//	}
//	operator double()
//	{
//		cout << "\n DOUBLE OPERATOR";
//		return i;
//	}
//	operator int()
//	{
//		cout << "\n INT OPERATOR";
//		return r;
//	}
//	operator char()
//	{
//		cout << "\n CHAR OPERATOR";
//		return r;
//	}
//	complexNum operator= (fraction &ref)
//	{
//		cout << "\nC1=F";
//		this->i = ref.num;
//		this->r = ref.den;
//		return *this;
//	}
//};
//#include"complexNum.h"
//#include"fraction.h"
//int main()
//{
//	complexNum c;
//	fraction f(65, 97);
//
//	c = f;             //error, not possible without operator overloading
////	c = f; //ok after operator overloading
////	f = c;
//	cout << c.i;
//	complexNum c1;
//	c1 = c = f;
//	cout << c1.i;
//}
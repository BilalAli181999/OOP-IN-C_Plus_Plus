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
//	void operator=(fraction & ref)
//	{
//		cout << "\n= OPERATOR";
//		this->num = ref.num;
//		this->den = ref.den;
//	}
//
//};
//int main()
//{
//	fraction f(1,2);
////	fraction f1 = f;
//	fraction f1;
//	f1 = fraction(1, 2);
//	cout<<f1.num;
//}













//class fraction
//{
//public:
//	int num;
//	
//public:
//	fraction()
//	{
//		cout << "\nCONSTRUCTOR";
//		num = 34;
//
//	}
//	fraction(int n )
//	{
//		cout << "\nPARAMETERIZED CONSTRUCTOR";
//		num = n;
//		
//	}
//	fraction(fraction & ref)
//	{
//		cout << "\nCOPY CONSTRUCTOR";
//		
//
//	}
//	~fraction()
//	{
//		cout << "\ndestructor";
//	}
//	void operator=(fraction & ref)
//	{
//		cout << "\n= OPERATOR";
//		this->num = ref.num;
//	
//	}
//	/*void operator=(int r)
//	{
//		cout << "\n=int OPERATOR";
//		this->num = r;
//
//	}
//*/
//};
//int main()
//{
//	fraction f(12);
//		fraction f2 = f;
//	fraction f1;
//	f1 =  13;
//	cout << f1.num;
//	f1 = 23;  // error since its already  explicit as no defined outside class
//	//fraction f2;
//	//f2(23);      //we cant initialize this wayhere only when object is declared    ( fraction f2(23);)
//	//fraction f1;
//	//f1(1);
//
//}











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
//	~fraction()
//	{
//		cout << "\n destructor";
//	}
//
//};
//int main()
//{
//	fraction f(65,97);
//	fraction f1;   //initialize in front of this
//	f1=fraction(2, 3);     //     cant initialize this way
//	double v;
//	v = f;
//	cout << v;
//	int i = f;
//	cout << i;
//	char ch = f;
//	cout << ch;
//
//}






//class fraction
//{
//public:
//	int num;
//	
//public:
//	fraction()
//	{
//		cout << "\nDEFAULT CONSTRUCTOR";
//		num = 3;
//
//	}
//	fraction(int n )
//	{
//		cout << "\nPARAMETERIZED CONSTRUCTOR";
//		num = n;
//		
//	}
//	fraction(fraction & ref)
//	{
//		cout << "\nCOPY CONSTRUCTOR";
//		
//
//	}
//	/*void operator=(fraction & ref)
//	{
//		cout << "\n= OPERATOR";
//		this->num = ref.num;
//	
//	}*/
//	~fraction()
//	{
//		cout << "\n destructor";
//	}
//
//};
//int main()
//{
//	fraction f(12);
//		
//	fraction f1;
//	f1=13;
//
//}



//#include"compex.h"
//#include"fraction.h"
//
//
//
//
//int main()
//{
//	complexNum c;
//	fraction f(65, 97);
//	
////	c = f;             //error, not possible without operator overloading
//	c = f; //ok after operator overloading
//	f = c;
//
//}
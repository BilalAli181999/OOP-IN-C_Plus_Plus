#include<iostream>
#include"MyArray.cpp"
#include"MyArray.h"
using namespace std;
int main()
{
	MyArray <int>a{ 1,2,3,45 };
	a.display();
	//MyArray<char> a;
	////cin >> a;
	////cout << a;
	//try
	//{
	//	a[-1] = 100;
	//	a[1] = 72;
	//	a[2] = 104;
	//	a[3] = 69;
	//	a[4] = 82;
	//}
	//catch(char* c)
	//{
	//	cout << c;
	//}
	//MyArray<char> b;
	//cout << "\n HERE";
	//try {

	//	b[9] = 98;
	//	b[1] = 103;
	//	b[2] = 105;
	//	b[3] = 67;
	//	b[5] = 69;
	//}
	//catch(char* s)
	//{
	//	cout << s;
	//}
	//a.display();
	//b.display();
	//a = b;
	//a.display();
	//MyArray<char> sum=a+b;
	//sum.display();
	//a += b;
	//a.display();
}
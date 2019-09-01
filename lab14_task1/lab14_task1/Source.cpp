#include<iostream>
#include"task3.h"
using namespace std;


template<class T>
T giveMinimum(T a, T b)
{
	if (a < b)
		return a;
	else
		return b;

}
template<class T>
T giveMaximum(T a, T b)
{
	if (a > b)
		return a;
	else
		return b;

}
int main()
{
	cout<<giveMinimum(12, 32)<<"\n";
	cout << giveMinimum(12.2, 3.2) << "\n";
	cout << giveMinimum('Z', 'z') << "\n";
	cout << giveMaximum(12, 32) << "\n";
	cout << giveMaximum('b', 'a') << "\n";
	cout << giveMaximum(32.9, 89.7) << "\n";
}
//

//#include<string>
//int main()
//{
//	double scores[10] = {97,87.5,76,98.6,75,69,99,10,76,90};
//	try
//	{
//		TestScore t(scores);
//		cout<<t.getTestScore()/10;
//	}
//	catch(char* c)
//	{
//		cout  << c;
//	}
//	catch (int c)
//	{
//		cout << c;
//	}
//
//}


//#include"task4.h"
//int main()
//{
//	Account a;
//	try 
//	{
//		a.deposit(23);
//	}
//	catch(char* c)
//	{
//		cout << c;
//	}
//	try
//	{
//		
//		a.withdraw(230);
//	}
//	catch (char* c)
//	{
//		cout << c;
//	}
//}
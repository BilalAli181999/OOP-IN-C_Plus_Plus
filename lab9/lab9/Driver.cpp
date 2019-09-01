#include<iostream>
using namespace std;
#include"task3.h"
#include"task4.h"
ostream & operator<<(ostream&str, Month &ref)
{

	str << ref.name;
	str << ref.monthNo;
	return str;
}
istream & operator>>(istream&str, Month &ref)
{
	cin.getline( ref.name,20);
	str >> ref.monthNo;
	return str;
}
//int main()
//{
//	cout << "\n Month-1 " ;
//	Month m2(1);
//	m2.display();
//	m2--;
//	cout << "\n m1--:";
//	m2.display();
//	cout << "\n Month-2";
//	Month m1("Feb");
//	m1.display();
//	++m1;
//	cout << "\n m1--:";
//	m1.display();
//	Month m3;
//	cin >> m3;
//	cout << m3;
//}



ostream & operator<<(ostream & str, Date &ref)
{
	int monthNo = ref.month;
	char name[30];
	if (monthNo == 1)
	{
		strcpy_s(name, "Jan");
	}
	else if (monthNo == 2)

	{
		strcpy_s(name, "Feb");
	}
	else if (monthNo == 3)

	{
		strcpy_s(name, "Mar");
	}
	else if (monthNo == 4)
	{
		strcpy_s(name, "Apr");
	}
	else if (monthNo == 5)
	{
		strcpy_s(name, "May");
	}
	else if (monthNo == 6)
	{
		strcpy_s(name, "June");
	}
	else if (monthNo == 7)
	{
		strcpy_s(name, "July");
	}
	else if (monthNo == 8)
	{
		strcpy_s(name, "Aug");
	}
	else if (monthNo == 9)
	{
		strcpy_s(name, "Sept");
	}
	else if (monthNo == 10)
	{
		strcpy_s(name, "Oct");
	}
	else if (monthNo == 11)
	{
		strcpy_s(name, "Nov");
	}
	else if (monthNo == 12)
	{
		strcpy_s(name, "DEC");
	}
	str << name;
	str << "/" << ref.day;

	str << "/" << ref.year;
	return str;
}
istream & operator>>(istream & str, Date &ref)
{
	str >> ref.day;
	str >> ref.month;
	str >> ref.year;
	return str;
}

int main()
{
	Date d1(3, 12, 2017);
	Date d2(13, 1, 2017);
	//d1++;
	cout << d1;
	cout << "\n"<<d1 - d2;
}
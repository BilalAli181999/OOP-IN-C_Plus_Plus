#ifndef TASK3_H
#define TASK3_H
#include<iostream>
using namespace std;
//ostream & operator<<(ostream&str, Month &ref);
class Month
{
private:
	char name[50];
	int monthNo;
public:
	Month()
	{
		strcpy_s(name, "Jan");
		monthNo = 1;
	}
	Month(char m[])
	{
		strcpy_s(name, m);
		if (m == "Jan")
			monthNo = 1;
		else if (m == "Feb")
			monthNo = 2;
		else if (m == "Mar")
			monthNo = 3;
		else if (m == "Apr")
			monthNo = 4;
		else if (m == "May")
			monthNo = 5;
		else if (m == "June")
			monthNo = 6;
		else if (m == "July")
			monthNo = 7;
		else if (m == "Aug")
		{
			
			monthNo = 8;
		}
		else if (m == "Sept")
			monthNo = 9;
		else if (m == "Oct")
			monthNo = 10;
		else if (m == "Nov")
			monthNo = 11;
		else if (m == "Dec")
			monthNo = 12;

		
	}
	Month(int n)
	{
		
		monthNo = n;
		
		if (monthNo == 1)
		{
			strcpy_s(name, "Jan");
		}
		else if (monthNo ==2)

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
	}
	void display()
	{
		cout << "\nMonth:" << name;
		cout << "\nNO of Month " << monthNo;
	}
	void setMonth(char m[])
	{
		strcpy_s(name, m);
	}
	void setMonthno(int m)
	{
		monthNo = m;
	}
	char* getMonth()
	{
		return name;
	}
	int getMonthno()
	{
		return monthNo;
	}
	void operator++()
	{
		monthNo++;
		incM();
	}
	void operator++(int )
	{
		monthNo++;
		incM();
	}
	void operator--()
	{
		monthNo--;
		incM();
	}
	void operator--(int )
	{
		monthNo--;
		incM();
	}
	void incM()
	{


		 if (monthNo == 0)
		{
			strcpy_s(name, "Dec");
			monthNo = 12;
		}
		else if (monthNo == 13)
		{
			strcpy_s(name, "Jan");
			monthNo = 1;
		}
		else if (monthNo == 1)
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
	}
	friend ostream & operator<<(ostream&str, Month &ref);
	friend istream & operator>>(istream&str, Month &ref);
};


#endif

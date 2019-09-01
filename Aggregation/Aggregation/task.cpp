#include "task.h"
#include "time.h"
#include "date.h"
#include<iostream>
using namespace std;
task::task() :date1(1,2,3),t(4,5,6)
{
	id = 0;
	cout << "TASK DEFAULT\n";
}

task::task(int id, int s, int m, int h, int d, int mon, int y) :t(s, m, y), date1(d, mon, y)
{
	(*this).id = 0;
//	t.setSec(s);
////	t.min = m;
////	t.hour = h;
//	date1.day = 0;
//	date1.month = 0;
//	date1.year = 0;
	cout << "Task Parameterized constructor\n";
}

task::~task()
{
	cout << "TASK DESTRUCTOR\n";
}

void task::display()
{
	date1.displayDate();
	cout << "\n";
	t.displayTime();
	cout << "\n";
}


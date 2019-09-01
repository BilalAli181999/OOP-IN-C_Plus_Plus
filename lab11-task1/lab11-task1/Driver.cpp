#include<iostream>
#include<string>
#include"task1.h"
#include"salaried.h"
#include"hourly.h"
#include"commisioned.h"
using namespace std;
int main()
{
	Employee *ptr1=new Salaried (70000, "Bilal Ali", 50000);
	ptr1->display();

	cout << "\n";
	Employee *ptr2 = new Hourly(500, 90, "Hariss", 70000);
	ptr2->display();

	cout << "\n";
	Employee *ptr3 = new Commisioned(30000, 5000, "Hamza Israr", 90000);
	ptr3->display();
}
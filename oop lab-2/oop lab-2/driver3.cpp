//#include<iostream>
//#include"task3.h"
//using namespace std;
//int main()
//{
//	cout << "\n\n\t\t**********TESTER DATE**********";
//	date dT;
//	cout << "\n";
//	tester(dT);
//	cout << "\n\n\t\t**********STACK ARRAY**********";
//		date d[5];
//		d[0].setDay(25);
//		d[1].setDay(9);
//		d[2].setDay(21);
//		d[3].setDay(14);
//		d[4].setDay(11);
//
//		d[0].setMonth(12);
//		d[1].setMonth(11);
//		d[2].setMonth(4);
//		d[3].setMonth(8);
//		d[4].setMonth(9);
//
//		d[0].setYear(1876);
//		d[1].setYear(1877);
//		d[2].setYear(1938);
//		d[3].setYear(1947);
//		d[4].setYear(1948);
//
//		for (int i = 0; i < 5; i++)
//		{
//			cout << "\n";
//			d[i].displayDate();
//			cout << "\n";
//			
//		}
//		cout << "\n\n\t\t**********DYNAMIC ARRAY**********";
//		date *d1 = new date[5];
//		
//		d1[0].setDay(25);
//		d1[1].setDay(9);
//		d1[2].setDay(21);
//		d1[3].setDay(14);
//		d1[4].setDay(11);
//
//		d1[0].setMonth(12);
//		d1[1].setMonth(11);
//		d1[2].setMonth(4);
//		d1[3].setMonth(8);
//		d1[4].setMonth(9);
//
//		d1[0].setYear(1876);
//		d1[1].setYear(1877);
//		d1[2].setYear(1938);
//		d1[3].setYear(1947);
//		d1[4].setYear(1948);
//
//		for (int i = 0; i < 5; i++)
//		{
//			cout << "\n";
//			d1[i].displayDate();
//			cout << "\n";
//		}
//		cout << "\n\n\t\t**********SELF PROCLAIMED ARRAY**********";
//		int arrSize;
//		cout << "\n\n\tEnter the size for array";
//		cin >> arrSize;
//		date *d2 = new date[arrSize];
//		int *day=new int [arrSize];
//		int *month = new int[arrSize];
//		int *year = new int[arrSize];
//
//		for (int i = 0; i < arrSize; i++)
//		{
//			cout << "\nEnter day:";
//			cin >> day[i];
//			d2[i].setDay(day[i]);
//			cout << "\nEnter month:";
//			cin >> month[i];
//			d2[i].setMonth(month[i]);
//			cout << "\nEnter year:";
//			cin >> year[i];
//			d2[i].setYear(year[i]);
//
//		}
//		for (int i = 0; i < arrSize; i++)
//		{
//			cout << "\n";
//			d2[i].displayDate();
//			cout << "\n";
//		}
//
//
//
//}
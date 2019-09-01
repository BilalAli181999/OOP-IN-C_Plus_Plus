//#include<iostream>
//#include"employee.h"
//using namespace std;
//int main()
//{
//	employee *emp;
//	cout << "ENTER THE NO OF EMPLOYEE'S YOU WANT:";
//	int empNo;
//	cin >> empNo;
//	emp = new employee[empNo];
//	int * id = new int[empNo];
//	char **ch = new char*[empNo];
//	for (int i = 0; i < empNo; i++)
//	{
//		ch[i] = new char[50];
//	}
//	char **dep = new char*[empNo];
//	for (int i = 0; i < empNo; i++)
//	{
//		dep[i] = new char[50];
//	}
//	for (int i = 0; i < empNo; i++)
//	{
//		cout << "ENTER THE ID:";
//		cin >> id[i];
//		
//		cin.ignore();
//		cout << "ENTER THE NAME:";
//		cin.getline(ch[i], 50);
//		
//		cout << "ENTER THE DEPARTMENT NAME:";
//		cin.getline(dep[i], 50);
//		
//	}
//	for (int i = 0; i < empNo; i++)
//	{
//		emp[i].setId(id[i]);
//		emp[i].setName(ch[i]);
//		emp[i].setDepartment(dep[i]);
//
//	}
//	for (int i = 0; i < empNo; i++)
//	{
//		emp[i].display();
//	}
//
//}
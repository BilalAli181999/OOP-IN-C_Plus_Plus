#include<iostream>
#include"cstring.h"
using namespace std;
class classRoom
{
private:
	int roomNumber;
public:
	
	classRoom(int n = 0)
	{
	//	cout << "\nclass room::para";
		roomNumber = n;
	}
	void display()
	{
		cout << "\n Room No: " << roomNumber << "\n";
	}
};
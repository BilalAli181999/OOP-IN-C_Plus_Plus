#include<iostream>
#include"cstring.h"
using namespace std;
class teacher
{
private:
	
	cstring name;
	int extension;
public:
	teacher()
	{
	//	cout << "\nteacher::default";
	}
	teacher(char*a, int n = 0) : name(a)
	{
		name = a;
		extension = n;
	//	cout << "\nteacher::para";
	}
	void display()
	{
		cout << "\n TEACHER NAME: ";
		name.display();
		cout << "\n EXTENSION: " << extension << "\n";
	}
};


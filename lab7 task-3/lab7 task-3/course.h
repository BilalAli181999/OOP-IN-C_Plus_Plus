#include<iostream>
#include"cstring.h"
#include"classroom.h"
#include"teacher.h"

using namespace std;
class course
{
private:
	
	cstring courseName;
	teacher t;
	classRoom c;
public:
	course(char ch[40], char n[40], int ext, int rN, int cap) :courseName(ch) ,t(n, ext), c(rN)
	{
		
	}
	void display()
	{
		cout << "\n COURSE TITLE:";
		courseName.display();
		t.display();
		c.display();
	}
};


#include<iostream>
using namespace std;
#include<string>
#include"teacher.h"
int main()
{
	string n1 = "Bilal Ali";
	string n2 = "Muhammad Hariss";
	Teacher t(200,n1,19,n2,90);
	t.display();
}
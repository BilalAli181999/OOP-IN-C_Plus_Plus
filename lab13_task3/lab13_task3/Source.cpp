#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	fstream f("email.txt", ios::in);
	ofstream o("object.txt", ios::out);
	string s;
	char c;
//	while (!(f.eof()))
	{
	getline(f, s, '@');
	o << s;
	getline(f, s, '.');
	getline(f, s,'f');
	o << "  " << s;
	
	f.ignore(5);
	getline(f, s, 'f');
	o << s;
	}
	

}
#include<iostream>
#include"string.h"
using namespace std;
int main()
{
	char ch[20];
	cin >> ch;
	//char ch1[20];
	//cin >> ch1;

	cstring obj1(ch);
	
//	cstring obj;
	//obj1.input();
	obj1.reverse();
//	obj.input();
	obj1.display();
	//obj.display();
//	obj.input();

//	obj.reverse();
//	obj.display();
	//cout<<"\n"<<obj.find(&obj1);
	//obj.insert(3,&obj1);

//	obj.trim();
//	obj.display();
//	cstring conc=obj1.concatenate(obj);
	//conc.display();
	//if (obj.compare(obj1)==1)
	//{
	//	obj.display();
	//	cout << "ïs Larger";
	//}
	//if (obj.compare(obj1) == 2)
	//{
	//	obj1.display();
	//	cout << "ïs Larger";
	//}
}
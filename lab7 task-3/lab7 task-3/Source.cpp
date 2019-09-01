#include"iostream"
#include"cstring.h"
#include"course.h"

using namespace std;
int main()
{
	
	

	char ch[10];
	char ch1[10];
	cin.getline(ch, 10);
	cin.getline(ch1, 10);
	course *c = new course[3]{ course(ch,ch1,123,2,5),course("pf","haris",124,3,50),course("com skills","hamza",126,3,9) };
	
	for (int i = 0; i < 3; i++)
	{
		c[i].display();
	}
}
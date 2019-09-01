#include<iostream>
#include<fstream>
using namespace std;



void arrayToFile(char n[], int *a, int sA);
int main()
{
	int a[5] = {1,2,3,4,5};
	arrayToFile("file.txt", a, 5);
}
void arrayToFile(char n[], int *a, int sA)
{
	ofstream o;
	o.open(n,ios::binary);
	for (int i = 0; i < sA; i++)
	{
		o.write((char*)a, sA);
	}
}
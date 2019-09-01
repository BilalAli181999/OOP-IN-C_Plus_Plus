#include"iostream"
#include"string.h"
using namespace std;

cstring::cstring()
{
	size = 20;
	data = new char[size];
}

cstring::cstring(char c)
{
	data[size] = c;
}

cstring::cstring(char *ch)
{
	
	size = 20;
	data = new char [size];
	strcpy(data  ,ch);
}

cstring::~cstring()
{
	delete[]data;
	data = 0;
}


char & cstring::at(int index)
{
	return data[index];
}

bool cstring::isEmpty()
{
	int i = getLength();
	if (i ==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int cstring::getLength()
{
	int i = 0;
	while (data[i] != '\0')
	{
		i++;
	}
	return i;
}

void cstring::display()
{
	
	
		cout << data;
	
	
}



int cstring::find(cstring * subStr, int start)
{
	
	
	int cS=(*subStr).getLength();
	for (int i = 0; i < getLength(); i++)
	{
		if (data[i] == (*subStr).data[0])
		{ 

			if (data[i + 1] == (*subStr).data[1])
			{
				if (data[i + 2] == (*subStr).data[2])
				{	
					
					return i;
					

					}
					
				}
			}
		}
		
		
	return 0;
	}
	


void cstring::insert(int index, cstring * subStr)
{
	
	int x = index;
	int cS = (*subStr).getLength();
	int s = getLength() + cS;
	for (int i = (index + cS); i < s; i++)
	{
		data[i] = data[x];
		x++;
	}
	
	 x = 0;
	for (int i = index; i < (index + cS); i++)
	{
		data[i] = (*subStr).data[x];
		x++;
	}
	data[s] = '\0';
	
}

void cstring::makeUpper()
{
	for (int i = 0; i < getLength(); i++)
	{
		data[i] = data[i] - 32;
	}
	
}

void cstring::makeLower()
{
	for (int i = 0; i <getLength(); i++)
	{
		data[i] = data[i] + 32;
	}
}

void cstring::input()
{
	char ch[50];
	cout << "enter the name";
	cin.ignore();
	cin.getline(data, 20);
}

void cstring::trim()
{
	for (int i = 0; i < getLength(); i++)
	{
		if (data[i] == ' ')
		{
			for (int j = i; j < getLength() ; j++)
			{
				data[j] = data[j + 1];
			}
			
		}
	}
}

void cstring::reverse()
{
	cstring x;
	for (int i = 0; i < getLength(); i++)
	{
		x.data[i] = data[i];
	}
	int y = 0;
	for (int i = getLength()-1; i >= 0; i--)
	{
		
	 data[i]=x.data[y] ;
	 y++;
	}

	
}


cstring cstring::concatenate(cstring  s2)
{
	cstring y;
	int x = 0;
	for (int i = 0; i < getLength(); i++)
	{
		y.data[x] = data[i];
		x++;
	}

	for (int j = 0; j < s2.getLength(); j++)
	{
		y.data[x] = s2.data[j];
		x++;
	}

	y.data[x] = '\0';
	
	return y ;
}

cstring::cstring(cstring & ref)
{

	size = ref.size;
	data = new char[size];
	for (int i = 0; i < ref.getLength(); i++)
	{
		data[i] = ref.data[i];
	}
}

int cstring::compare(cstring s2) 
{
	
		for (int i = 0; i < getLength(); i++)
		{
			if ((int)data[i] < (int)s2.data[i])
				return 1;
			else if ((int) data[i] > (int)s2.data[i])
				return 2;
		}
	

	return 0 ;
}

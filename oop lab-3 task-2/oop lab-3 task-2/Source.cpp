#include<iostream>
#include"string.h"
using namespace std;
class string
{
private:
	char *data;
	int size;
public:
	string();
	string(char );
	string(char*);
	~string();
	char & at(int index);
	bool isEmpty();
	int getLength();
	//void display();
	int find(string *subStr, int start = 0);
	void insert(int index, string* subStr);




};
int main()
{
	char ch[20];
	cin >> ch;
	string str;
}
string::string()
{
	size = 0;
	data = new char[size];
}

string::string(char c)
{
	data[size] = c;
}

string::string(char *ch)
{

	size = 20;
	data = new char[size];
	data = ch;
}

string::~string()
{
	delete[]data;
	data = 0;
}

char & string::at(int index)
{
	return data[index];
}

bool string::isEmpty()
{
	int i = getLength();
	if (i == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int string::getLength()
{
	int i = 0;
	while (data[i] != '\0')
	{
		i++;
	}
	return i;
}

void string::display()
{
	//	for (int i = 0; i < getLength(); i++)
	{
		cout << data;
	}
}

int string::find(string * subStr, int start)
{
	int cS = (*subStr).getLength();
	for (int i = 0; i < getLength(); i++)
	{
		if (data[i] == (*subStr).data[0])
		{
			if (data[i + 1] == (*subStr).data[1])
			{
				if (data[i + 2] == (*subStr).data[2])
				{
					for (int j = 0; j < cS; j++)
					{
						if (&data[i] == (*subStr).data)
						{
							return true;
						}

					}

				}
			}
		}
		return false;
	}
	return 0;
}

void string::insert(int index, string * subStr)
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
}

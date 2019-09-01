#include<iostream>
#include"Set.h"
using namespace std;


void set::setNoOfElements(int e)
{
	noOfElements = e;
}

int set::getNoOfElements()const
{
	return noOfElements;
}

void set::setCapacity(int c)
{
	capacity = c;
}

int set::getCapacity()const
{
	return capacity;
}

int & set::getElement(int index) const
{
	return data[index];
}

set::set(int cap)
{
	//cout << "\n consructor";
	if (cap > 0)
	{
		capacity = cap;
	}
	else
	{
		capacity = 5;
	}
	data = new int[capacity];
	noOfElements = 0;
}

set::set(set & ref)
{
	cout << "\n copy consructor";
	noOfElements = ref.noOfElements;
	capacity = ref.capacity;
	data = new int[capacity];
	for (int i = 0; i < noOfElements; i++)
	{
		data[i] = ref.data[i];
	}
	
}

set::~set()
{
	
	delete[]data;
	data = 0;
}

void set::insert(int element)
{
	data[noOfElements] = element;
	noOfElements++;
}

void set::remove(int element)
{
	
	bool status = 1;
	for (int i = 0; i < noOfElements && status; i++)
	{
		
		
		if (data[i] == element)
		{

			for (int s = i; s < noOfElements; s++)
			{
				data[s] = data[s + 1];

			}
			status = false;
			noOfElements--;
		}
	
	}


}

int set::getCardinallity()
{
	return noOfElements;
}

bool set::isElementPresent(int element)
{
	for (int i = 0; i < noOfElements; i++)
	{
		if (data[i] == element)
		{
			return true;
		}
	}
	return false;
}

set set::calcUnion(set & s2)
{
	
	set x(capacity+s2.capacity);
	
	for (int i = 0; i <noOfElements; i++)
	{
		x.data[x.noOfElements] = data[i];
		x.noOfElements++;
	}
	for (int i = 0; i < s2.noOfElements; i++)
	{
		x.data[x.noOfElements] = s2.data[i];
		x.noOfElements++;
	}
	
	set intersection=calcIntersection(s2);
	for(int i=0;i<intersection.noOfElements;i++)
	{
		
		x.remove(intersection.data[i]);
	}


	
	return x;
}

set set::calcIntersection(set & s2)
{
	set x(capacity);

	for (int i = 0; i < noOfElements; i++)
	{
		for (int j = 0; j < s2.noOfElements; j++)
		{
			if (data[i] == s2.data[j])
			{
			
				x.data[x.noOfElements] = data[i];
				x.noOfElements++;
			}
		}
	}

	return x;
}

void set::display()
{
	cout << "{";
	for (int i = 0; i < noOfElements; i++)
	{
		cout << data[i];
		cout << " ";
	}
	cout << "}";
}

set set::CalcSymmetricDifference(set & s2)
{
	
	set intersection = calcIntersection(s2);
	set x = calcUnion(s2);
	for (int i = 0; i < intersection.noOfElements; i++)
	{
		x.remove(intersection.data[i]);
	}
	return x;
}

void set::powerSet()
{
	int rows, cols;
	rows = pow(2, noOfElements);
	cols =noOfElements ;
	int **arr = new int*[rows];
	for (int  i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = 0;
		}
	}

	for (int i = 0; i < rows; i++)
	{
		binary(arr, i,cols);
	
	}
	for (int i = 0; i < rows; i++)
	{
		cout << "\n";
		cout << "{";
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] == 1)
			{
				cout << data[j]<<" ";
			}
		}
		cout << "}";
	
	}


	return ;
}

void set::binary(int **p ,int i,int c)
{
	
	int n = i;
	
	while (n != 0)
	{
		p[i][c-1] = n % 2;
		n = n / 2;
		c--;
	}
}

set set::calcDifference(set & s2)
{
	set x(capacity);
	for(int i=0;i<noOfElements;i++)
	{
		x.data[x.noOfElements] = data[i];
		x.noOfElements++;
	}
	
	for(int j=0;j<s2.noOfElements;j++)
	{
		
		x.remove(s2.data[j]);
	}

	return x;
}

int set::isMember(int val)const
{
	for (int i = 0; i < noOfElements; i++)
	{
		if (data[i] == val)
		{
			return 1;
		}
	}
	return 0;
}

int set::isSubset(set & s2)
{
	bool status = false;
	int c = 0;
	for (int i = 0; i < s2.noOfElements; i++)
	{
		for (int j = 0; j < noOfElements; j++)
		{
			if (s2.data[i] == data[j])
			{
				c++;
			}
		}
	}
	if (c == s2.noOfElements && c == noOfElements - 1)
	{
		return 1;
	}
	else if (c == noOfElements)
	{
		return 2;
	}
	else
	{
		return 0;
	}
	
}

void set::resize(int newCapacity)
{
	int *a = new int[capacity];
	int c;
	for(int i=0;i<noOfElements;i++)
	{
		a[i] = data[i];
		c = i;
	}
	capacity = newCapacity;
	data = new int[capacity];
	noOfElements = c;
	for (int i = 0; i < newCapacity; i++)
	{
		data[i] =a[i];
	}
	
}

int & set::operator[](int r)
{
	return data[r];
}

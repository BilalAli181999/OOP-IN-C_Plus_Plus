#include<iostream>
#include"set.h"
#include"array.h"

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
	data.setCapacity(c) ;
}

int set::getCapacity()const
{
	return data.getCapacity();
}

int & set::getElement(int index) const
{
	return data.at(index);
}

set::set(int cap):data(cap)
{
	
	
	noOfElements = 0;
}

set::set(set & ref)
{
	
	noOfElements = ref.noOfElements;
	data.setCapacity(ref.getCapacity())  ;
	
	for (int i = 0; i < noOfElements; i++)
	{
		data.at(i) = ref.data.at(i);
	}

}



void set::insert(int element)
{
	data.at(noOfElements)=element;
	noOfElements++;
}

void set::remove(int element)
{

	bool status = 1;
	for (int i = 0; i < noOfElements && status ; i++)
	{


		if (data.at(i) == element)
		{
			
			for (int s = i; s <noOfElements; s++)
			{
				data.at(s) = data.at(s+1);
			}
			noOfElements--;
			status = false;
			
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
		if (data.at(i) == element)
		{
			return true;
		}
	}
	return false;
}

set set::calcUnion(set & s2)
{

	set x(data.getCapacity() + s2.getCapacity());
	
	for (int i = 0; i <noOfElements; i++)
	{
		x.data.at(x.noOfElements) = this->data.at(i);
		x.noOfElements++;
	}
	
	for (int i = 0; i < s2.noOfElements; i++)
	{
		x.data.at(x.noOfElements) = s2.data.at(i);
		x.noOfElements++;
	}
	
	
	set intersection = this->calcIntersection(s2);

	for (int i = 0; i<intersection.noOfElements; i++)
	{
		x.remove(intersection.data.at(i));
	}

	

	return x;
}

set set::calcIntersection(set & s2)
{
	set x(this->getCapacity());

	for (int i = 0; i < noOfElements; i++)
	{
		for (int j = 0; j < s2.noOfElements; j++)
		{
			if (data.at(i) == s2.data.at(j))
			{

				x.data.at(x.noOfElements) = data.at(i);
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
		cout << data.at(i);
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
		x.remove(intersection.data.at(i));
	}
	
	return x;
}

//void set::powerSet()
//{
//	int rows, cols;
//	rows = pow(2, noOfElements);
//	cols = noOfElements;
//	int **arr = new int*[rows];
//	for (int i = 0; i < rows; i++)
//	{
//		arr[i] = new int[cols];
//	}
//
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			arr[i][j] = 0;
//		}
//	}
//
//	for (int i = 0; i < rows; i++)
//	{
//		binary(arr, i, cols);
//
//	}
//	for (int i = 0; i < rows; i++)
//	{
//		cout << "\n";
//		cout << "{";
//		for (int j = 0; j < cols; j++)
//		{
//			if (arr[i][j] == 1)
//			{
//				cout << data[j] << " ";
//			}
//		}
//		cout << "}";
//
//	}
//
//
//	return;
//}

//void set::binary(int **p, int i, int c)
//{
//
//	int n = i;
//
//	while (n != 0)
//	{
//		p[i][c - 1] = n % 2;
//		n = n / 2;
//		c--;
//	}
//}

set set::calcDifference(set & s2)
{
	set x(this->getCapacity());
	for (int i = 0; i<noOfElements; i++)
	{
		x.data.at(x.noOfElements) = data.at(i);
		x.noOfElements++;
	}

	for (int j = 0; j<s2.noOfElements; j++)
	{

		x.remove(s2.data.at(j));
	}

	return x;
}

int set::isMember(int val)const
{
	for (int i = 0; i < noOfElements; i++)
	{
		if (data.at(i) == val)
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
			if (s2.data.at(i) == data.at(j))
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



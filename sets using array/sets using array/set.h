

#ifndef SET_H
#define SET_H
#include"array.h"



class set
{
private:
	 sarray data;
	int noOfElements;

public:
	
	set(int cap = 5);
	set(set & ref);
	void setNoOfElements(int e);
	int getNoOfElements()const;
	void setCapacity(int c);
	int getCapacity()const;
	int &getElement(int index)const;
	void insert(int element);
	void remove(int element);
	int getCardinallity();
	bool isElementPresent(int);
	set calcUnion(set & s2);
	set calcIntersection(set &s2);
	void display();
	set CalcSymmetricDifference(set & s2);
	
	
	set calcDifference(set & s2);
	int isMember(int val)const;
	int isSubset(set & s2);
	

};

#endif
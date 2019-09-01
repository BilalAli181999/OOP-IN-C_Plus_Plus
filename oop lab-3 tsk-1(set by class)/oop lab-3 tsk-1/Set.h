#ifndef SET_H
#define SET_H
#include<ostream>
using namespace std;
class set;


class set
{
private:
	int *data;
	int noOfElements;
	int capacity;
public:
	void setNoOfElements(int e);
	int getNoOfElements()const;
	void setCapacity(int c);
	int getCapacity()const;
	int &getElement(int index)const;
	set(int cap = 5);
	set(set & ref);
	~set();
	void insert(int element);
	void remove(int element);
	int getCardinallity();
	bool isElementPresent(int);
	set calcUnion(set & s2);
	set calcIntersection(set &s2);
	void display();
	set CalcSymmetricDifference(set & s2);
	void powerSet();
	void binary(int ** ,int i,int c);
	set calcDifference(set & s2);
	int isMember(int val)const;
	int isSubset(set & s2);
	void resize(int  newCapacity);
	int & operator[](int r);
	friend ostream& operator <<(ostream &str, set & ref);
	friend istream& operator >>(istream &str, set & ref);

};
void f(set &,set &,set &);
#endif // !SET_H

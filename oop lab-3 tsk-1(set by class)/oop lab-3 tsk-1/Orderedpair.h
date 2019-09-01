#ifndef ORDEREDPAIR_H
#define ORDEREDPAIR_H

class OrderedPair
{
private:
	int a;
	int b;
public:
	OrderedPair(int n = 0, int m = 0);
	int getElementA()const;
	int getElementB()const;
	void setElementA(int a);
	void setElementB(int b);
	bool areUnique(int d);

	void print();
	bool isEqual(const OrderedPair & ref)const;
};
#endif

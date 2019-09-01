#ifndef RELATION_H
#define RELATION_H
#include"set.h"
#include"Orderedpair.h"
class Relation
{
private:
	set setA;
	OrderedPair *orderedPairList;
	int capacity;
	int noOfOrderedPair;
public:
	Relation(int n, set &);
	Relation(const Relation &);
	~Relation();
	void insert(const OrderedPair & ref);
	void remove(const OrderedPair & ref);
	int getCardinality()const;
	bool compare(const Relation &)const;
	void print();
	bool isReflexive()const;
	bool irreflexive()const;
	bool isSymmetric()const;
	bool isAntiSymmetric()const;
	bool isTransitive()const;


};


#endif
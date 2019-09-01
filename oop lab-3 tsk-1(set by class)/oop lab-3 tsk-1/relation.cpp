#include "relation.h"
#include<iostream>
using namespace std;

Relation::Relation(int n, set & ref)
{

	setA.setNoOfElements(ref.getNoOfElements()) ;
	setA.setCapacity(ref.getCapacity());
	for (int i = 0; i < ref.getCapacity(); i++)
	{
		setA.getElement(i) = ref.getElement(i);
	
		
	}
	
	this->capacity = n*n;
	this->orderedPairList = new OrderedPair[capacity];
	this->noOfOrderedPair = 0;
	
}

Relation::Relation(const Relation & ref)
{
	this->setA = ref.setA;
	this->capacity = ref.capacity;
	this->noOfOrderedPair = ref.noOfOrderedPair;
	this->orderedPairList=new OrderedPair [capacity];
	{
		for (int i = 0; i < noOfOrderedPair; i++)
		{
			orderedPairList[i].setElementA(ref.orderedPairList[i].getElementA());
			orderedPairList[i].setElementB(ref.orderedPairList[i].getElementB());
		}
	}
}

Relation::~Relation()
{
	delete[]orderedPairList;
	orderedPairList=0;
}

void Relation::insert(const OrderedPair & ref)
{
	orderedPairList[noOfOrderedPair].setElementA(ref.getElementA());
	orderedPairList[noOfOrderedPair].setElementB(ref.getElementB());

	this->noOfOrderedPair++;
}

void Relation::remove(const OrderedPair & ref)
{
	for (int i = 0; i < noOfOrderedPair; i++)
	{
		if (orderedPairList[i].isEqual(ref))
		{
			for (int j = i; j < noOfOrderedPair; j++) 
			{
				orderedPairList[i] = orderedPairList[i + 1];
			}
			noOfOrderedPair--;
		}
	}
}

int Relation::getCardinality() const
{
	return noOfOrderedPair;
}

bool Relation::compare(const Relation & ref) const
{
	if (noOfOrderedPair == ref.noOfOrderedPair)
	{
		for (int i = 0; i < noOfOrderedPair; i++)
		{
			if (orderedPairList[i].isEqual(ref.orderedPairList[i]))
			{
				return true;
		    }
		}
	}
	return false;
}

void Relation::print()
{
	cout << "{";
	for (int i = 0; i < noOfOrderedPair; i++)
	{
		
		orderedPairList[i].print();
		
	}
	cout << "}";
}

bool Relation::isReflexive() const
{
	bool *status = new bool[setA.getCapacity()];
	for (int i = 0; i < setA.getCapacity(); i++)
	{
		status[i] = 0;
	}
	
	for (int i = 0; i < setA.getCapacity(); i++)
	{
		
		for (int j = 0; j < noOfOrderedPair; j++)
		{
			if (orderedPairList[j].areUnique(setA.getElement(i)))
			{
				status[i] = true;
			}
		}
	}

	for (int s = 0; s < setA.getCapacity(); s++)
	{
		
		if (status[s] != true)
		{
			return false;
		}
		
		
	}

	return true;
	
}

bool Relation::irreflexive() const
{
	bool *status = new bool[setA.getCapacity()];
	for (int i = 0; i < setA.getCapacity(); i++)
	{
		status[i] = 0;
	}

	for (int i = 0; i < setA.getCapacity(); i++)
	{

		for (int j = 0; j < noOfOrderedPair; j++)
		{
			if (orderedPairList[j].areUnique(setA.getElement(i)))
			{
				status[i] = true;
			}
		}
	}

	for (int s = 0; s < setA.getCapacity(); s++)
	{

		if (status[s] == true)
		{
			return false;
		}


	}
	return true;
}

bool Relation::isSymmetric() const
{
	bool *status = new bool[noOfOrderedPair];
	for (int i = 0; i < noOfOrderedPair; i++)
	{
		status[i] = 0;
	}
	for (int j = 0; j <noOfOrderedPair; j++)
	{
		for (int i = 0; i < noOfOrderedPair; i++)
		{
		
			
				if ((orderedPairList[j].getElementA() == orderedPairList[i].getElementB()) && (orderedPairList[j].getElementB() == orderedPairList[i].getElementA()))
				{
					status[j] = true;
				}
			
		}
	}
	for (int i = 0; i < noOfOrderedPair; i++)
	{
		if (status[i] != 1)
		{
			return false;
		}
	}
	return true;
}

bool Relation::isAntiSymmetric() const
{
	bool *status = new bool[noOfOrderedPair];
	for (int i = 0; i < noOfOrderedPair; i++)
	{
		status[i] = 0;
	}
	for (int j = 0; j <noOfOrderedPair; j++)
	{
		for (int i = 0; i < noOfOrderedPair; i++)
		{


			if ((orderedPairList[j].getElementA() == orderedPairList[i].getElementB()) && (orderedPairList[j].getElementB() == orderedPairList[i].getElementA()))
			{
				status[j] = true;
			}

		}
	}
	for (int i = 0; i < noOfOrderedPair; i++)
	{
		if (status[i] == 1)
		{
			return false;
		}
	}
	return true;
}

bool Relation::isTransitive() const
{
	
	bool status1 = false;
		bool status2=false;
	int a, b,c;
	for (int i = 0; i < noOfOrderedPair; i++)
	{
	
		if (setA.isMember(orderedPairList[i].getElementA()))
		{
			
			if (setA.isMember(orderedPairList[i].getElementB()))
			{
			
				status1 = true;
				a = orderedPairList[i].getElementA();
				b= orderedPairList[i].getElementB();
				
			}
		}
	}
	
	for (int i = 0; i < noOfOrderedPair && status1; i++)
	{
		if (setA.isMember(b) && orderedPairList[i].getElementA() == b)
		{

			if (setA.isMember(orderedPairList[i].getElementB()))
			{
				status2 = true;
				c = orderedPairList[i].getElementB();
			}
		}
		
	}
	
	for (int i = 0; i < noOfOrderedPair && status2; i++)
	{
		if (setA.isMember(a) && orderedPairList[i].getElementA() == a && setA.isMember(c) && orderedPairList[i].getElementA() == c)
		{
			return true;
		}
	}
	return false;

}




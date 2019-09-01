#include<iostream>
#include"Set.h"
#include"relation.h"
#include"Orderedpair.h"

using namespace std;
int main()
{
	set a(4),b(4);
	/*a[0] = 23;
	a[1] = 213;
	a[2] = 223;
	a[3] = 3;*/
	cin >> a;
	cout << a;
	/*a.display();
	for (int i = 0; i < a.getCapacity(); i++)
	{
		cout << " "<<a.getElement(i);
	}

	a.insert(1);
a.insert(2);
	a.insert(7);
	a.insert(4);
	a[2] = 34;
	a.display();*/
	b.insert(4);
	b.insert(5);
	b.insert(7);
	b.insert(9);
//	a.display();
//	b.display();
	
//	set intersection=a.calcIntersection(b);
//set unionSet =a.calcUnion(b);
	//intersection.display();
//	unionSet.display();
//	set symmetricDifference = a.CalcSymmetricDifference(b);
	//symmetricDifference.display();
	//b.powerSet();
	/*if (a.isSubset(b)==1)
	{
		cout << "proper subset";
	}
	else if (a.isSubset(b) == 2)
	{
		cout << "improper subset";
	}
	else if (a.isSubset(b) == 1)
	{
		cout << "not subset";
	}*/
	/*if (a.isElementPresent(2))
		cout << "present";
	else
		cout << "not present";*/
	
	//set difference = b.calcDifference(a);
//	difference.display();

}



//int main()
//{
//	set s(3);
//	
//
//
//	s.getElement(0) = 1;
//	s.getElement(1) = 2;
//	s.getElement(2) = 3;
//	Relation r1(3,s);
//
//	OrderedPair o1(1, 2);
//	OrderedPair o2(2, 4);
//	OrderedPair o3(3, 2);
//	OrderedPair o4(4, 3);
//	OrderedPair o5(5, 1);
//	OrderedPair o6(1, 2);
//	r1.insert(o1);
//	r1.insert(o2);
//	r1.insert(o3);
//	r1.insert(o4);
//	r1.insert(o5);
//	r1.insert(o6);
//	//r1.print();
//	//if (r1.isReflexive())
//	//	cout << "\nRelation is Reflexive ";
//	//if (r1.irreflexive())
//	//	cout << "\nRelation is irReflexive ";
//	//if (r1.isSymmetric())
//	//	cout << "\nRelation is symmetric";
//	//if (r1.isAntiSymmetric())
//	//	cout << "\nRelation is Anti-symmetric";
//	//cout << "\n\n";
//	//r1.remove(o6);  //remove command used
//	r1.print();
//	if (r1.isReflexive())
//		cout << "\nRelation is Reflexive ";
//	if (r1.irreflexive())
//		cout << "\nRelation is irReflexive ";
//	if (r1.isSymmetric())
//		cout << "\nRelation is symmetric";
//	if (r1.isAntiSymmetric())
//		cout << "\nRelation is Anti-symmetric";
//	if (r1.isTransitive())
//		cout << "\nRelation is Transitive";
//
//}

#include<iostream>
using namespace std;
//class A
//{
//	int a;
//public:
//	int getA()
//	{
//		return a;
//	}
//	friend void f(A &ref);
//};
//void f( A& ref)
//{
//	ref.getA();   //no error
//	ref.a = 12;  
//	cout << ref.a;
//}
//int main()
//{
//	A a;
//	f(a);
//	
//}







//class A;
//
//
//class B
//{
//	int b;
//public:
//	B()
//	{
//
//	}
//	int getB()
//	{
//		return b;
//	}
//	void f(A &ref);
//
//};
//class A
//{
//private:
//	int a;
//public:
//	A()
//	{
//
//	}
//	friend void B::f(A &ref);
//
//
//};
//void B::f(A & ref)
//{
//	ref.a = 10;
//}
//int main()
//{
//	B b;
//	A a;
//
//}



//class B;
//class A
//{
//private:
//	int a;
//public:
//	A()
//	{
//
//	}
//	friend class B;
//
//
//};
//
//class B
//{
//	int b;
//public:
//	B()
//	{
//
//	}
//	int getB()
//	{
//		return b;
//	}
//	void f(A &ref)
//	{
//		ref.a = 10;
//	}
//};
//
//
//int main()
//{
//	B b;
//	A a;
//
//}





//class set
//{
//private:
//	int *data;
//	int nOe;
//public:
//	set()
//	{
//		nOe = 3;
//		data = new int[nOe];
//		
//		
//	}
//	void setNoe(int n)
//	{
//		nOe = n;
//	}
//	set(set & ref)
//	{
//		//cout << "\n copy constructor";
//	}
//	~set()
//	{
//		//cout << "\n dest";
//	}
//	friend ostream & operator<<(ostream &ostr, set & ref);
//	friend istream& operator>>(istream &ostr, set & ref);
//};
//int main()
//{
//	set s1,s2;
//
//	cin >> s1>>s2;
//	cout << s1<<s2; 
//}
//ostream & operator<<(ostream &ostr,  set & ref)
//{
//	
//	for (int i = 0; i < ref.nOe; i++)
//	{
//		
//		ostr << ref.data[i]<<"   ";
//	}
//	return ostr;
//}
//istream& operator>>(istream &ostr,  set &ref)
//{
//	 
//	for (int i = 0; i < ref.nOe; i++)
//	{
//		cout << "\n enter:"; 
//		ostr >> ref.data[i];
//	}
//	return ostr;
//}





//class cstring
//{
//private:
//	char *data;
//	int nOe;
//public:
//	cstring()
//	{
//		nOe = 20;
//		data = new char[nOe];
//		
//		
//	}
//	friend ostream &operator<<(ostream &ostr, cstring & ref);
//	friend istream &operator>>(istream &ostr, cstring & ref);
//};
//int main()
//{
//	cstring s1,s2;
//	cin >> s1>>s2;
//	cout << s1<<s2;
//
//	
//}
//ostream &operator<<(ostream &ostr,  cstring & ref)
//{
//	cout << "\n <<operator";
//	ostr << ref.data;
//	return ostr;
//}
//istream &operator>>(istream &ostr,  cstring & ref)
//{
//	cout << "\n >>operator";
//	cin.getline(ref.data, 20);
//	return ostr;
//}



//////////////////////////////////////   INHERITENCE   ////////////////////////////////////////////////////////////////////

//class A
//{
//private:
//	int a;
//public:
//	A(int i)
//	{
//		cout << "\n A:: para cons";
//	}
//	void insideA()
//	{
//		cout << "\n insideA";
//	}
//
//
//};
//class B :public A
//{
//	int b;
//public:
//	B(int i=0):A(i)
//	{
//		cout << "\n B: para cons";
//	}
//	int getB()
//	{
//		return b;
//	}
//	void insideB()
//	{
//		A::insideA();
//		cout << "\n inside b function";
//	}
//	void insideA()
//	{
//		cout << "\n B::InsideA ";
//	}
//
//
//
//};
//
//int main()
//{
//	A a(12);
//	B b;
//	
//	a.insideA();
//	b.A::insideA();
//
//}



//class A
//{
//private:
//	int a;
//public:
//	A(int i)
//	{
//		cout << "\n A:: para cons";
//	}
//protected:
//	void insideA()
//	{
//		cout << "\n insideA";
//	}
//public:
//	~A()
//	{
//		cout << "\nA::destructor";
//	}
//
//};
//class B :public A
//{
//	int b;
//public:
//	B():A(1)
//	{
//		cout << "\n B: default cons";
//	}
//	int getB()
//	{
//		return b;
//	}
//	void insideB()
//	{
//		cout << "\n inside b function";
//		insideA();
//	}
//	~B()
//	{
//		cout << "\nB::destructor";
//	}
//
//
//};
//
//int main()
//{
//	A a(12);
//	B b;
//	b.insideB();
//	  
//}



//class A
//{
//protected:
//	int a;
//public:
//	A()
//	{
//		cout << "\n A:: default cons";
//	}
//	void insideA()
//	{
//		cout << "\n insideA";
//	}
//
//
//};
//class B :protected A
//{
//	int b;
//public:
//	B()
//	{
//		cout << "\n B: default cons";
//	}
//	int getB()
//	{
//		return b;
//	}
//	void insideB()
//	{
//		cout << "\n inside b function";
//
//		b = a;
//	}
//
//
//
//};
//
//int main()
//{
//	A a;
//	B b;
//	b.insideB();
//	a.insideA();
//	b.insideA();  // error since protected inheritence
//}


//class A
//{
//private:
//	int a;
//public:
//	A()
//	{
//		cout << "\n A:: default cons";
//	}
//	void insideA()
//	{
//		cout << "\n insideA";
//	}
//
//
//};
//class B :private A
//{
//	int b;
//public:
//	B()
//	{
//		cout << "\n B: default cons";
//	}
//	int getB()
//	{
//		
//		return b;
//	}
//	void insideB()
//	{
//		cout << "\n inside b function";
//	//	b = a;//error since private var a
//		insideA();// ok since direct class ,in case of multiple then only for direct sub class not indirect
//	}
//
//
//
//};
//
//int main()
//{
//	A a;
//	B b;
//
//	a.insideA();
//	b.insideB();
////	b.insideA();//error since private inheritence
//}


//class A
//{
//private:
//	int pri;
//protected:
//	int pr;
//public:
//	int pu;
//
//
//};
//class B :public A
//{
//
//	int b;
//public:
//	B()
//	{
//		cout << "\n B: default cons";
//	}
//	int getB()
//	{
//		return b;
//	}
//	void insideB()
//	{
//		cout << "\n inside b function";
//		pu;
//		pr;
////		pri;//error since private var
//
//	}
//
//
//
//};
//
//int main()
//{
//	A a;
//	B b1;
//	b1.pu;
//	//a.pr;//since protected variable is for sub classes not for main
//	
//	//b.pr;//error since protected inheritence
//}



//class A
//{
//private:
//	int pri;
//protected:
//	int pr;
//public:
//	int pu;
//
//
//};
//class B :protected A
//{
//	int b;
//public:
//	B()
//	{
//		cout << "\n B: default cons";
//	}
//	int getB()
//	{
//		return b;
//	}
//	void insideB()
//	{
//		cout << "\n inside b function";
//		pu;
//		pr;
//		//		pri;//error since private var
//
//	}
//
//
//
//};
//
//int main()
//{
//	A a;
//	B b;
//
//	//a.pr;//since protected variable is for sub classes not for main()
////	b.pu;//error since protected inheritence does not allow public members in main()
//	//b.pr;//error since protected inheritence
//}



//class A
//{
//private:
//	int apri;
//protected:
//	int apr;
//public:
//	int apu;
//	A()
//	{
//		cout << "\nA::default";
//	}
//	A(int i)
//	{
//		cout << "\nA::parameterized";
//	}
//	~A()
//	{
//		cout << "\n A::destructor";
//	}
//
//};
//class B :public A
//{
//private:
//	int bpri;
//protected:
//	int bpr;
//public:
//	int bpu;
//	B():A(2)
//	{
//		cout << "\nB::default";
//	}
//	B(int i)
//	{
//		cout << "\nB::parameterized";
//	}
//	void insideB()
//	{
//		cout << "\n inside b function";
//		apu;
//		apr;
//		//		pri;//error since private var
//
//	}
//
//	~B()
//	{
//		cout << "\n B::destructor";
//	}
//
//};
//class C :public B
//{
//public:
//	C()
//	{
//		cout << "\nC::default";
//	}
//	C(int i):B(3)
//	{
//		cout << "\nC::parameterized";
//	}
//	void insideC()
//	{
//		//apri;
//		apr;
//		apu;
//		bpr;
//		bpu;
//	}
//	~C()
//	{
//		cout << "\n C::destructor";
//	}
//};
//
//int main()
//{
//	A a;
//	B b;
//	C c(3);
////	a.apr;//since protected variable is for sub classes not for main()
//	
////	b.apr;//error since protected inheritence
//	a.apu;
//	b.apu;
////	b.apr;//since protected not allowed
//	c.apu;
////	c.bpr;//since protected not allowed
//}



//class A
//{
//private:
//	int apri;
//protected:
//	int apr;
//public:
//	int apu;
//
//
//};
//class B :public A
//{
//private:
//	int bpri;
//protected:
//	int bpr;
//public:
//	int bpu;
//	void insideB()
//	{
//		cout << "\n inside b function";
//		apu;
//		apr;
//		bpri;
//		//		apri;//error since private var
//
//	}
//
//
//
//};
//class C :protected B
//{
//public:
//	void insideC()
//	{
//		//apri;
//		apr;
//		apu;
//		bpr;
//		bpu;
//	}
//};
//
//int main()
//{
//	A a;
//	B b;
//	C c;
//	//a.apr;//since protected variable is for sub classes not for main()
//
//	//b.bpr;//error since protected inheritence
//	a.apu;
//	b.apu;//ok since inheritence of b to a is punblic
//	//c.apu;// now since inheritence of c to b is protected
//	//	b.apr;//since protected not allowed
////	c.bpu;//now since inheritence of c to b is protected
//	//	c.bpr;//since protected not allowed
//}


//class A
//{
//private:
//	int apri;
//protected:
//	int apr;
//public:
//	int apu;
//	~A()
//	{
//		cout << "\n A::Dest";
//    }
//
//};
//class B :protected A
//{
//private:
//	int bpri;
//protected:
//	int bpr;
//public:
//	int bpu;
//	void insideB()
//	{
//		cout << "\n inside b function";
//		apu;
//		apr;
//		//		pri;//error since private var
//
//	}
//	~B()
//	{
//		cout << "\n B::Dest";
//	}
//
//
//};
//class C :public B
//{
//public:
//	void insideC()
//	{
//		//apri;
//		apr;
//		apu;
//		bpr;
//		bpu;
//	}
//	~C()
//	{
//		cout << "\n C::Dest";
//	}
//};
//
//int main()
//{
//	A a;
//	B b;
//	C c;
//	//a.pr;//since protected variable is for sub classes not for main()
//
//	//b.pr;//error since protected inheritence
//	a.apu;
//	b.bpu;
//	//b.apu;//now since inheritence of b to a is protected
//		  //c.apu;// now since inheritence of b to a is protected
//		  //	b.apr;//since protected not allowed
////	b.apu;// now since inheritence of b to a is protected
//		  	c.bpu;//ok since inheritence of c to b is public
//		  //	c.bpr;//since protected not allowed
//}


//class A
//{
//private:
//	int apri;
//protected:
//	int apr;
//public:
//	int apu;
//
//
//};
//class B :public A
//{
//private:
//	int bpri;
//protected:
//	int bpr;
//public:
//	int bpu;
//	void insideB()
//	{
//		cout << "\n inside b function";
//		apu;
//		apr;
//		//		pri;//error since private var
//
//	}
//
//
//
//};
//class C :private B
//{
//public:
//	void insideC()
//	{
//		//apri;
//		apr;//error since private inheritence
//		apu;//error since private inheritence
//		bpr;
//		bpu;
//		B::bpu;
//		C::apu;
//		bpr;
//		//apr;// error since private inheritence
//	}
//};
//
//int main()
//{
//	A a;
//	B b;
//	C c;
//	//a.pr;//since protected variable is for sub classes not for main()
//
//	//b.apr;//error since protected variable
//	a.apu;
//	b.bpu;
//
//	b.apu;//now since inheritence of b to a is private
//	//c.apu;// now since inheritence of b to a is private
//	//	b.apr;//since protected not allowed
//	//	b.apu;// now since inheritence of b to a is protected
////	c.bpu;// since inheritence of c to b is private
//	b.apu;// since inheritence of c to b is private
//		  //	c.bpr;//since protected not allowed
//}




//class A
//{
//private:
//	int apri;
//protected:
//	int apr;
//public:
//	int apu;
//	A()
//	{
//		cout << "\nA::default";
//	}
//	A(int i)
//	{
//		cout << "\nA::parameterized";
//	}
//	A(A & ref)
//	{
//		cout << "A::copy";
//	}
//
//};
//class B :private A
//{
//private:
//	int bpri;
//protected:
//	int bpr;
//public:
//	int bpu;
//	B():A(2)
//	{
//		cout << "\nB::default";
//	}
//	B(int i)
//	{
//		cout << "\nB::parameterized";
//	}
//	void insideB()
//	{
//		cout << "\n inside b function";
//		apu;
//		apr;
//		//		pri;//error since private var
//
//	}
//	B(B & ref):A(ref)
//	{
//		cout << "B::copy";
//	}
//
//
//
//};
//class C :public B
//{
//public:
//	C()
//	{
//		cout << "\nC::default";
//	}
//	C(int i):B(3)
//	{
//		cout << "\nC::parameterized";
//	}
//	void insideC()
//	{
//		//apri;
//	//	A::apr;
//	//	apu;
//		bpr;
//		bpu;
//	}
//};
//
//int main()
//{
//	A a;
//	B b;
//	B b1 = b;
//	C c(3);
//
//}




//class A
//{
//public:
//	void f()
//	{
//		cout << "A::f()";
//	}
//
//};
//class B:public A
//{
//public:
//	void f()
//	{
//		cout << "B::f()";
//	}
//
//};
//int main()
//{
//	B obj;
//	obj.f();
//	obj.A::f();//not accessible if protected inheritence
//}



//class A
//{
//	
//public:
//	//int f;
//	void f()
//	{
//		cout << "A::f()";
//	}
//
//};
//class B :public A
//{
//public:
//	using A::f;
//	void f(int i)
//	{
//		cout << "B::f()";
//	}
//
//};
//int main()
//{
//	B obj;
//	obj.f(); //error cause it finds f named function in B and doesn't searchs in A ,but in B parameters does not match
//		obj.A::f();//not accessible if protected inheritence
//}



//class A
//{
//public:
////	int f;//error if same variable name exists as function
//	void f()
//	{
//		cout << "A::f()";
//	}
//
//};
//class B :public A
//{
//public:
//	using A::f;
//	void f(int i)
//	{
//		cout << "B::f()";
//	}
//
//};
//int main()
//{
//	B obj;
//	
//	obj.f(); //error cause it finds f named function in B(if using A::f is not used) and doesn't searchs in A ,but in B parameters does not match
//	obj.A::f();//not accessible if protected inheritence
//}


//class A
//{
//public:
//	
//	int f=12;
//
//};
//class B :private A
//{
//public:
//
//	int f=10;//no error since it finds f first in B and prints it
//	void g()
//	{
//		cout <<A:: f;
//	}
//};
//int main()
//{
//	B obj;
//obj.g();
// cout<<obj.A::f;
//}




//class A
//{
//public:
//		//int f;//error if same variable name exists as function
//	void f()
//	{
//		cout << "A::f()";
//	}
//
//};
//class B 
//{
//public:
//
//	void f()
//	{
//		cout << "B::f()";
//	}
//
//};
//class C:public B,protected A
//{
//public:
//	void t()
//	{
//		cout << "\n incide c::f()";
//		//f(); // f() is ambiguos as c contains both A's and B's 
//		A::f();//ok
//	}
//};
//int main()
//{
//	C obj;
//	obj.f();//f is ambiguous
//	obj.B::f();//ok
//	
//}



//class A
//{
//public:
//	
//	A()
//	{
//		cout << "A::default";
//	}
//	A(int i)
//	{
//		cout << "A::parameterized";
//	}
//
//};
//class B
//{
//public:
//
//	B()
//	{
//		cout << "B::default";
//	}
//	B(int i)
//	{
//		cout << "B::parameterized";
//	}
//
//};
//class C :public A, public B   //from left to right 
//{
//public:
//	C():A(),B()
//	{
//		cout << "C::default";
//	}
//	C(int i) :A(2)    //irrespective of member initialization list order will be according to inheritence definition from left to right .in this case (1)B   (2)A
//	{
//		cout << "C::parameterized";
//	}
//};
//int main()
//{
//	C obj(2);
//
//
//}



//class A
//{
//public:
//	int i = 0;
//
//};
//class B:public A
//{
//public:
//	int i = 1;
//};
//class C:public B
//{
//public:
//	int i = 2;
//};
//
//int main()
//{
//	A obj1;
//	B obj2;
//	C obj3;
//	obj2.i = 32;
//	cout<<obj2.i;
//	
//cout<<	obj3.B::i;
//}


//class A
//{
//public:
//	int i;
//	int j;
//	A()
//	{
//		i = 2;
//		j = 3;
//	}
//
//};
//class B:public A//if protectes than polymorphism not allowed
//{
//public:
//	int i;
//	int j;
//	B()
//	{
//		i = 9;
//		j = 9;
//	}
//};
//class C:public B
//{
//public:
//	int i;
//};
//
//int main()
//{
//	A a;
//	B b;
//	C c1;
//	a.i = 12;
//	b.j = 98;
//	a.j = 23;
//	b.i = 13;
//	c1.i = 32;
//	cout << b.i;
//
//	A *ptr = new B;
//	cout<<ptr->j;
//}



/////////////////////////////////////////POLYMORPHISM////////////////////////////////////////////////////////////////////////

//class a
//{
//public:
//	void f()
//	{
//		cout << "A::f()";
//		t();
//	}
//	 void t()
//	{
//		cout << "\n a::t()";
//	}
//};
//class b :public a
//{
//public:
//	// void f() //function need to be virtual
//	//{
//	//	 cout << "B::f()";
//	//	 t();
//	// }
//	 void t()
//	 {
//		 cout << "\n b::t()";
//	 }
//};
//class c :public b
//{
//public:
//	/*void f()
//	{
//		cout << "C::f()";
//	}*/
//	void t()
//	{
//		cout << "\n c::t()";
//	}
//};
//int main()
//{
//	c obj1;
//	b obj2;
//	obj1.f();
//}


//class a
//{
//	virtual void f()
//	{
//
//	}
//};
//class b :public a
//{
//
//	virtual void f() final//function need to be virtual
//	{}
//};
//class c :public b
//{
//	void f()
//	{
//
//	}
//};

//class a
//{
//	 void f()
//	{
//
//	}
//};
//class b :public a
//{
//
//	virtual void f()
//	{}
//};
//class c :public b   //override makes sure that function is over rided in base class
//{
//	void f()  override
//	{
//
//	}
//};
//int main()
//{
//	b*ptr = new c;
//}

//class A
//{
//public:
//	int i;
//	double j;
//
//	A()
//	{
//		//	i = 2;
//		//j = 3;
//	}
//	virtual void f()
//	{
//		cout << "A::f()";
//	}
//
//};
//class B :public A
//{
//public:
//	int i;
//	B()
//	{
//		i = 9;
//	}
//	//void f()
//	//{
//	//	cout << "B::f()";
//	//	//f();//will run of latest implentation if virtual exists ,if not then b's
//	//}
//};
//class C :public B
//{
//public:
//	int i;
//	//int k;
// 	/*void f()
//	{
//		cout << "C::f()";
//	}*/
//};
//
//int main()
//{
//
//	cout << "size of " << sizeof(C);
//	B *ptr = new C;//even in absence of virtual on B still C's f() runs as A contain virtual and ptr's type is B and inherits A so act as virtual is on B but will search for f() from C to B to A
//	ptr->f();
////	ptr->i = 999;
//cout << (*ptr).i;               
//	A *ptr1 = new C;
//	ptr1->f();
//
//}



//class A
//{
//public:
//	int i;
//	int j;
//	A()
//	{
//		//	i = 2;
//		//j = 3;
//	}
//	void f()
//	{
//		cout << "A::f()";
//	}
//	virtual void g()
//	{
//		cout << "A::g()";
//	}
//};
//class B :public A
//{
//public:
//	int i;
//	B()
//	{
//		i = 9;
//	}
//virtual	void f()
//	{
//		cout << "B::f()";
//	}
//};
//class C :public B
//{
//public:
//	int i;
//	void f()
//	{
//		cout << "C::f()";
//	}
//	void g()
//	{
//		cout << "C::g()";
//	}
//};
//
//int main()
//{
//
//
//	B *ptr = new C;//if f() is not in b it also search for it in A()
////	ptr->f();
//	A *ptr1 = new B;//if f() is not in A than error
//	ptr1->f();
//	ptr1->g();
//	
//}


//class A
//{
//public:
//	int i;
//	double j;
//	A()
//	{
//			i = 2;
//		j = 3;
//	}
//virtual void f()
//	{
//		cout << "A::f()";
//	}
//
//};
//class B :public A
//{
//public:
//	int i;
////	int j;
//	B()
//	{
//		i = 9;
//	}
//	/*void f()
//	{
//		cout << "B::f()";
//	}*/
//};
//class C :public B
//{
//public:
//	int i;
////	double x;
//virtual	void f()
//	{
//		cout << "C::f()";
//	}
//};
//
//int main()
//{
//
//	cout << sizeof(C);
//	A *ptr = new B;//if A's f() does not contain virtual in a it also search for it in A()
//	ptr->f();
//	B *ptr1 = new C;//now sine virtual in B's f() so f() of c will run
//	ptr1->f();
//}





//class A
//{
//public:
//	int i;
//	int j;
//	A()
//	{
//		i = 2;
//		j = 3;
//	}
//	virtual	void f()
//	{
//		cout << "A::f()";
//	}
//	virtual ~A()
//	{
//		cout << "\nA::Dest";
//	}
//
//};
//class B :public A
//{
//public:
//	int i;
//	B()
//	{
//		i = 9;
//	}
//	/*virtual	void f()
//	{
//		cout << "B::f()";
//	}*/
//	~B()
//	{
//		cout << "\nB::Dest";
//	}
//};
//class C :public B
//{
//public:
//	int i;
//	virtual	void f()
//	{
//		cout << "C::f()";
//	}
//	~C()
//	{
//		cout << "\nC::Dest";
//	}
//};
//
//int main()
//{
//
//
//	A *ptr = new B;//now since virtual ,if B's  f() does not exist than search in B than A 
//	ptr->f();
//	A *ptr1 = new C;//now since virtual ,if B's and c's f() does not exist than search inC, B than A 
//	ptr1->f();
//	delete ptr1;
//}



//class A
//{
//public:
//	int i;
//	int j;
//	A()
//	{
//		i = 2;
//		j = 3;
//	}
//	void  f()
//	{
//		cout << "A::f()";
//		
//	}
//
//};
//class B :public A
//{
//public:
//	double i;
//	B()
//	{
//		i = 9;
//	}
//		void f()
//	{
//	cout << "B::f()";
//	}
//};
//class C :public B
//{
//public:
//	int i;
//	virtual void f()
//	{
//		cout << "C::f()";
//	}
//};
//
//int main()
//{
//	cout << sizeof(C);
//
//	A *ptr = new B;
//	ptr->f();//since not printing it considers void type and int type f() as error
//	//error since signature is different
//	A *ptr1 = new C;//now since virtual ,if B's and c's f() does not exist than search inC, B than A 
//	ptr1->f();
//}




//class A
//{
//public:
//	int i;
//	double j;
//	A()
//	{
//		i = 2;
//		j = 3;
//	}
//	virtual	void f()
//	{
//		cout << "A::f()";
//	}
//
//};
//class B :public A
//{
//public:
//	int i;
//	B()
//	{
//		i = 9;
//	}
//	virtual	void f()
//	{
//	cout << "B::f()";
//	}
//};
//class C :public B
//{
//public:
//	int i;
//	virtual	void f()
//	{
//		cout << "C::f()";
//	}
//};
//void f(A *obj)     //if & (by reference than C as virtual exists ),if not &(by copy) than A even if virtual exists
//{
//	obj->f();
//}
//int main()
//{
//	cout<<sizeof(C);
//	C c;
//	B b;
//	A *ptr;
//	ptr = new C;
//	f(&c);
//	
//}



//class A
//{
//public:
//	int i;
//	int j;
//	
//virtual	void f()
//	{
//		cout << "A::f()";
//	}
//  A()
//	{
//		cout << "\nA:: Cons";
//	}
// ~A()
//	{
//		cout << "A::Destructor";
//	}
//
//};
//class B :public A
//{
//public:
//	int i;
//	
//		void f()
//	{
//		cout << "B::f()";
//	}
//		B()
//		{
//			cout << "\nB:: Cons";
//		}
//	virtual ~B()
//	{
//		cout << "B::Destructor";
//	}
//};
//class C :public B
//{
//public:
//	int i;
//	void f()
//	{
//		cout << "\nC::f()";
//	}
//	C()
//	{
//		cout << "\n C::Cons";
//	}
//	~C()
//	{
//		cout << "C::Destructor";
//	}
//};
//
//int main()
//{
//	B * ptr = new C;
//	cout << "\n";
//	ptr->f();
//	delete ptr;      // if no virtual than only A's destructor if virtual than first C than B than A's destructor
//	
//}


//class A
//{
//	int j;
//	double k;
//	virtual void f()
//	{
//
//	}
//	char *o;
//	int c;
//};
//int main()
//{
//	cout<<sizeof(A);//virtual pointer will also be stored according to largest variable,even it is always of size 4
//}



//class A
//{
//	int s[9];
//	double j;
//	char ch;
//};
//int main()
//{
//	cout << sizeof(A);//virtual pointer will also be stored according to largest variable,even it is always of size 4
//}



//class A
//{
//public:
//	int i;
//	int j;
//	
//virtual	void f()
//	{
//		cout << "A::f()";
//	}
// A()
//	{
//		cout << "\nA:: Cons";
//	}
// ~A()
//	{
//		cout << "A::Destructor";
//	}
//
//};
//class B :public A
//{
//public:
//	int i;
//	
//		void f()
//	{
//		cout << "B::f()";
//	}
//		B()
//		{
//			cout << "\nB:: Cons";
//		}
//	 ~B()
//	{
//		cout << "B::Destructor";
//	}
//};
//class C :public B
//{
//public:
//	int i;
//	void f()
//	{
//		cout << "\nC::f()";
//	}
//	C()
//	{
//		cout << "\n C::Cons";
//	}
//	~C()
//	{
//		cout << "C::Destructor";
//	}
//};
//
//void h(A &ptr)      //here destructor of type A will run
//{
//	ptr.f();
//
//}
//int main()
//{
//	//A*ptr = new C;//
//	C a;
//	h(a);
//}






//class A
//{
//public:
//	int i;
//	int j;
//
//
//virtual	void f()
//	{
//		cout << "A::f()";
//	}
//	A()
//	{
//		cout << "\nA:: Cons";
//	}
//	~A()
//	{
//		cout << "A::Destructor";
//	}
//
//};
//class B :public A
//{
//public:
//	double i;
//	char x;
//	void f()
//	{
//		cout << "B::f()";
//	}
//	B()
//	{
//		cout << "\nB:: Cons";
//	}
//	~B()
//	{
//		cout << "B::Destructor";
//	}
//};
//class C :public B
//{
//public:
//	int i;
//	void f()
//	{
//		cout << "\nC::f()";
//	}
//	C()
//	{
//		cout << "\n C::Cons";
//	}
//	~C()
//	{
//		cout << "C::Destructor";
//	}
//};
//
//
//void h(A*ptr)
//{
//	ptr->f();
//}
//int main()
//{
//	cout<<sizeof(C);
//	
//	/*
//	A*ptr = new C;
//	C a;
//	h(&a);
//	A*ptr1 = &a;
//	ptr1->f();*/
//}


//class A
//{
//public:
//	int i = 1;	void f()
//	{
//		cout << i<<"a::f()";
//	}
//};
//class B
//{
//public:
//	int i = 2;
//	virtual void f()
//	{
//		cout << i;
//	}
//};
//class C:public B,public A
//{
//public:
//	int k = 0;
//	int i = 8;
//	void f()
//	{
//		cout << "\n hello"<<i;
//	}
//};
//int main()
//{
//	C c;
//	c.i;//f is ambiguos 
//	A *ptr = new C;
//	ptr->i = 33;
//	cout<<ptr->A::i;
//	B b;
//	b.i = 99;
////	cout<<b.i;
//
//	ptr->f();
//
//}


//class A
//{
//public:
//	int i = 1;
//	virtual	void f()
//	{
//		cout << i;
//	}
//	virtual void h()
//	{
//
//	}
//};
//class B
//{
//public:
//	double i = 2;
//virtual	 void f()
//	{
//		cout << i;
//	}
//};
//class C :public B, public A
//{
//public:
//	int k = 0;
//	int i = 8;
//	int x;
//virtual	void f()
//	{
//		cout << "\n hello" << i;
//	}
//};
//int main()
//{
//	cout<<sizeof(C);
//
//}



//class A
//{
//public:
//	int i = 1;
//	virtual	void f() = 0;
//	
//};
//class B: private A
//{
//public:
//	int i = 2;
//	 void f()
//	{
//		cout << i;
//	}
//};
//class C :public B
//{
//public:
//	int k = 0;
//	int i = 8;
//	/*void f()
//	{
//		cout << "\n hello" << i;
//	}*/
//};
//int main()
//{
//B*ptr = new C;//ok with new C as f() is defined in C ,but not okay with B since B's f() not defined
//	ptr->f();
//	//	B b;//error f() not defined
//	C c;//no error since b has f(),if b does not not defines f() then error
//	c.f();
//}


//class A
//{
//public:
//	int i = 1;
//	virtual	void f() = 0;
//
//};
//class B : public A
//{
//public:
//	int i = 2;
//	 void f()
//	{
//	cout << i;
//	}
//};
//class C :public B
//{
//public:
//	int k = 0;
//	int i = 8;
//	/*void f()
//	{
//		cout << "\n hello" << i;
//	}*/
//};
//int main()
//{
//	B b;
//	C c;//no error since c has f() in form of inherited B,if B does not not defines f() then error
//	c.f();
//}


//class A
//{
//public:
//	int i = 1;
//	virtual	void f() = 0;
//
//};
//class B 
//{
//public:
//	int i = 2;
//	virtual void f() = 0;
//	
//};
//class C :public B,public A
//{
//public:
//	int k = 0;
//	int i = 8;
//	void f()
//	{
//	cout << "\n hello" << i;
//	}
//};
//int main()
//{
//	cout << sizeof(C);
//	C c;
//	c.i = 99;
//	c.f();
//	A *ptr  = new C;
//	ptr->f();
//
//}

//////////////////////////////////////////////////////FILE-HANDLING/////////////////////////////////////////////////////////////

#include<fstream>
//int main()
//{
//	ifstream fin;
//	fin.open("file1.txt");
//	if (fin.fail())
//	{
//		cout << "\n File not opened";
//	}
//
//	int i;
//	fin >> i;
//	
//	while (!fin.eof())
//	{
//		cout << i;
//		fin>>i;
//	}
//	fin.close();
//
//	/*while (!fin.eof())
//	{
//		fin >> i;
//		cout << i;
//	}*/
//	//cout << "\ncounter:" << sum;
//}




//#include<fstream>
//int main()
//{
//	ifstream o;
//	o.open("file1.txt");
//	if (o.fail())
//	{
//		cout << "\n File not opened";
//	}
//	char ch;
//	int c = 0;
////	while (o.get(ch))// && ch!='5')
//	while (o>>ch)
//	{
//		cout << ch;
//		c++;
//	}
//	cout << "\ncounter:" << c;
//}

#include<string>
//int main()
//{
//	ifstream o;
//	o.open("file1.txt");
//	if (o.fail())
//	{
//		cout << "\n File not opened";
//	}
//	char ch;
//	int c = 0;
//
//	/*o >> ch;
//	while (!o.eof())
//	{
//		cout << ch;
//		o >> ch;
//		c++;
//	}*/
//	
//	while (!o.eof())
//	{
//
//		o >> ch;
//		cout << ch;
//		
//		c++;
//	}
//	cout << "\ncounter:" << c;
//}


#include<fstream>
//int main()
//{
//	ofstream o;
//	o.open("file1.txt");
//	if (o.fail())
//	{
//		cout << "\n File not opened";
//	}
//	else
//	{
//		o << 12 ;
//		o << "Bilal Ali";
//		o << "\n";
//		o << " hello bilal";
//	}
//	o.close();
//	ifstream i;
//	i.open("file1.txt");
//	char name[50];//cin.getline(name,10) will input 9 charachters
//	i.getline(name,5);  //check by varying getline and i>>
//	cout << name;
//	i >> name;
//	cout << name;
//
//}



#include<fstream>
//int main()
//{
//	fstream o;
//	o.open("file1.txt",ios::out|ios::in);
//	if (o.fail())
//	{
//		cout << "\n File not opened";
//	}
//	else
//	{
//		o << "Bilal Ali";
//		o << "\n";
//		o << "Asim Ali Ali";
//		o << "\n";
//		o << "riba Ali";
//		o << "\n";
//	}
//	char h;
//o.close();
////	ifstream i;
//	o.open("file1.txt");
//	char name[100];
//	o >> h;
//while(!o.eof())
//	{
//	
//	cout << h;
//	o >> h;
//	
//	}
////while (o.get(h))
////{
////	cout << h;
////
////}
//	return 0;
//}


#include<fstream>
//int main()
//{
//	ofstream o;
//	o.open("file1.txt",ios::ate|ios::in);//no loss of data but new data is entered before old text not after 
//	cout << o.tellp()<<" ";
//	if (o.fail())
//	{
//		cout << "\n File not opened";
//	}
//	else
//	{
//		o << 12;
//		o << 15;
//		o << " ";
//		o << 17;
//		o << 99;
//		o << 17;
//		o << 99;
//
//	}
//	o.close();
//	ifstream i;
//	i.open("file1.txt");
////	char s[4];//  in this case stack overflow 
//	int s; char c;
//	i >> s;
//	i >> c;
//	cout << s<<"  "<<c;
//
//}



#include<fstream>
//int main()
//{
//	ofstream o;
//	o.open("file1.txt",ios::app);
//	/*if (o.fail())
//	{
//		cout << "\n File not opened";
//	}
//	else
//	{
//		o << 1;
//		o << " ";
//		o << 2;
//		o << " ";
//		o << 3;
//		o << " ";
//		o << 4;
//
//	}*/
////	o.close();
//	/*ifstream i;
//	int sum=0;
//	int s;
//	i.open("file1.txt");
//	while (!i.eof())
//	{
//		i >> s;
//		cout << s;
//	}
//	cout << sum;
//*/
//	ifstream i;
//	int sum = 0;
//	int s;
//	i.open("file1.txt");//this method does not in include last digit ,up one is right
//	i >> s;
//	while (!i.eof())
//	{
//		
//		cout << s;
//		i >> s;
//	}
//	cout << sum;
//
//}

#include<fstream>
//int main()
//{
//	fstream o;
//	int z;
//	o.open("file1.txt",ios::out);
////	o << 12;
////	o >> z;
////	o << 32;                         //we can  input from file and output in file at same time,but input will be garbage but does not gives any error
//	o << "Bilal\n Ali";
////	cout << "z: "<<z<<"\n";
//	o.close();      //even if offstream we need to close and reopen file 
//	int  s;
//o.open("file1.txt");
//	if (o.fail())
//	{
//		cout << "\n File not opened";
//	}
//	else
//	{
//	
//		/*while(o >> s)
//		{
//			
//			cout << s;
//			
//
//		}*/
//		o >> s;
//		cout << s;
//		
//	}
//	
//}


//int main()
//{
//	fstream o;
//	int z;
//	o.open("file1.txt", ios::out |ios::in|ios::app);  //when we do ios ::in also we dont lose last data but it writes from start not after old text
//	cout << o.tellg();
//	cout << o.tellp();
//	o << 'S';
//	cout << o.tellp();
//	//int i;
//	//i = 'b';
//	//cout << i;
//	//char c;
//	//c = 97;
//	//cout << c;
//	//o.close();
//	//int  s;
//	//o.open("file1.txt");
//	//if (o.fail())
//	//{
//	//	cout << "\n File not opened";
//	//}
//	//else
//	//{
//
//	//	
//	//		o >> s;
//	//		cout << s;
//
//
//	//	}
//
//	}

//int main()
//{
//	fstream f("file.txt ", ios::out| ios::binary|ios::in);
//
//	cout << f.tellp();
//	////	f << 15;
////	
////	int z =65;//since on console in ASCII thus A
////	f.write((char*)&z, 4);//if size is 3 than picks first 3 bytes whereas 65 is at byte 4
////	
////	f.close();
//
//	char  x;
//	//f.open("file.txt",ios::in);
//	if (f.fail())
//	{
//		cout << "\n Failed";
//	}
//	//else
//	{
//		f.read((char*)&x, 1);
//		cout << x;
//	}
//	/*char h;
//	f.read((char*)&h, 1);
//	cout << h;*/
//}


//int main()
//{
//	fstream f("file.txt ", ios::out | ios::binary );
//	char array[] = "abcd";
//	f.write(array, sizeof(array));
//	cout << sizeof(array);
//	cout << f.tellp();
//	f.close();
//	f.open("file.txt");
//
//	char a[5];
//	f.read((char*)a, sizeof(a));
//	
//	for (int i = 0; i < sizeof(a); i++)
//	{
//	
//		cout << a[i];
//	}
//}



//int main()
//{
//	fstream f("file.txt ", ios::out | ios::binary | ios::in );
//	int  array[10] = {1,2,3,4,5,6,7,8,9,0};
//	f.write((char*)&array, 40);
//	
//	f.close();
//	f.open("file.txt");
//
//	int a[10];
//	f.read((char*)a, sizeof(a)-20);
////	cout << (*array);
//
////	cout << sizeof(array);
//
//	for (int i = 0; i < 10; i++)
//	{
//
//		cout << a[i];
//	}
//}



//int main()
//{
//	fstream f("file.txt ", ios::out | ios::binary | ios::in);
//	char array[] = "abcdefgh";
//	f.write((char*)array, sizeof(array));
////	cout << sizeof(array);
//	f.close();
//	f.open("file.txt");
//
//	char a[9];
//	f.read((char*)a, 9);  //since size of 5 to input    
//	
//	for (int i = 0; i < sizeof(a); i++)
//	{
//	
//		cout << a[i];
//	}
//}

//class A
//{
//public:
//	int a=99;
//	int b=100;
//};
//int main()
//{
//	A obj,o1;
//	fstream f("file.txt ", ios::out | ios::binary|ios::in);
//	f.write((char*)&obj, sizeof(obj));
//	f.close();
//	
//	f.read((char*)&o1, sizeof(o1));
//	cout << o1.a << o1.b;
//	o1.a = 97;
//	o1.b = 98;
//	f.seekp(0);
//	f.write((char*)&obj, sizeof(obj));
//	/*int a1;
//	f.open("file.txt ");
//	f.read((char*)&a1, sizeof(a1));
//	cout << a1;*/
//
//	
//}


//int main()
//{
//	int i = 110;
//	fstream f("file.txt ", ios::out | ios::binary | ios::in);
//	f.write((char*)&i, sizeof(i));
//	f.close();
//	int x;
//	f.open("file.txt", ios::in);
//	f.read((char*)&x, 4);
//	cout << x;
//}


//int main()
//{
//	int i = 120;
//	char t = 'a';
//	fstream f("file.txt ", ios::out | ios::binary );
//	f.write((char*)&i, sizeof(i));
//	f.write((char*)&t, sizeof(t));
//	f.close();
//	int x; char z;
//	f.open("file.txt", ios::in);
//	if (!f)
//		cout << "failed";
//	f.read((char*)&x, 4);
//	cout << x << "\n";
//	f.read((char*)&z, sizeof(z));
//	cout << z;
//	//f.read((char*)&x, 2);
//	//cout << x<<"\n";
//	//f.read((char*)&z, 4);//now 4 bytes contain 2 end bytes of 120 and two starting bytes of 8 thus 5248428 is answer
//	//cout << z;
//}


//int main()
//{
//	
//	char arr[5]{ 'a','b','c','d','e' };
//	cout << sizeof(arr);
//	fstream f("file.txt", ios::out | ios::binary);
//	f.write(arr, 5);//we cant use size of arr as it is pointer and will always be of ssize 4,we can use size off arr if it was on stack instead of heap
//	f.close();
//	f.open("file.txt", ios::binary|ios::in);
//	if (f.fail())
//	{
//		cout << "\n File not opened";
//	}
//	char *a=new char[5];
//	f.read(a, 5);
//	for (int i = 0; i < 5; i++)
//	{
//		cout<<a[i];
//	}
//	
//}


//int main()
//{
//	fstream f("file.txt", ios::in);
//	if (f.fail())
//		cout << "\n failed";
//	//f.seekg(3, ios::beg);
//	f.seekg(-3, ios::end);
//	cout << " \t" << f.tellg();
//	char c;
//	f.read((char*)&c, sizeof(c));//in file abcde
//	cout << c;
//	cout<<" \t"<<f.tellg();
//	f.close();
//	
//	
//
//
//}


//int main()
//{
//	fstream f;
//	f.open("file.txt", ios::out|ios::in);
//
//	cout << " \t" << f.tellp();
//	f.seekp(3);
//	cout << " \t" << f.tellp();
//	f.seekp(3,ios::cur);
//	f << "bilal";
//	cout << " \t" << f.tellp();
//f.close();
//}



//int main()
//{
//	fstream f;
//	f.open("file.txt", ios::in | ios::app|ios ::binary);
//
//	cout << " \t" << f.tellp();
//	f.seekg(-4,ios::end);
//	cout << " \t" << f.tellp();
//
//	char name[4];
//	f.read((char*)&name, 4);
//	cout << " \t" << f.tellp();
//	cout << name;
//
//	f.close();
//}


//int main()
//{
//	ofstream o("file.txt",ios::out|ios::binary);
//cout<<	o.tellp();
//o << "bilal is awesome";
//	o.seekp(-6, ios::end);
//
//	o << "hello";
//	cout << o.tellp();
//	o.close();
//}


//int main()
//{
//	ofstream file("bilal.txt", ios::out);//when append mode than from the end no matter beginning or end
//	if (file.fail())
//	{
//		cout << "\n File not Opened";
//	}
//	else
//	{
//		cout <<"\n"<< file.tellp();
//		file << "Bilal Rocks";
//		cout << "\n" << file.tellp();
//		file.seekp(5,ios::end);
//		cout << file.tellp();
//		file << "and he is awesome";
//		cout << "\n" << file.tellp();
//	}
//}


//int main()
//{
//	ofstream o("bilal.txt");
//	if (o.fail())
//	{
//		cout << "Failed";
//	}
//	else
//	{
//		o << "bilal is awesome";
//		o.seekp(5);
//		o << "is not";//bilal is notsome
//		o.close();
//	}
//}
//
//int main()
//{
//	fstream f("file1.txt",  ios::out|ios::ate);//,in case of ios::ate without ios:in from beginning see tell p() in case of ate and in ios::cur will write from end,in case of ios::in cur will give from beginnin g
//	cout << f.tellp();// if ios::in 0//if ios::ate and ios::in than points at end
//	//cout << f.tellg();
//
//	
//	f.seekp(10,ios::cur);
//	f << "hello";
//	cout << f.tellp();//15
//}


//int main()
//{
//	fstream f("file2.txt", ios::out|ios::ate|ios::in);//this will not create a file with ios::in
//	if (f.fail())
//		cout << "\n File not opened";
//	cout << f.tellp();// if ios::in 0//if ios::ate + ios::inthan points at end
//	f.seekp(-5,ios::cur);
//	f << "riba";
//	cout << f.tellp();//15
//}


//int main()
//{
//	fstream f;
////	f.open("file2.txt", ios::out | ios::ate);//this will lose old data
//	f.open("file1.txt", ios::out | ios::in);
//	if (f.fail())
//	cout << "failed";
//	cout << f.tellp();
//	f.seekp(10,ios::cur);       //spaces also count 
//	f << "/";
//	cout << f.tellp();
//	f.seekp(5, ios::cur);
//	f << "/";
//	cout << f.tellp();
//	f.seekp(-3, ios::end);
//	f << "/";
//	cout << f.tellp();
//	f.close();
//}


//int main()
//{
//	fstream f("file2.txt",ios::out | ios::ate|ios::in);
//	f.seekp(2,ios::cur);
//	cout << f.tellp();
////	cout << f.tellg();
//	int x;
//	int g= 76;
//	f >> x;
//	cout << x;
////	cout << f.tellp();
//
////	ofstream f("file2.txt", ios::out | ios::in);
//	
//
//
////	cout << f.tellp();
//
//	
//
//		f.seekp(-10, ios::cur); 
////	cout << f.tellp();
//	f << g;
//	fstream of("file2.txt", ios::out | ios::in);
//	of.seekp(2);//f.seekp not possible with ifstream
//	of << "88";
//}



//int main()
//{
//	fstream f("file.txt", ios::in);
//	char s;
//	int c=0;
//	while (!(f.eof()))
//	{
//		c++;
//		f.get( s);
//		cout << s;
//		
//		//if there exists space after 40 and before <eof> than inputs space and repeats last value i.e 40
//	}
//	cout << c;
//}


//int main()
//{
//	ifstream f("file.txt");
//	int s,sum=0;
//	//f >> s;
//	
//	//while (!(f.eof()))
//	//{
//	//	cout << s;
//	//	sum = sum + s;
//	//	f >> s;
//	//	//if there exists space after 40 and before <eof> than inputs space and sums correctly if exists space in this case else wrong
//	//}
////	cout << sum;
//
//
//	while (!(f.eof()))
//	{
//		
//		f >> s;
//		sum = sum + s;
//		cout << s;
//		//if there exists space after 40 and before <eof> than inputs space and sums correctly if exists space in this case else wrong
//	}
//	//cout << sum;
//}

//class A
//{
//public:
//	char name[30];
//	int roll;
//	int marks[5];
//};
//int main()
//{
//	fstream f("fileA.txt",  ios::out|ios::in);
//	if (f.fail())
//	cout << "\n failed";
//	A a[5] = {"a",12,1,2,3,4,5,"b",2,1,2,3,4,5,"c",3,1,2,3,4,5,"d",4,1,2,3,4,5,"e",5,1,2,3,4,5};
//	A temp;
//	int n = 65;
////	cout << sizeof(a);
//	f.write((char*)&a, sizeof(a));
//	f.seekp(2 * (sizeof(A)) + (sizeof(a[0].name)));
//	f.write((char*)&n, sizeof(n));
//	f.close();
//
//	f.open("fileA.txt",  ios::in);
//	if (f.fail())
//		cout << "\n failed";
//	f.seekg(2 * (sizeof(A)), ios::beg);
//	f.read((char*)&temp, sizeof(A));
//	cout << temp.roll;
//
//}



//int main()
//{
//	fstream f;
//	f.open("file.txt", ios::out|ios::in);//this will not lose old data
//	cout << f.tellp();
//	if (f.fail())
//	cout << "failed";
//	
//	f.seekp(4,ios::cur);  //spaces also count 
//	cout << f.tellp();
//	f << "ssss";
//	f.close();
//}


//int main()
//{
//	fstream f;
//	f.open("file2.txt", ios::out |  ios::in);//this will lose old data
//	cout << f.tellp();
//	if (f.fail())
//		cout << "failed";
//
//	f.seekp(3, ios::cur);  //spaces also count 
//	cout << f.tellp();
//	f << "hash";
//	f.close();
//}


//class A
//{
//public:
//	char name[30];
//	int roll;
//	int marks[5];
//};
//int main()
//{
//	fstream f("fileA.txt", ios::out | ios::in);
//	if (f.fail())
//		cout << "\n failed";
//	A a[5] = { "bilal",12,1,2,3,4,5,"fasiha",2,1,2,3,4,5,"hariss",3,1,2,3,4,5,"hamza",4,1,2,3,4,5,"hasham",5,1,2,3,4,5 };
//	
//
//	
//	f.write((char*)&a, sizeof(a));
//	
//	f.close();
//
//
//	fstream of("fileA.txt", ios::out | ios::in|ios::binary);
//	A temp;
//	
//	if (of.fail())
//		cout << "\n failed";
//	of.seekg(2 * (sizeof(A)), ios::beg);
//	of.read((char*)&temp, sizeof(A));
//	cout << temp.roll;
//	//strcpy_s(temp.name, "hello");
//	temp.roll = 65;
//	of.close();
//	of.open("fileA.txt", ios::out | ios::in | ios::binary);
//	of.seekp(2 * (sizeof(A)));
//	of.write((char*)&temp, sizeof(temp));
//	
//	cout << temp.roll;
//
//}


//int main()
//{
//	fstream f;
//	
//
//	f.open("file1.txt", ios::out );//this will lose old data
//	cout << f.tellp();
//	if (f.fail())
//	cout << "failed";
//	
//f.seekp(10,ios::cur);  //spaces also count 
//	cout << f.tellp();
//	f << "ulu";
//	cout << f.tellp();
//	f << "bilal";
//	f.close();
//}



//////////////////////////////////////////////TEMPLATES////////////////////////////////////////////////////////////////


//template <class T>
//T giveLarger(T a, T b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int a = 12;
//	int b=13;
//	double c = 32.3;
//cout<<	giveLarger(a,c);//gives error
//}

//
//template <class T, class C>
//C giveLarger(T a, C b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int a = 12;
//	int b = 13;
//	double c = 32.3;
//	cout << giveLarger<int,int>(14.9,'a');
//}


//template <class T>
//class MyArray;
//template <class T>
//ostream& operator<<(ostream &str, MyArray<T> &ref)
//{
//	cout << "\n[";
//	for (int i = 0; i < ref.capacity; i++)
//	{
//		cout << ref.data[i] << " ";
//	}
//	cout << "]\n";
//	return str;
//}
//template <class T>
//istream& operator>>(istream &str, MyArray<T> &ref)
//{
//	cout << "\n[";
//	for (int i = 0; i < ref.capacity; i++)
//	{
//		str >> ref.data[i];
//	}
//	cout << "]\n";
//	return str;
//}
//template<class T>
//class MyArray
//{
//private:
//	int capacity;
//
//	T *data;
//public:
////	friend ostream& operator<<(ostream & str, MyArray & ref);
////	friend istream& operator>>(istream & str, MyArray & ref);
//	MyArray(int c=0)
//	{
//
//		capacity = c;
//		data = new T[capacity];
//		int noOfElements = 0;
//
//	}
//	MyArray(const MyArray<T> & ref)
//	{
//		this->capacity = ref.capacity;
//		this->data = new T[capacity];
//		for (int i = 0; i < capacity; i++)
//		{
//			this->data[i] = ref.data[i];
//		}
//
//	}
//
//	T & operator[](int i)
//	{
//		return data[i];
//	}
//	
//	void display()
//	{
//		cout << "\n[";
//		for (int i = 0; i < capacity; i++)
//		{
//			cout << data[i] << " ";
//		}
//		cout << "]\n";
//	}
//
//	~MyArray()
//	{
//		delete[]data;
//		data = 0;
//	}
//
//	MyArray<T> & operator=(const MyArray<T> & ref)
//	{
//		this->~MyArray();
//		this->capacity = ref.capacity;
//		this->data = new T[capacity];
//		for (int i = 0; i < capacity; i++)
//		{
//			this->data[i] = ref.data[i];
//		}
//		return (*this);
//	}
//
//	MyArray<T> operator+(const MyArray<T> & ref)
//	{
//		MyArray<T> temp;
//		for (int i = 0; i < capacity; i++)
//		{
//			temp.data[i] = data[i] + ref.data[i];
//		}
//		return temp;
//	}
//
//	void operator+=(const MyArray<T> & ref)
//	{
//		for (int i = 0; i < capacity; i++)
//		{
//			data[i] = data[i] + ref.data[i];
//		}
//	}
//};
//
//
//int main()
//{
//	MyArray<char> a(5);
////	cin >> a;
//	a[0] = 65;
//	a[1] = 99;
//	a[2] = 72;
//	a[3] = 99;
//	a[4] = 98;
////	cout << a;
//	a.display();
//}



//template <class T, class C>
//C giveLarger(T a, C b)
//{
//	cout << "\nTemplate Function";
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//template<>
//double giveLarger(double a, double b)//first preference
//{
//	cout << "\n Function";
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int a = 12;
//	int b = 13;
//	double c = 32.3;
//	cout << giveLarger(2.3,a);//gives error
//}



//template <class T,class C>
//T giveLarger(T a, C b)
//{
//	cout << "\nTemplate Function";
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int giveLarger(int a, char b)//first preference is always this one
//{
//	cout << "\nchar Function";
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int giveLarger(int a, double b)//first preference is always this one
//{
//	cout << "\nDouble Function";
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int a = 12;
//	int b = 13;
//	char c = 'a';
//	cout << giveLarger('a',12);//gives error
//}

//#include<string>
//template <class T>
//T divide(T num, T den)
//{
//	if (den == 0)
//	{
//		string s = " Divided by zero";
//		throw s;
//		throw "Error Divided by zero";
//		//throw 0;
//	}
//	else 
//		return num / den;
//}
//int main()
//{
//	try
//	{
//		cout << divide(12, 2);//if this one creates exception than next line does not get printed
//		cout << divide(10, 0);//try block contains only exception possible functions or functions which are related to such functions
//
//		cout << "\n Inside try Block";
//	}
//	catch (string s)
//	{
//		cout << s;
//	}
//	catch (char *s)
//	{
//		cout << s;
//	}
//	catch (int s)
//	{
//		cout << s;
//	}
//	cout << "\n End of program";
//}



//#include<string>
//template <class T>
//class rectangle
//{
//public:
//	T length;
//	T width;
//	void setLength(T l)
//	{
//		if (l < 0)
//		{
//			throw "Negative value entered in length";
//		}
//		else
//		length = l;
//	}
//	void setWidth(T w)
//	{
//		if (w < 0)
//		{
//			throw "Negative value entered in width";
//		}
//		else
//		width = w;
//	}
//
//};
//int main()
//{
//	rectangle<double> r;
//	try
//	{
//		r.setLength(8.9);
//		r.setWidth(3);
//		cout << "\n Inside try Block";
//	}
//	catch (string s)
//	{
//		cout << s;
//		cout << "\tstring";
//	}
//	catch (char *s)
//	{
//		cout << s;
//		cout << "\tchar*";
//	}
//	catch (int s)
//	{
//		cout << s;
//	}
//	cout << "\n End of program";
//}



//#include<string>
//template <class T>
//class rectangle
//{
//public:
//	T length;
//	T width;
//	void setLength(T l)
//	{
//		if (l < 0)
//		{
//			throw "Negative value entered in length";
//		}
//		else
//			length = l;
//	}
//	void setWidth(T w)
//	{
//		if (w < 0)
//		{
//			throw "Negative value entered in width";
//		}
//		else
//			width = w;
//	}
//
//};
//int main()
//{
//	rectangle<double> r;
//	try
//	{
//		cout << "\n Inside try Block-1";
//		r.setLength(-2.9);
//		
//		
//	}
//	catch (string s)
//	{
//		cout << s;
//	}
//	catch (char *s)
//	{
//		cout << s;
//	}
//	catch (int s)
//	{
//		cout << s;
//	}
//	try
//	{
//		
//		r.setWidth(-3);
//		cout << "\n Inside try Block-2";
//	}
//	catch (string s)
//	{
//		cout << s;
//	}
//	catch (char *s)
//	{
//		cout << s;
//	}
//	catch (int s)
//	{
//		cout << s;
//	}
//	cout << "\n End of program";
//}


//#include<string>
//template <class T>
//class rectangle
//{
//public:
//	T length;
//	T width;
//	void setLength(T l)
//	{
//		if (l < 0)
//		{
//			throw l;
//		}
//		else
//		length = l;
//	}
//	void setWidth(T w)
//	{
//		if (w < 0)
//		{
//			throw w;
//		}
//		else
//		width = w;
//	}
//
//};
//int main()
//{
//	rectangle<double> r;
//	try
//	{
//		r.setLength(-2.9);
//		r.setWidth(-3);
//		cout << "\n Inside try Block";
//	}
//	catch (string s)
//	{
//		cout << s;
//	}
//	catch (char *s)
//	{
//		cout << s;
//	}
//	catch (double s)
//	{
//		cout << s;
//	}
//	cout << "\n End of program";
//}



//#include<string>
//class s
//{
//public:
//	double x;
//	s()
//	{
//		this->x = 99;
//	}
//	s(double x)
//	{
//		this->x = x;
//	}
//};
//template <class T>
//class rectangle
//{
//public:
//	T length;
//	T width;
//	
//	void setLength(T l)
//	{
//		if (l < 0)
//		{
//			throw s(l);
//		}
//		else
//		length = l;
//	}
//	void setWidth(T w)
//	{
//		if (w < 0)
//		{
//			throw "Negative value entered in width";
//		}
//		else
//		width = w;
//	}
//
//};
//int main()
//{
//	rectangle<double> r;
//	try
//	{
//		r.setLength(-2.9);
//		r.setWidth(3);
//		cout << "\n Inside try Block";
//	}
//	catch (string s)
//	{
//		cout << s;
//	}
//	catch (char *s)
//	{
//		cout << s;
//	}
//	catch (s o)
//	{
//		cout << o.x;
//	}
//	cout << "\n End of program";
//}



//#include<string>
//class s
//{
//public:
//	int x;
//	s(int x)
//	{
//		this->x = x;
//	}
//};
//template <class T>
//class rectangle
//{
//public:
//	T length;
//	T width;
//
//	void setLength(T l)
//	{
//		if (l < 0)
//		{
//			throw exception("Error Length");
//		}
//		else
//			length = l;
//	}
//	void setWidth(T w)
//	{
//		if (w < 0)
//		{
//			throw exception("Error Width");
//		}
//		else
//			width = w;
//	}
//
//};
//int main()
//{
//	rectangle<double> r;
//	try
//	{
//		r.setLength(-2.9);
//		r.setWidth(-3);
//		cout << "\n Inside try Block";
//	}
//	catch (string s)
//	{
//		cout << s;
//	}
//	catch (char *s)
//	{
//		cout << s;
//	}
//	catch (exception o)
//	{
//		cout << o.what();
//	}
//	cout << "\n End of program";
//}


//class Test
//{
//	int i;
//public:
//	Test(int i)
//	{
//		cout << "\n cons";
//	}
//	Test& operator=(const int i)
//	{
//		cout << "\n operator=";
//		return *this;
//	}
//	Test& operator=(Test & ref)
//	{
//		cout << "\n Test operator=";
//		return ref;
//	}
//	~Test()
//	{
//		cout << "\n dest";
//	}
//};
//int main()
//{
//	Test t1(2), t2(2);
//	t1 = (Test)13;
//}

//template <typename T,typename C>
//auto larger(T a, C b)
//{
//	/*if (a > b)
//		return a;
//	else */
//		return b*a;
//}
//int main()
//{
//	cout << larger(12, 'z')<<" \n";
//	cout<<typeid(larger(12, 'z')).name();
//}
#include<iostream>
using namespace std;
//struct hello
//{
//	int data[7];
//	double*p;
//	int  ch;
//	double  d;
//	char i;
//};
//int main()
//{
//	
//	hello h;
//	
//	cout<<sizeof(h);
//}


//class hello
//{
//public:
//	int i;
//	int b;
//	void seti(int i)
//	{
//		this->i = i;
//	}
//	hello(hello & ref)
//	{
//		cout << "\n copy constructor";
//	}
//	hello()
//	{
//		cout << "\n constructor";
//	}
//	~hello()
//	{
//		cout << "\n Destructor";
//	}
//};
//int main()
//{
//	hello h;
//	hello *ptr=&h;
//
//	ptr->i = 23;
//	cout << h.i;
//	delete ptr;
//	ptr = 0;
//	//cout<<h.i;
//	cout << "\nhere";
//}



//class hello
//{
//public:
//	int i;
//	int b;
//	void seti(int i)
//	{
//		this->i = i;
//	}
//	hello()
//	{
//		cout << "\n constructor";
//	}
//	~hello()
//	{
//		cout << "\n destructor";
//	}
//};
//int main()
//{
//	hello h;
//	hello *ptr;
//	ptr = &h;
//	ptr->i = 23;
//	cout << h.i;
//	delete ptr;
//	ptr = 0;
////	cout << h.i;
//}



//class hello
//{
//public:
//	int i;
//	int b;
//	void seti(int i)
//	{
//		this->i = i;
//	}
//	hello()
//	{
//		cout << "\n constructor";
//	}
//	~hello()
//	{
//		cout << "\n destructor";
//	}
//};
//int main()
//{
//	
//	hello *ptr;
//	ptr = new hello[3];
//	ptr[0].i = 23;
////	cout << ptr[0].i;
//	delete ptr;
//	ptr = 0;
////	cout << h.i;
//}


//class hello
//{
//public:
//	int i;
//	int b;
//	hello (int i)
//	{
//		this->b = i;
//		cout << "\n sinle para";
//	}
//	hello()
//	{
//		cout << "\n constructor";
//	}
//	hello(int i,int b)
//	{
//		this->i = i;
//		this->b = b;//  doing b=b will give no error but b will contain garabage
//		cout << "\n  parameterized constructor";
//	}
//	~hello()
//	{
//		cout << "\n destructor";
//	}
//};
//int main()
//{
//	//hello h;
//	hello *ptr;
//	
//	ptr = new hello[3]  { hello(13,2),(12,13) };//1)cons  2)para 3)para 4)cons
//	
//	ptr = 0;
//	cout << ptr[1].b;
//	// ptr[0].~hello();
////	delete ptr;
//}



//class hello
//{
//public:
//	int i;
//	int b;
//	void seti(int i)
//	{
//		this->i = i;
//	}
//	hello()
//	{
//		cout << "\n constructor";
//	}
//	hello(int i, int b)
//	{
//		this->i = i;
//		this->b = b;//  doing b=b will give no error but b will contain garabage
//		cout << "\n  parameterized constructor";
//	}
//	hello(int i)
//	{
//		this->i = i;
//		this->b = 2;//  doing b=b will give no error but b will contain garabage
//		cout << "\n 1- parameterized constructor";
//	}
//	~hello()
//	{
//		cout << "\n destructor";
//	}
//};
//int main()
//{
////	hello h;
//	hello *ptr = new hello[3]{ hello(13,2),hello(13) };//1-parameterized is ambiguous
//
//	
//	cout << ptr[1].b;
//	delete ptr;
//}


//class hello
//{
//public:
//	int i;
//	int b;
//	void seti(int i)
//	{
//		this->i = i;
//	}
//	hello()
//	{
//		cout << "\n constructor";
//	}
//	hello(int i, int b)
//	{
//		this->i = i;
//		this->b = b;//  doing b=b will give no error but b will contain garabage
//		cout << "\n  parameterized constructor";
//	}
//	hello(int i)
//	{
//		this->i = i;
//		this->b = 2;//  doing b=b will give no error but b will contain garabage
//		cout << "\n 1- parameterized constructor";
//	}
//};
//int main()
//{
//	hello h(2);
//	hello *ptr;
//
//	ptr = new hello[3]{ hello(13,2),hello(13) };
//	cout << ptr[1].b;
//}



//class hello
//{
//public:
//	int i;
//	int b;
//	void seti(int i)
//	{
//		this->i = i;
//	}
//	//hello()
//	//{
//	//	cout << "\n constructor";
//	//}
//	hello(int i, int b=0)
//	{
//		this->i = i;
//		this->b = b;//  doing b=b will give no error but b will contain garabage
//		cout << "\n  parameterized constructor";
//	}
//	~hello()
//	{
//		cout << "\n destructor";
//	}
//	hello(int i)
//	{
//		this->i = i;
//		this->b = 2;//  doing b=b will give no error but b will contain garabage
//		cout << "\n 1- parameterized constructor";
//	}
//};
//int main()
//{
//	//hello h;
//	hello *ptr;
//
//	ptr = new hello[3]{ hello(13,2),(13,23) };
//	cout << ptr[1].i;
//}



//class hello
//{
//public:
//	int i;
//	int b;
//	void seti(int i)
//	{
//		this->i = i;
//	}
//	hello()
//	{
//		cout << "\n constructor";
//	}
//	hello(int i, int b)
//	{
//		this->i = i;
//		this->b = b;//  doing b=b will give no error but b will contain garabage
//		cout << "\n  parameterized constructor";
//	}
//	hello(int i)
//	{
//		this->i = i; 
//		this->b = 2;//  doing b=b will give no error but b will contain garabage
//		cout << "\n 1- parameterized constructor";
//	}
//	~hello()
//	{
//		cout << "\n destructor";
//	}
//};
//int main()
//{
//	hello h[4] = {1,2,(12,31)};   
//	cout << h[2].i;     // i will contain 31 as in arguements or function from left to right
//	
//}



//class hello
//{
//public:
//	int i;
//	int b;
//	void seti(int i)
//	{
//		this->i = i;
//	}
//	hello()
//	{
//		cout << "\n constructor";
//	}
//	hello(int i, int b)
//	{
//		this->i = i;
//		this->b = b;//  doing b=b will give no error but b will contain garabage
//		cout << "\n  parameterized constructor";
//	}
//	hello(int i)
//	{
//		this->i = i;
//		this->b = 2;//  doing b=b will give no error but b will contain garabage
//		cout << "\n 1- parameterized constructor";
//	}
//	~hello()
//	{
//		cout << "\n destructor";
//	}
//};
//int main()
//{
//	hello h[] = { 1,(2,41),hello(12,31) };
//	cout << h[2].i;     
//
//}

//class hello
//{
//public:
//	int i;
//	int b;
//	void seti(int i)
//	{
//		this->i = i;
//	}
//	hello()
//	{
//		cout << "\n constructor";
//	}
//	hello(int i, int b)
//	{
//		this->i = i;
//		this->b = b;//  doing b=b will give no error but b will contain garabage
//		cout << "\n  parameterized constructor";
//	}
//	hello(int i)
//	{
//		this->i = i;
//		this->b = 2;//  doing b=b will give no error but b will contain garabage
//		cout << "\n 1- parameterized constructor";
//	}
//	~hello()
//			{
//				cout << "\n destructor";
//			}
//};
//int main()
//{
//	hello h[] = { 1,2,hello(12,31) }; //it creates an array of size 3 on stack but not on heap
//	cout << h[2].i;     
//}


//class hello
//{
//public:
//	int i;
//	int b;
//	void seti(int i)
//	{
//		this->i = i;
//	}
//	hello()
//	{
//		cout << "\n constructor";
//	}
//	hello(int i, int b)
//	{
//		this->i = i;
//		this->b = b;//  doing b=b will give no error but b will contain garabage
//		cout << "\n  parameterized constructor";
//	}
//	hello(int i)
//	{
//		this->i = i;
//		this->b = 2;//  doing b=b will give no error but b will contain garabage
//		cout << "\n 1- parameterized constructor";
//	}
//	~hello()
//	{
//		cout << "\n destructor";
//	}
//};
//int main()
//{
//	hello *h = new hello[3]{1,2,hello(12,31)};      //array size is important when on heap
//	delete h;
//}



//class hello
//{
//public:
//	int i;
//	int b;
//	void seti(int i)
//	{
//		this->i = i;
//	}
//	hello()
//	{
//		cout << "\n constructor";
//	}
//	hello(int i, int b)
//	{
//		this->i = i;
//		this->b = b;//  doing b=b will give no error but b will contain garabage
//		cout << "\n  parameterized constructor";
//	}
//	hello(int i)
//	{
//		this->i = i;
//		this->b = 2;//  doing b=b will give no error but b will contain garabage
//		cout << "\n 1- parameterized constructor";
//	}
//	~hello()
//			{
//				cout << "\n destructor";
//			}
//	hello(hello & ref)
//	{
//		cout << "\n copy constructor";
//	}
//};
//int main()
//{
//	hello *h1 = new hello;     //creates a single default object
//	hello *h2 = new hello[0];// no object
//	hello *h3 = new hello(1,2); //parameterized single constructor
//	delete h2;
//}

//class hello
//	{
//	public:
//		int i;
//		int b;
//		void seti(int i)
//		{
//			this->i = i;
//		}
//		hello()
//		{
//			cout << "\n constructor";
//		}
//		hello(int i, int b)
//		{
//			this->i = i;
//			this->b = b;//  doing b=b will give no error but b will contain garabage
//			cout << "\n  parameterized constructor";
//		}
//		hello(int i)
//		{
//			this->i = i;
//			this->b = 2;//  doing b=b will give no error but b will contain garabage
//			cout << "\n 1- parameterized constructor";
//		}
//		~hello()
//		{
//			cout << "\ndestructor";
//		}
//	};
//	int main()
//	{
//		hello *h = new hello[3];
//		h[1].~hello(); //when we initialize object array on heap , destructors dont run
//		hello h1;
//	}



//class hello
//{
//public:
//	int i;
//	int b;
//	void seti(int i)
//	{
//		this->i = i;
//	}
//	hello()
//	{
//		cout << "\n constructor";
//	}
//	hello(int i, int b)
//	{
//		this->i = i;
//		this->b = b;//  doing b=b will give no error but b will contain garabage
//		cout << "\n  parameterized constructor";
//	}
//	hello(int i)
//	{
//		this->i = i;
//		this->b = 2;//  doing b=b will give no error but b will contain garabage
//		cout << "\n 1- parameterized constructor";
//	}
//	~hello()
//	{
//		cout << "\ndestructor";
//	}
//};
//int main()
//{
//	hello h[5];
//}


//class hello
//	{
//	public:
//		int i;
//		int b;
//		void seti(int i)
//		{
//			this->i = i;
//		}
//		hello()
//		{
//			cout << "\n constructor" << i << "\n";;
//		}
//		hello(int i, int b)
//		{
//			this->i = i;
//			this->b = b;//  doing b=b will give no error but b will contain garabage
//			cout << "\n  parameterized constructor "<<i<<"\n";
//		}
//		hello(int i)
//		{
//			this->i = i;
//			this->b = 2;//  doing b=b will give no error but b will contain garabage
//			cout << "\n 1- parameterized constructor" << i << "\n";;
//		}
//		hello( hello & ref)
//		{
//			cout << "\n copy constructor";
//			ref.i = 12;
//		}
//
//		~hello()
//		{
//			cout << "\ndestructor";
//		}
//	};
//hello &f(hello  &ref)
//{
//	hello h(1,2);
//	return h;
//}
//	int main()
//	{
//		hello h[5];
//		f(h[2]);
//		cout << "here";
//	}
//

//class hello
//{
//public:
//	int i;
//	int b;
//	void seti(int i)
//	{
//		this->i = i;
//	}
//	hello()
//	{
//		cout << "\n constructor";
//	}
//	hello(int i, int b)
//	{
//		this->i = i;
//		this->b = b;//  doing b=b will give no error but b will contain garabage
//		cout << "\n  parameterized constructor"<<this->i<<"\n";
//	}
//	hello(int i)
//	{
//		this->i = i;
//		this->b = 2;//  doing b=b will give no error but b will contain garabage
//		cout << "\n 1- parameterized constructor";
//	}
//	~hello()
//	{
//		cout << "\ndestructor";
//	}
//	hello(hello & ref)
//	{
//		cout << "\n copy constructor";
//	}
//};
//hello f(hello  ref)
//{
//	hello h(1,2);
//	cout << "\n here";
//	return h;
//
//}
//int main()
//{
//	hello h(23,4);
//	f(h);
//	cout << "\n here";
//}

//      very important
//class hello
//{
//public:
//	int i;
//	int b;
//	void seti(int i)
//	{
//		this->i = i;
//	}
//	hello() 
//	{
//		cout << "\n constructor"  << "\n";;
//	}
//	hello(int i, int b) 
//	{
//		this->i = i;
//		this->b = b;//  doing b=b will give no error but b will contain garabage
//		cout << "\n  parameterized constructor " << "\n";
//	}
//	hello(int i)
//	{
//		this->i = i;
//		this->b = 2;//  doing b=b will give no error but b will contain garabage
//		cout << "\n 1- parameterized constructor" << "\n";;
//	}
//	~hello()
//	{
//		cout << "\ndestructor";
//	}
//	hello(const hello &ref)
//	{
//		cout << "\n copy constructor";
//
//	}
//	hello operator=( hello& ref)
//	{
//		cout << "\n= operator";
//		return *this;
//	}
//	hello& f(hello  ref)   //when returned is copy ,copy constructor runs
//	{
//	//	hello h(1, 2);
//		return *this;
//	}
//};
//
//int main()
//{
//	hello h;
//	hello b;
//	b= h.f(h);
//	cout << "here";
//}



//class hello
//{
//public:
//	int i;
//	int b;
//	void seti(int i)
//	{
//		this->i = i;
//	}
//	hello()
//	{
//		cout << "\n constructor" << "\n";;
//	}
//	hello(int i, int b)
//	{
//		this->i = i;
//		this->b = b;//  doing b=b will give no error but b will contain garabage
//		cout << "\n  parameterized constructor " << "\n";
//	}
//	hello(int i)
//	{
//		this->i = i;
//		this->b = 2;//  doing b=b will give no error but b will contain garabage
//		cout << "\n 1- parameterized constructor" << "\n";;
//	}
//	~hello()
//	{
//		cout << "\ndestructor";
//	}
//	hello(const hello &ref)
//	{
//		cout << "\n copy constructor";
//
//	}
//	void operator+(const hello  ref)
//	{
//		cout << "\n= operator";
//	}
//	hello f(hello  ref)   //when returned is not copy ,copy constructor does not  runs
//	{
//		hello h(1, 2);
//		return h;
//	}
//};
//
//int main()
//{
//	hello h;
//	hello b = h.f(h);
//	cout << "\n here";
//}


//class hello
//{
//public:
//	int i;
//	int b;
//	void seti(int i)
//	{
//		this->i = i;
//	}
//	hello()
//	{
//		cout << "\n constructor" << "\n";;
//	}
//	hello(int i, int b)
//	{
//		this->i = i;
//		this->b = b;//  doing b=b will give no error but b will contain garabage
//		cout << "\n  parameterized constructor " << "\n";
//	}
//	hello(int i)
//	{
//		this->i = i;
//		this->b = 2;//  doing b=b will give no error but b will contain garabage
//		cout << "\n 1- parameterized constructor" << "\n";;
//	}
//	~hello()
//	{
//		cout << "\ndestructor";
//	}
//	hello(const hello &ref)
//	{
//		cout << "\n copy constructor";
//
//	}
//	void operator=(const hello  ref)
//	{
//		cout << "\n= operator";
//	}
//	hello f(hello  ref)   //when returned is not copy ,copy constructor does not  runs
//	{
//		hello h;
//		hello h3;
//		return h;
//	}
//	
//};
//
//int main()
//{
//	hello h;
//	hello b= h.f(h);
//	cout << "\n here";
//}

// last quiz

//class test
//{
//private:
//	int i;
//public:
//	test(int i = 0)
//	{
//		cout << "\ncons";
//	}
//	test(const test & ref)
//	{
//		cout << "\n copy cons";
//	}
//	test operator=(const test & ref)
//	{
//		cout << "\n operator=";
//		return *this;
//	}
//	test  operator=(const int i)
//	{
//		cout << "\n operator=";
//		return *this;
//	}
//	test &operator+(test ref)
//	{
//		cout << "\n operator+";
//		test t(i + ref.i);
//		return t;
//	}
//	~test()
//	{
//		cout << "\ndes";
//	}
//
//
//};
//int main()
//{
//	test t1(10);
//	test t2;
//	test t4;
//	t4= t1 + t2;
//	
//	cout << "\n outside";
//}



//int main()
//{
//	test t1(10);
//	test t2;
//	test t3 = t2;
//	t3 = t1 + t2;
//	cout << "\n here";
//}



//int main()
//{
////	test t1(10);
//	//test t2;
////	test t3 = t2;
//	test t3;
//	t3= (test)4;// no copy constructor
////	t2 = 3;
//	cout << "\n here";
////	t1 = 12;
//}



//class test
//{
//public:
//	int i;
//	const int j;
//public:
//	test(int i=0):j(10),i(12)
//	{
//		this->i = i;
//		
//	}
//};
//int main()
//{
//	test t(2);
//	cout << t.i;
//	cout << t.j;
//}



//class test
//{
//public:
//	int i;
//	 int j;
//public:
//	test(int i = 0) 
//	{
//		this->i = 12;
//		j = 13;
//		change();
//		seti();
//	}
//
//	void change()const
//	{
//		
//		cout << i << j; 
//	}
//	void seti()
//	{
//		i++;
//	}
//};
//int main()
//{
//	const test t;
//	t.change();
//	
//}


//class test
//{
//public:
//	 static int i;
//	int j;
//	test()
//	{
//		i = 23;
//	}
//};
//int test:: i ;
//int main()
//{
//	cout << test::i;
//	test t;
//	t.i = 23;
//	cout << t.i;
//}


//class test
//	{
//	public:
//		 static int i;
//		int j;
//		double x;
//		test()
//		{
//			i = 23;
//			j = 32;
//		}
//	};
//	int test:: i = 10;
//	int main()
//	{
//	
//		test t1,t2;
//		t1.j = 23;
//		cout << t1.i;
//			t1.i = 3;
//		cout << t2.i;
//		cout<<sizeof(t1);
//	}
//




//class test
//{
//private:
//	static int i;
//	int j;
//	double x;
//	
//public:
//	test()
//	{
//		i = 23;
//		j = 32;
//	}
//	static int geti()
//	{
//		return j;
//	}
//};
//int test::i = 10;
//int main()
//{
//	
//	test t;
//	cout << test::geti();
//cout<<	t.geti();
//
//	
//cout << sizeof(t);
//}




//class test
//{
//private:
//	static int i;
//	int j;
//	double x;
//
//public:
//	test()
//	{
//		i = 23;
//		j = 32;
//	}
//	static int geti()
//	{
//		return j;   // static function cant access non static variables
//	}
//};
//int test::i = 10;
//int main()
//{
//
//	test t;
//	cout << test::geti();
//	cout << t.geti();
//
//
//	cout << sizeof(t);
//}


//class hello
//{
//public:
//	int i;
//	int b;
//	void seti(int i)
//	{
//		this->i = i;
//	}
//	hello() 
//	{
//		cout << "\n constructor"  << "\n";;
//	}
//	hello(int i, int b) 
//	{
//		this->i = i;
//		this->b = b;//  doing b=b will give no error but b will contain garabage
//		cout << "\n  parameterized constructor " << "\n";
//	}
//	hello(int i)
//	{
//		this->i = i;
//		this->b = 2;//  doing b=b will give no error but b will contain garabage
//		cout << "\n 1- parameterized constructor" << "\n";;
//	}
//	~hello()
//	{
//		cout << "\ndestructor";
//	}
//	hello(const hello &ref)
//	{
//		cout << "\n copy constructor";
//
//	}
//	hello operator+(const hello  ref)
//	{
//		cout << "\n= operator";
//		return *this;
//	}
//	hello f(hello  ref)   //when returned is copy ,copy constructor runs
//	{
//		hello h(1, 2);
//		return h;
//	}
//};
//
//int main()
//{
//	hello h;
//	hello h1 = h;
//h= h + h1;
//	cout << "\n out";
//}



//class test
//{
//private:
//	 static int i;
//	int j;
//	double x;
//
//public:
//	test()
//	{
//		i = 23;
//		j = 32;
//	}
//	static int geti()
//	{
//		return i;  
//	}
//};
//int test::i = 10;
//int main()
//{
//
//	test t;
//	cout << test::geti();
//	cout << t.geti();
//
//
//	cout << sizeof(t);
//}



//class test
//{
//private:
//	int i;
//public:
//	test(int i = 0)
//	{
//		cout << "\ncons";
//	}
//	test(const test & ref)
//	{
//		cout << "\n copy cons";
//	}
//	test operator=(const test & ref)
//	{
//	cout << "\n operator=";
//	test t;
//	return *this;
//	}
//	test  operator=(const int i)
//	{
//		cout << "\n operator=";
//		return *this;
//	}
//	test operator+(test & ref)
//	{
//		cout << "\n operator+";
//	test t(i + ref.i);
//		return *this;
//	}
//	~test()
//	{
//		cout << "\ndes";
//	}
//
//};
//int main()
//{
//	test t1;
//	test t(t1);
////	test t3, t2,t1;
//	//t1=t3 = t2;
//	//test t4=t1+t2;
//	
////	test t1 = t2 = t3;
//	cout << "here";
//	//test t1, t2, t3;
//	// t2 + t3;
//	
//
//}                             


//class hello
//{
//	double i;
//	int  j;
//	int x;
//	char f;
//	float e;
//};
//int main()
//{
//	hello h;
//	cout << sizeof(hello);
//}



//class test
//{
//private:
//	int i;
//public:
//	test(int i = 0)
//	{
//		cout << "\ncons";
//	}
//	test(const test & ref)
//	{
//		cout << "\n copy cons";
//	}
//	test operator=(const test & ref)
//	{
//		cout << "\n operator=";
//		test t;
//		return *this;
//	}
//	test & operator=(const int i)
//	{
//		cout << "\n operator=";
//		return *this;
//	}
//	test operator+(test &ref)
//	{
//		cout << "\n operator+";
//		test t(i + ref.i);
//		//test ts(t);
//		return t;
//	}
//	~test()
//	{
//		cout << "\ndes";
//	}
//
//};
//int main()
//{
//	test t1,t2;
//	test t3=t1 + t2;
//	t3 = t1 + t2;
//	cout << "here";
//}




//class hello
//{
//public:
//	int i;
//	int b;
//	void seti(int i)
//	{
//		this->i = i;
//	}
//	hello()
//	{
//		cout << "\n constructor" << "\n";;
//	}
//	hello(int i, int b)
//	{
//		this->i = i;
//		this->b = b;//  doing b=b will give no error but b will contain garabage
//		cout << "\n  parameterized constructor " << "\n";
//	}
//	hello(int i)
//	{
//		this->i = i;
//		this->b = 2;//  doing b=b will give no error but b will contain garabage
//		cout << "\n 1- parameterized constructor" << "\n";;
//	}
//	~hello()
//	{
//		cout << "\ndestructor";
//	}
//	hello(const hello &ref)
//	{
//		cout << "\n copy constructor";
//
//	}
//	void operator=(const hello  ref)
//	{
//		cout << "\n= operator";
//	}
//	hello f(hello  ref)   //when returned is copy ,copy constructor runs
//	{
//			hello h(1, 2);
//		return *this;
//	}
//	hello  operator[](int i)
//	{
//		cout << "\n[] operator";
//	//	hello h;
//		return *this;
//	}
//};
//
//int main()
//{
//	hello h;
//	hello b;
//	b = h.f(h);
//	cout << "here";
////	hello e;
//	//e= h[23];
//	cout << "\n outside";
//}



//class hello
//{
//private:
//	int a;
//	//int b;
//public:
//
//	hello()
//	{
//		cout << "\n default constructor";
//		this->a = a;
//	//	this->b = b;
//	}
//	hello(int a)
//	{
//		cout << "\n para constructor";
//		this->a = a;
//		//this->b = b;
//	}
//	void operator=(const hello &ref)
//	{
//		cout << "\n =operator";
//		a = ref.a;
//	//	b = ref.b;
//	}
//	~hello()
//	{
//		cout << "\n destructor";
//	}
//};
//int main()
//{
////	hello h=(hello)2;
//	hello h;
//	h=43;
//	cout << "\n here";
//}



//class hello
//{
//private:
//	int a;
//	//int b;
//public:
//
//	hello()
//	{
//		cout << "\n default constructor";
//		this->a = a;
//		//	this->b = b;
//	}
//	explicit hello(int a)
//	{
//		cout << "\n para constructor";
//		this->a = a;
//		
//	}
//	hello(const hello &ref)
//	{
//		cout << "\n copy constructor";
//	}
//	hello operator=(const hello &ref)
//	{
//		cout << "\n =operator";
//		a = ref.a;
//		return *this;
//	}
//	void operator=(int i)
//	{
//		cout << "\n= operator with int";
//	}
//	~hello()
//	{
//		cout << "\n destructor";
//	}
//};
//int main()
//{
//	hello h;
//	hello h1 = h;    // now if we dont typecast than error as explicit
//	h =32;  //= operator with int
//	cout << "\n here";
//}



//class hello
//{
//private:
//	int a;
//	//int b;
//public:
//
//	hello()
//	{
//		cout << "\n default constructor";
//		this->a = a;
//		//	this->b = b;
//	}
//	explicit hello(int a)
//	{
//		cout << "\n para constructor";
//		this->a = a;
//
//	}
//	hello(const hello &ref)
//	{
//		cout << "\n copy constructor";
//	}
//	hello operator=(const hello &ref)
//	{
//		cout << "\n =operator";
//		a = ref.a;
//		return *this;
//	}
//	void operator=(int i)
//	{
//		cout << "\n= operator with int";
//	}
//	/*operator double()
//	{
//		cout << "\n double operator";
//		return (double)a;
//	}*/
//	operator int()
//	{
//		cout << "\n int operator";
//		return (int)a;
//	}
//	/*operator char()
//	{
//		cout << "\n char operator";
//		return (char)a;
//	}*/
//	~hello()
//	{
//		cout << "\n destructor";
//	}
//
//};
//int main()
//{
//	hello h;
//	double v; 
//	v= h;
//	int i = h;
//char ch = h;
//}



//class hello
//{
//private:
//	int a;
//	int b;
//public:
//
//	hello()
//	{
//		cout << "\n default constructor";
//		this->a = a;
//			this->b = b;
//	}
// 	 hello(int a,int b)
//	{
//		cout << "\n para constructor";
//		this->a = a;
//		this->b = b;
//	}
//	hello(const hello &ref)
//	{
//		cout << "\n copy constructor";
//	}
//	hello operator=(const hello &ref)
//	{
//		cout << "\n =operator";
//		a = ref.a;
//		return *this;
//	}
//	/*void operator=(int i)
//	{
//		cout << "\n= operator with int";
//	}*/
//	hello(int i)
//	{
//		cout << "1= para constructor";
//	}
//	~hello()
//	{
//		cout << "\n destructor";
//	}
//};
//int main()
//{
//	hello h;
//	h = (32,42);    // now if we dont typecast than error as explicit
//	h = 32;  //= operator with int
//}


//class hi;
//class hello
//{
//private:
//	int a;
//	int b;
//public:
//	hello(int a=0,int b=0)
//	{
//		cout << "\n hello constructor";
//		this->a = a;
//		this->b = b;
//	}
//	void operator=(const hi&)
//	{
//		cout << "\n hello =operator";
//	}
//	
//	operator hi()
//	{
//		cout << "\n operator hi =";
//		hi h(this->a,this-> b);
//		return h;
//	}
//};
//class hi
//{
//private:
//	int a;
//	int b;
//public:
//	hi(int a = 0, int b = 0)
//	{
//		cout << "\n hi constructor";
//		this->a = a;
//		this->b = b;
//	}
//	void operator=(const hello&)
//	{
//		cout << "\n hi =operator";
//	}
//
//};
//int main()
//{
//	hello h;
//	hi i;
//	i = h;
//}



//class fraction
//{
//public:
//	double num;
//	int den;
//public:
//	fraction(double n )
//	{
//		cout << "\nCONSTRUCTOR";
//		num = n;
//		
//	}
//	 fraction(double n = 0, int d = 0)
//	{
//		cout << "\nCONSTRUCTOR";
//		num = n;
//		den = d;
//	}
//	fraction(fraction &ref)
//	{
//		cout << "\n COPY CONSTRUCTOR";
//
//	}
//	void operator=(fraction & ref)
//	{
//		cout << "\n= OPERATOR";
//		this->num = ref.num;
//		this->den = ref.den;
//	}
//	operator double()
//	{
//		cout << "\n DOUBLE OPERATOR";
//		return num;
//	}
//	operator int()
//	{
//		cout << "\n INT OPERATOR";
//		return den;
//	}
//	operator char()
//	{
//		cout << "\n CHAR OPERATOR";
//		return den;
//	}
//	~fraction()
//	{
//		cout << "\n destructor";
//	}
//
//};
//int main()
//{
//	fraction f(65.9, 97.8);
//	fraction f1;
//	f1 =fraction(3,4);    
//	double v;
//	v = f;
//	cout << v;
//	int i = f;
//	cout << i;
//	char ch = f;
//	cout << ch;
//
//}



//class p
//{
//	int val;
//public:
//	p()
//	{
//		
//		val = 7;
//		cout  <<"\n "<< val;
//		
//	}
//	p(int i)
//	{
//		val = i;
//		cout << "\n " << val;
//	}
//	~p()
//	{
//		cout << "\n " << val;
//	}
//};
//
//int main()
//{
//	p o1(4);
//	p o2();
//	p o3(2);
//	cout << "\n\n";
//
//}



//**************************************QUIZE******************************************************************
//class Test
//{
//private:
//	int i;
//	int j;
//public:
//	Test();
//	Test(int = 0, int = 0);
//	void setI(int k);
//	void setJ(int l);
//	int getI()const;
//	int getJ()const;
//	~Test();
//};
//Test::Test() {
//	i = 0;
//	j = 0;
//}
//Test::Test(int k = 0, int l = 0) {
//	i = k;
//	l = j;
//}
//void Test::setI(int k) {
//	i = k;
//}
//void Test::setJ(int l) {
//	j = l;
//}
//int Test::getI() const {
//	j++;
//	return i;
//}
//int Test::getJ()const {
//	return j;
//}
//Test::~Test() {
//}
//int main()
//{
//
//		Test obj;
//	obj.setI(10);
//	obj.setJ(5);
//	return 0;
//}


//class Test
//{
//private:
//	int i;
//	int j;
//public:
//	Test();
//	Test(Test & ref);
//	Test(int, int);
//	void setI(int);
//	void setJ(int);
//	int getI()const;
//	int getJ()const;
//	~Test();
//};
//Test::Test() {
//	cout << "\n default";
//	i = 0;
//	j = 0;
//}
//Test::Test(int k, int l) {
//	
//	cout << "\n para constructor";
//	i = k;
//	j = l;
//}
//void Test::setI(int k) {
//	i = k;
//}
//void Test::setJ(int l) {
//	j = l;
//}
//int Test::getI() const {
//	return i;
//}
//Test::Test(Test & ref)
//{
//	cout << "\n copy cons";
//}
//
//int Test::getJ()const {
//	return j;
//}
//Test::~Test() {
//	cout << "\n desstructor";
//}
//void f(Test t) {
//	cout << "\n f()";
//}
//void g(Test &amp)
//{
//cout << "\n g()";
//}
//int main()
//{
//	Test t[3] = { Test(1,2) };
//	f(t[0]);
//	g(t[1]);
//	return 0;
//}




//class Test {
//public:
//	int i;
//	double d;
//	int * data;
//public:
//	Test();
//	Test(int, double);
//	Test(double, int);
//	Test(Test &amp);
//	~Test();
//	void createCopy(Test * ref);
//};
//Test::Test()
//{
//	cout << "\n default cons";
//	i = 5; d = 0.0;
//	data = new int[5];
//}
//Test::Test(int a, double b)
//{
//	cout << "\n para cons";
//	i = a;
//	d = b;
//	data = new int[i];
//}
//Test::~Test()
//{
//	cout << "\n destructor";
//	delete[]data;
//}
//
//
//Test::Test(double b, int a)
//{
//	cout << "\n parameterized cons";
//}
//
//Test::Test(Test & ref)
//{
//	cout << "\n copy cons";
//}
//
//void Test::createCopy(Test *ref)
//{
//	/*ref->data = new int [3];
//	ref->d = 23;
//	ref->i = 2;
//	data[0] = 2;
//	data[1] = 43;
//	data[2] = 43;*/
//
//}
//
//int main()
//{
//	Test t1;
//	Test t2(10, 3.0);
//		Test t3 = Test(0.2, 9);
//	Test t4(t2);
//	//t2.~Test();
//	//t2.data =0;
//	//	t3.createCopy(& t2);
//	return 0;
//}

//class hello
//{
//public:
//	int i;
//	int b;
//	void seti(int i)
//	{
//		this->i = i;
//	}
//	hello() 
//	{
//		cout << "\n constructor"  << "\n";;
//	}
//	hello(int i, int b) 
//	{
//		this->i = i;
//		this->b = b;//  doing b=b will give no error but b will contain garabage
//		cout << "\n  parameterized constructor " << "\n";
//	}
//	hello(int i)
//	{
//		this->i = i;
//		this->b = 2;//  doing b=b will give no error but b will contain garabage
//		cout << "\n 1- parameterized constructor" << "\n";;
//	}
//	~hello()
//	{
//		cout << "\ndestructor";
//	}
//	hello(const hello &ref)
//	{
//		cout << "\n copy constructor";
//
//	}
//	hello& operator+(const hello ref)
//	{
//		cout << "\n+ operator";
//		return *this;
//	}
//	hello operator=(const hello  ref)
//	{
//		cout << "\n= operator";
//		return *this;
//	}
//	hello f(hello  ref)   //when returned is copy ,copy constructor runs
//	{
//	//	hello h(1, 2);
//		cout << "\n inside f";
//		g(ref);
//		cout << "\n outside f";
//		return *this;
//	}
//	hello g(hello  ref)   //when returned is copy ,copy constructor runs
//	{
//		//	hello h(1, 2);
//		cout << "\n inside g";
//		return *this;
//	}
//
//};
//int main()
//{
//	hello h1,h2;
////hello h2 = h1;
////hello h3=h1 + h2;
//h1=	h2.f(h1);
//
//	cout << "\n outside";
//}



class hello
{
public:
	int i;
	int b;
	void seti(int i)
	{
		this->i = i;
	}
	hello()
	{
		cout << "\n constructor" << "\n";;
	}
	hello(int i, int b)
	{
		this->i = i;
		this->b = b;//  doing b=b will give no error but b will contain garabage
		cout << "\n  parameterized constructor " << "\n";
	}
	hello(int i)
	{
		this->i = i;
		this->b = 2;//  doing b=b will give no error but b will contain garabage
		cout << "\n 1- parameterized constructor" << "\n";;
	}
	~hello()
	{
		cout << "\ndestructor";
	}
	hello(const hello &ref)
	{
		cout << "\n copy constructor";

	}
	hello operator=(const hello & ref)
	{
		cout << "\n= operator";
		return *this;
	}
	hello f(hello  ref)   //when returned is copy ,copy constructor runs
	{
		//	hello h(1, 2);
		cout << "\n inside f";
		g(ref);
		cout << "\n outside f";
		return *this;
	}
	hello  g(hello  ref)   //when returned is copy ,copy constructor runs
	{
		//	hello h(1, 2);
		cout << "\n inside g";
		return *this;
	}

};
int main()
{
	hello h1;
	hello h2 = h1.f(h2);
	cout << "out";

	//hello h1,h2;

	// h2=h1.g(h1);
	//cout << "\n outside";
}
#include<iostream>
using namespace std;
template <typename T>
class test
{
public:
	T *data;
	int cap;
public:
	T& operator[](int i)
	{
		return data[i];
	}
	test()
	{
		
	}
	~test()
	{
	//	cout << "\n destructor";
	}
	test(int m, int s)
	{
	
	}
	test(test &ref)
	{
	
	}
	test(initializer_list<T> list)
	{
		cap = list.size();
		data = new T[cap];
	const	T *val = list.begin();
		for (int i = 0; i < cap; i++)
		{
			data[i] = *val;
			val++;
		}
	}
	void display()
	{
		for (int i = 0; i < cap; i++)
		{
			cout << data[i];
			
		}
	}

};

int main()
{
	test <test<test <int>>> a{ {{1,2,3 },{1,9 },{1,2,6} }, { { 1,9,3 },{1,8},{5,2} } };
	
	for (int i = 0; i < a.cap; i++)
	{
		for (int j = 0; j < a[i].cap; j++)
		{
			for (int x = 0; x < a[i][j].cap; x++)
			{
				cout << a[i][j][x] << "\t";
			}
			cout << "\n";
		}
		//cout << "\n";
	}
}


//#include<iostream>
//using namespace std;
//
//class test
//{
//private:
//	 int i;
//	int j;
//public:
//	test():i(10)
//	{
//	//	i = 13;
//		j = 3;
//		cout << "\ndefault constructor";
//	}
//	test(int m, int s):i(m)
//	{
//		
//		j = s;
//		cout << "\nparameterized constructor";
//	}
//	/*test(test &ref)
//		{			
//			j = ref.j;
//			cout << "\ncopy constuctor";
//		}*/
//	~test()
//	{
//		cout << "\ndestructor";
//	}
//	test f ( test * s2)
//	{
//		test x=*s2;
//		return x;
//	}
//	
//	int geti()const
//	{
//		return i;
//	}
//	int getJ()const
//	{
//		return j;
//	}
//
//};
//
//int main()
//{
//	const test t;
//
//	cout << t.geti();
//	cout << t.getJ();
//}




//#include<iostream>
//using namespace std;
//
//class test
//{
//private:
//	int i;
//	int j;
//public:
//	test() :i(10)
//	{
//		//i = 13;
//		j = 3;
//		cout << "\ndefault constructor";
//	}
//	test(int m, int s) :i(m)
//	{
//		//i = m;
//		j = s;
//		cout << "\nparameterized constructor";
//	}
//	test(test &ref)
//	{
//	j = ref.j;
//	cout << "\ncopy constuctor";
//	}
//	~test()
//	{
//		cout << "\ndestructor";
//	}
//	test f(test * s2)
//	{
//		test x = *s2;
//		return x;
//	}
//	int geti()const
//	{
//		return i;
//	}
//	int getJ()const
//	{
//		return j;
//	}
//
//};
//
//int main()
//{
//	const test t(19, 3);
//	cout << t.geti();
//	cout << t.getJ();
//}

// #include<iostream>
//using namespace std;
//
//void f()
//{
//	static int i;
//	cout << i << "\n";
//	i++;
//}
//int main()
//{
//	f();
//	f();
//	f();
//}

//
//#include<iostream>
//using namespace std;
//class set
//{
//public:
//	double x;
//int i;
//int s;
//char e;
//	double y;
//	
//public:
//	set();
//	
//	set(int e, int f);
//	
//};
////int set::i(10);
//int main()
//{
//	set t,t1;
//	cout << sizeof(t);
////	t.i = 43;
//	//cout << t1.i;
//	
//}
//set::set()
//{
//	i = 12;
//	//j = 9;
//}
//
//set::set(int e, int f)
//{
//	i = e;
//	//j = f;
//}
//


//#include<iostream>
//using namespace std;
//class set
//{
//private:
//	int a;
//	double s;
//	
//	char ch;
//
//public:
//	
//};
//int main()
//{
//	set s;
//	cout<<sizeof(s);
//
//
//}



//#include<iostream>
//using namespace std;
//class set
//{
//public:
//	static int i;
//	int j;
//	double s;
//public:
//	set();
//	static void f()
//	{
//		cout <<"inside f():"<< i;
//	}
//	set(int e, int f);
//
//};
//int set::i(10);
//int main()
//{
//	set::f();
//	set t, t1;
////	cout << sizeof(t);
//	t.i = 43;
//	cout << t1.i;
//	t1.f();
//
//}
//set::set()
//{
//	i = 12;
//	j = 9;
//}
//
//set::set(int e, int f)
//{
//	i = e;
//	j = f;
//}
//


//
// #include<iostream>
//using namespace std;
//class set
//{
//public:
//	static int i;
//	int j;
//	double s;
//public:
//	set();
//
//	 void f()const
//	{
//		cout <<"inside f()const:"<< i;
//	}
//	 void f()
//	 {
//		 cout << "inside f():" << i;
//	 }
//	set(int e, int f);
//
//};
//int set::i(10);
//int main()
//{
//	 set t;
//	t.f();
//}
//set::set()
//{
//	i = 12;
//	j = 9;
//}
//
//set::set(int e, int f)
//{
//	i = e;
//	j = f;
//}
//
//
//#include<iostream>
//using namespace std;
//class set
//{
//public:
//	 int i;
//	int j;
//	double s;
//public:
//	set();
//	/*set(set & ref)
//	{
//		(*this).i = ref.i;
//		(*this).j = ref.j;
//		(*this).s = ref.s;
//
//
//	}*/
//
//	 void f()
//	 {
//		 set x = *this;
//		 cout << x.i << x.j << x.s;;
//	 }
//	set(int e, int f);
//
//};
//int main()
//{
//	 set t;
//	t.f();
//}
//set::set()
//{
//	i = 12;
//	j = 9;
//	s = 13.5;
//}
//
//set::set(int e, int f)
//{
//	i = e;
//	j = f;
//}
//

#ifndef MYARRAY_H
#define MYARRAY_H
#include<iostream>

using namespace std;
template<class T>
class MyArray
{
private:
	int capacity;
	
	T *data;
public:
	MyArray(int c=5);
	MyArray(const MyArray&);
	T &  operator [](int);
	void display();
	~MyArray();
	MyArray(initializer_list <T> list);
	MyArray & operator=(const MyArray &);
	
	MyArray<T> operator +(const MyArray<T> &);
	void operator+=(const MyArray<T> &);

	friend ostream& operator<<(ostream &str, MyArray &ref);
	friend istream& operator>>(istream &str, MyArray &ref);
};
//template <class T>
//MyArray<T>::MyArray(int c)
//{
//
//	capacity = c;
//	data = new T[capacity];
//	int noOfElements = 0;
//
//}
//template<class T>
//MyArray<T>::MyArray(const MyArray & ref)
//{
//	this->capacity = ref.capacity;
//	this->data = new T[capacity];
//	for (int i = 0; i < capacity; i++)
//	{
//		this->data[i] = ref.data[i];
//	}
//}
//
//template<class T>
//T & MyArray<T>::operator[](int i)
//{
//	if (i >= 0 && i < this->capacity)
//		return data[i];
//	else
//		throw "Invalid Index\n";
//}
//
//template<class T>
//void MyArray<T>::display()
//{
//	cout << "\n[";
//	for (int i = 0; i < capacity; i++)
//	{
//		cout << data[i] << " ";
//	}
//	cout << "]\n";
//}
//
//template<class T>
//MyArray<T>::~MyArray()
//{
//	delete[]data;
//	data = 0;
//}
//
//template<class T>
//MyArray<T> & MyArray<T>::operator=(const MyArray &ref)
//{
//	this->~MyArray();
//	this->capacity = ref.capacity;
//	this->data = new T[capacity];
//	for (int i = 0; i < capacity; i++)
//	{
//		this->data[i] = ref.data[i];
//	}
//	return (*this);
//}
//
//
//
//
//template<class T>
//MyArray<T> MyArray<T>::operator+(const MyArray<T> & ref)
//{
//	MyArray temp;
//	for (int i = 0; i < capacity; i++)
//	{
//		temp.data[i] = data[i] + ref.data[i];
//	}
//	return temp;
//}
//
//template<class T>
//void MyArray<T>::operator+=(const MyArray<T> &ref)
//{
//	for (int i = 0; i < capacity; i++)
//	{
//		data[i] = data[i] + ref.data[i];
//	}
//}
//
//
//
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
//
//
#endif

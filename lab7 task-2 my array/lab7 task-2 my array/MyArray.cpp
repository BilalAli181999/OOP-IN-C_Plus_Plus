#include "MyArray.h"

#include <iostream>
using namespace std;

template <class T>
MyArray<T>::MyArray(int c)
{
	
		capacity = c;
		data = new int[capacity];
		int noOfElements = 0;
	
}
template<class T>
MyArray<T>::MyArray(const MyArray & ref)
{
	this->capacity = ref.capacity;
		this->data = new int[capacity];
		for (int i = 0; i < capacity; i++)
		{
			this->data[i] = ref.data[i];
		}
}

template<class T>
T & MyArray<T>::operator[](int i)
{
	return data[i];
}

template<class T>
void MyArray<T>::display()
{
	cout << "\n[";
		for (int i = 0; i < capacity; i++)
		{
			cout  << data[i] << " ";
		}
		cout << "]\n";
}

template<class T>
MyArray<T>::~MyArray()
{
	delete[]data;
		data = 0;
}
template<class T>
MyArray<T>::MyArray(initializer_list <T> list)
{
	this->capacity = list.size();
	this->data = new T[capacity];
	const T *val = list.begin();
	for (int i = 0; i < capacity; i++)
	{
		data[i] = *val;
		val++;
	}
}
template<class T>
MyArray<T> & MyArray<T>::operator=(const MyArray &ref)
{
	this->~MyArray();
		this->capacity = ref.capacity;
		this->data = new int[capacity];
		for (int i = 0; i < capacity; i++)
		{
			this->data[i] = ref.data[i];
		}
		return (*this);
}




template<class T>
MyArray<T> MyArray<T>::operator+(const MyArray<T> & ref)
{
	MyArray temp;
		for (int i = 0; i < capacity; i++)
		{
			temp.data[i] = data[i] + ref.data[i];
		}
		return temp;
}

template<class T>
void MyArray<T>::operator+=(const MyArray<T> &ref)
{
	for (int i = 0; i < capacity; i++)
			{
				data[i] = data[i] + ref.data[i];
			}
}



template <class T>
ostream& operator<<(ostream &str, MyArray<T> &ref)
{
	cout << "\n[";
	for (int i = 0; i < ref.capacity; i++)
	{
		cout << ref.data[i] << " ";
	}
	cout << "]\n";
	return str;
}
template <class T>
istream& operator>>(istream &str, MyArray<T> &ref)
{
	cout << "\n[";
	for (int i = 0; i < ref.capacity; i++)
	{
		str >> ref.data[i];
	}
	cout << "]\n";
	return str;
}



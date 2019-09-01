#ifndef SARRAY_H
#define SARRAY_H
class sarray
{
private:
	int *data;
	int capacity;

public:
	sarray();
	sarray(int c);
	void setCapacity(int c);
	int getCapacity()const;
	int& at(int )const;
	int & operator[](int);
	~sarray();

};
#endif
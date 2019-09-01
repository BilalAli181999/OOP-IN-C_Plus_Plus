#pragma once
#ifndef STRING_H
#define STRING_H
class cstring
{
private:
	char *data;
	int size;
public:
	cstring(int s = 20);
	cstring(char);
	cstring(char*);
	~cstring();
	int remove(char ch);
	char* getData();
	int insert(int index, char ch);
	char & at(int index);
	bool isEmpty();
	int getLength()const;
	void display()const;
	int find(char *subStr, int start = 0);
	int find(char ch, int start = 0);
	int insert(int index, char* subStr);
	void makeUpper();
	void makeLower();
	void input();
	void trim();
	void reverse();
	cstring concatenate(const cstring &  s2);
	void concatEqual(const cstring &  s2);
	cstring(cstring & ref);
	int isEqual(const cstring & s2);
	int isEqual(char * s2);
	int getCharLength(char * & ch);
	int replace(char *old, char *subStr);
	cstring & operator=(const cstring &ref);
	cstring operator+(const cstring & s2)const;
	cstring operator+(char* s2);
	void operator +=(const cstring &s2);
	void operator +=(char *s2);






};
#endif

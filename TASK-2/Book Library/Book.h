//NAME:BILAL ALI
//ROLL NO:BCSF16A030
#ifndef BOOK_H
#define BO0K_H
#include<iostream>
#include<string>
using namespace std;

class Book
{
public:
	char  authorName[100];
	char bookTitle[100];
	char publisherName[100];
	static int bC;
	int bookCode;
public:
	Book();
	Book(char* aN, char* bT, char* pN);
	char& operator[](int index);
	void setAuthorName(char* aN);
	void setBookTitle(char* bT);
	void setPublisherName(char* pN);
	void setCode(int c);
	char* getAuthorName();
	char* getBookTitle();
	char* getPublisherName();
	int getBookCode();
	void display();
	int getBookId();
	void setBookId(int id);
};

#endif

//NAME:BILAL ALI
//ROLL NO:BCSF16A030
#include "Book.h"

Book::Book()//if we dont input by ourself ,constructor is made to auto generate default objects
{
	bC++;
	strcpy_s(authorName, "Tony Gadis");
	strcpy_s(bookTitle, "c++");
	strcpy_s(publisherName, "Aone publishers");
	bookCode = bC;

}

Book::Book(char* aN, char* bT, char* pN)//if we dont input by ourself ,constructor is made to auto generate  objects
{
	bC++;
	strcpy_s(authorName, aN);
	strcpy_s(bookTitle, bT);
	strcpy_s(publisherName, pN);
	bookCode = bC;
}

char & Book::operator[](int index)
{
	return bookTitle[index];
}

void Book::setAuthorName(char* aN)
{
	strcpy_s(authorName, aN);
}

void Book::setBookTitle(char* bT)
{
	strcpy_s(bookTitle, bT);
}

void Book::setPublisherName(char* pN)
{
	strcpy_s(publisherName, pN);
}

void Book::setCode(int c)
{
	bookCode = c;
}

char* Book::getAuthorName()
{
	return authorName;
}

char* Book::getBookTitle()
{
	return bookTitle;
}

char* Book::getPublisherName()
{
	return publisherName;
}

int Book::getBookCode()
{
	return bookCode;
}

void Book::display()
{
	cout << "\n Book Title:  " << bookTitle;
	cout << "\n Author Name:  " << authorName;
	cout << "\n Publisher:  " << publisherName;
	cout << "\n Book Code:  " << bookCode;
}

int Book::getBookId()
{
	return bookCode;
}

void Book::setBookId(int id)
{
	bookCode = id;
}

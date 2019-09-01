#ifndef STRING_H
#define STRING_H
class cstring
{
private:
	char *data;
	int size;
public:
	cstring();
	cstring(char );
	cstring(char*);
	~cstring();
	char & at(int index);
	bool isEmpty();
	int getLength();
	void display();
	int find(cstring *subStr, int start = 0);
	void insert(int index, cstring* subStr);
	void makeUpper();
	void makeLower();
	void input();
	void trim();
	void reverse();
	cstring concatenate(cstring  s2);
	cstring(cstring & ref);
	int compare(cstring s2);




};

#endif

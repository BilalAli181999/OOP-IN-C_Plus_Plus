#ifndef TASK1
#define TASK1

class personalData
{
private:
	char name[50];
	char address[200];
	int age;
	int phoneNo;
public:
	void setName(char n[]);
	char *getName();
	void setAddress(char add[]);
	char* getAddress();
	void setAge(int a);
	int getAge()const;
	void setPhoneNo(int n);
	int getPhoneNo()const;
};



#endif
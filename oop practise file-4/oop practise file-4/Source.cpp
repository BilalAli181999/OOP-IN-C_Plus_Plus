//#include<iostream>
//using namespace std;
//class employee
//{
//private:
//	char firstName[100];
//	char lastName[100];
//	float salary;
//public:
//	void setFirstName(char n[])
//	{
//		strcpy_s(firstName, n);
//	}
//	void setLastName(char n[])
//	{
//		strcpy_s(lastName, n);
//	}
//	void setSalary(float s)
//	{
//		if (s >= 0)
//		{
//			salary = s;
//		}
//		else
//			cout << "Salary not efficient";
//	}
//	char* getFirstName()
//	{
//		return firstName;
//	}
//	char* getLastName()
//	{
//		return lastName;
//	}
//	float getSalary()
//	{
//		return salary;
//	}
//	void salaryIncrement()
//	{
//		float inc;
//		inc = salary*(10.0 / 100);
//		
//		salary = salary + inc;
//	
//	}
//};
//
//int main()
//{
//	employee emp[2];
//	char **ch = new char*[4];
//	ch[0] = new char[100];
//	ch[1] = new char[100];
//	ch[2] = new char[100];
//	ch[3] = new char[100];
//
//		cout << "Enter first name of employee 1" ;
//		cin.getline(ch[0],100);
//		emp[0].setFirstName(ch[0]);
//		cout << "Enter last name of employee 2" ;
//		cin.getline(ch[1], 100);
//		emp[0].setLastName(ch[1]);
//		cout << "Enter first name of employee 3" ;
//		cin.getline(ch[2], 100);
//		emp[1].setFirstName(ch[2]);
//		cout << "Enter last name of employee 4" ;
//		cin.getline(ch[3], 100);
//		emp[1].setFirstName(ch[3]);
//		int s = 10;
//		int sum1=0,sum2=0;
//		for (int i = 0; i < 12; i++)
//		{
//
//			emp[0].setSalary(s);
//			s++;
//			emp[1].setSalary(s);
//			emp[0].salaryIncrement();
//			emp[1].salaryIncrement();
//			sum1 = sum1 + emp[0].getSalary();
//			sum2 = sum2 + emp[1].getSalary();
//
//		}
//		emp[0].setSalary(sum1);
//		emp[1].setSalary(sum2);
//		cout << "\nyearly salary emp-1 " << sum1;
//		cout << "\nyearly salary emp-2 " << sum2;
//		
//		cout << "\nyearly salary emp-1 " << emp[0].getSalary();
//		cout << "\nyearly salary emp-2 " << emp[1].getSalary();
//}
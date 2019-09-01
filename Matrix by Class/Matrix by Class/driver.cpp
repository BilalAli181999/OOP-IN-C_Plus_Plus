#include<iostream>
#include"matrix.h"
using namespace std;
int main()
{
	Matrix a(3,3);
	

	
	a.at(0, 0) = 1;
a.at(1, 1) = 4;
a.at(0, 1) = 2;
a.at(0, 2) = 3;
a.at(1, 0) = 4;
a.at(1, 1) = 5;
a.at(1, 2) = 6;
a.at(2, 0) = 7;
a.at(2, 0) = 7;
a.at(2, 0) = 7;
Matrix b(3,2);
b.at(0, 0) = 1;
b.at(1, 1) = 4;
b.at(0, 1) = 2;
b.at(1, 0) = 3;
	/*cin >> a;
cout << a;*/
cout << "\n****Matrix A****:\n\n";
	a.printMatrix();
cout << "\n";
	cout << "\n\n****Matrix B****\n\n";
	b.printMatrix();
//	Matrix add = a + b;
//	cout << "\n\n****ADD****\n\n";
//	add.printMatrix();
	Matrix  mul;
//
//	sub = a - b;
	mul = a*b;
//	cout << "\n\n****SUB****\n\n";
//	sub.printMatrix();
	cout << "\n\n****MUL****\n\n";
	mul.printMatrix();
//	
}
#include<iostream>
#include<algorithm>
#include<stack>
#include<utility>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	stack <char>s;
	char matrix[26] = {};
	pair<int, int>size[26];
	for (int i = 0; i < n; i++)
	{
		cin >> matrix[i];
		cin >> size[i].first;
		cin >> size[i].second;

	}
	bool same = 0;

	string exp;
	while (cin >> exp)
	{
		int mul = 0;
		bool single = 1;

		if (exp.length() == 1)
		{

			single = 0;
		}
		else
		{
			for (int i = 0; i < exp.length(); i++)
			{

				if (exp[i] != ')')
				{
					s.push(exp[i]);
				}
				else if (exp[i] == ')')
				{
					same = 0;
					char tS2 = s.top();
					s.pop();
					char tS1 = s.top();
					s.pop();

					if (size[(int)tS1 - 65].second != size[(int)tS2 - 65].first)
					{
						mul = mul + (size[(int)tS1 - 65].first)*((size[(int)tS1 - 65].second)*(size[(int)tS2 - 65].second));

					}
					else
					{
						same = 1;
						cout << "error\n";
					}
					size[(int)tS1 - 65].first = size[(int)tS1 - 65].first;
					size[(int)tS1 - 65].first = size[(int)tS2 - 65].second;

					s.push(tS1);

				}
			}

		}
		if (!single)
		{
			cout << 0;
		}
		if (same)
		{

		}
		else
		{
			cout << mul << "\n";
		}
	}
}
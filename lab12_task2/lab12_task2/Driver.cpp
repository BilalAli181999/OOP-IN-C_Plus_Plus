#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char array[8][3] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','R','S','T','U','V','W','X','Y' };
	int phone[7] = {};
	ofstream o;
	o.open("phone.txt");
	cout << "\n Enter Phone Number:";
	for (int i = 0; i < 7; i++)
	{
		cin >> phone[i];
	}
	for (int j = 0; j < 3; j++)
		{
			for (int a = 0; a < 3; a++)
			{
				for (int b = 0; b < 3; b++)
				{
					for (int c = 0; c < 3; c++)
					{
						for (int d = 0; d < 3; d++)
						{
							for (int e = 0; e < 3; e++)
							{
								for (int f = 0; f < 3; f++)
								{
									o << array[phone[0] - 2][j] << array[phone[1] - 2][a] << array[phone[2] - 2][b] << array[phone[3] - 2][c] << array[phone[4] - 2][d] << array[phone[5] - 2][e] << array[phone[6] - 2][f] << "\n";
								}
							}
						}
					}

				}
			}
		}

	
	
}
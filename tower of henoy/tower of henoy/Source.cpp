#include<iostream>
using namespace std;
void printMoves(int n)
{
	if (n == 1)
	{
		cout << "PLATE " << n << " is moving\n";
		return;
	}
	printMoves(n - 1);
	cout << "PLATE " << n << " is moving\n";
	printMoves(n - 1);

}
int main()
{
	int n;
	cout << "ENTER NO OF TILES";
	cin >> n;
	printMoves(n);

}

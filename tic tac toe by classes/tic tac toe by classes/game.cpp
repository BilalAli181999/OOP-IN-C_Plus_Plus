 #include<iostream>
#include"game.h"
using namespace std;
void ticTacToe::playGame()
{
	

	for (int i = 0; i < 9  ; i++)
	{
		
		if (i % 2 == 0)
		{
			cout << "Player-1 Enter the row,column";
			int row, col;
			cin >> row >> col;
			game.markGameBoard(row, col, 'x');
			game.display();
		}
		else
		{
			cout << "Player-2 Enter the row,column";
			int row, col;
			cin >> row >> col;
			game.markGameBoard(row, col, 'y');
			game.display();
		}
	}

}

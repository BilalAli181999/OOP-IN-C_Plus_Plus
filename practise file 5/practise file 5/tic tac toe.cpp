#include "tic tac toe.h"
#include<iostream>
using namespace std;
gameBoard::gameBoard()
{
	int c = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			board[i][j] = c;
			c++;
		}
	}
}
	void gameBoard::markGameBoard(int r, int c, char symbol)
	{
		if (!(isAlreadyMarked(r, c)))
			board[r][c] = symbol;
		else
			cout << "\nPlace is occupied\n";
	}

	bool gameBoard::isAlreadyMarked(int i, int j)
	{
		if(board[i][j]=='x' || board[i][j] == 'y')
	
		return true;
	}

	bool gameBoard::isWin()
	{
		bool status;
		if (board[0][0] == 'x'&& board[0][1] == 'x' && board[0][2] == 'x')
		{
			status = true;
		}
		else if (board[1][0] == 'x'&& board[1][1] == 'x' && board[1][2] == 'x')
		{
			status = true;
		}
		else if (board[2][0] == 'x'&& board[2][1] == 'x' && board[2][2] == 'x')
		{
			status = true;
		}
		else if (board[0][0] == 'x'&& board[1][0] == 'x' && board[2][0] == 'x')
		{
			status = true;
		}
		else if (board[0][1] == 'x'&& board[1][1] == 'x' && board[2][1] == 'x')
		{
			status = true;
		}
		else if (board[0][2] == 'x'&& board[1][2] == 'x' && board[2][2] == 'x')
		{
			status = true;
		}
		else if (board[0][0] == 'x'&& board[1][1] == 'x' && board[2][2] == 'x')
		{
			status = true;
		}
		else if (board[0][2] == 'x'&& board[1][1] == 'x' && board[2][0] == 'x')
		{
			status = true;
		}
		else if (board[0][0] == 'y'&& board[0][1] == 'y' && board[0][2] == 'y')
		{
			status = true;
		}
		else if (board[1][0] == 'y'&& board[1][1] == 'y' && board[1][2] == 'y')
		{
			status = true;
		}
		else if (board[2][0] == 'y'&& board[2][1] == 'y' && board[2][2] == 'y')
		{
			status = true;
		}
		else if (board[0][0] == 'y'&& board[1][0] == 'y' && board[2][0] == 'y')
		{
			status = true;
		}
		else if (board[0][1] == 'y'&& board[1][1] == 'y' && board[2][1] == 'y')
		{
			status = true;
		}
		else if (board[0][2] == 'y'&& board[1][2] == 'y' && board[2][2] == 'y')
		{
			status = true;
		}
		else if (board[0][0] == 'y'&& board[1][1] == 'y' && board[2][2] == 'y')
		{
			status = true;
		}
		else if (board[0][2] == 'y'&& board[1][1] == 'y' && board[2][0] == 'y')
		{
			status = true;
		}

		return status;
	}

	
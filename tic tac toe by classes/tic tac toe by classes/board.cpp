#include "board.h"
#include<iostream>
using namespace std;
gameBoard::gameBoard()
{
	int s = 49;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			board[i][j] = s;
			s++;
		}
	}
	
}
	void gameBoard::markGameBoard(int r, int c, char symbol)
	{
		if ((isAlreadyMarked(r, c)))
			cout << "\nPlace is occupied\n";
		else
			board[r][c] = symbol;
			
	}

	bool gameBoard::isAlreadyMarked(int i, int j)
	{
		if (board[i][j] == 'x' || board[i][j] == 'y')
		{
			return true;
		}
		else false;
	}

	void gameBoard::display()
	{

	

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << board[i][j];
			}
			cout << "\n";
		}
	}
	bool gameBoard::isWin()
	{
		bool status=false ;
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

	
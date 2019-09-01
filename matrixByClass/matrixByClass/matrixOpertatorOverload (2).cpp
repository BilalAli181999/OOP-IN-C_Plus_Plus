#include "MatrixOpertatorOverload.h"
#include<iostream>
using namespace std;


Matrix::Matrix()
{
	row = 0;
	col = 0;
	data = nullptr;
}

Matrix::Matrix(int r, int c)
{
	row = r;
	col = c;
	data = new int *[row];
	for (int i = 0; i < row; i++)
	{
		data[i] = new int[col];
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			data[i][j] = 0;
		}
	}
}

Matrix::Matrix(Matrix & a)
{
	row = a.row;
	col = a.col;
	data = new int *[row];
	for (int i = 0; i < row; i++)
	{
		data[i] = new int[col];
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			data[i][j] = a.data[i][j];
		}
	}
}

void Matrix::setRow(int r)
{
	row = r;
}

void Matrix::setCol(int c)
{
	col = c;
}

int Matrix::getCol() const
{
	return col;
}

int Matrix::getRow()const
{
	return row;
}

int & Matrix::at(const int r, const int c)
{
	return data[r][c];
}

//void setMatrix()
//{
//	data = new int *[row];
//	for (int i = 0; i < row; i++)
//	{
//		data[i] = new int[col];
//	}
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			data[i][j] = 0;
//		}
//	}
//}

void Matrix::printMatrix()
{
	cout << "\n";
	for (int i = 0; i < row; i++)
	{
		cout << "|";

		for (int j = 0; j < col; j++)
		{
			cout << " " << data[i][j] << " ";
		}
		cout << "|\n";
	}
	cout << "|\n\n";

}

int Matrix::IsIdentety() const
{
	if (row == col)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (i != j)
				{
					if (data[i][j] != 0)
						return -1;
				}
				else if (i == j)
				{
					if (data[i][j] != 1)
					{
						cout << j << i << "\n";
						return -2;
					}
				}
			}
		}
	}
	return 1;
}
bool Matrix::isIdentity()
{
	bool flag = true;
	if (col == row)
	{
		for (int i = 0; i <row; i = i + 1)
		{
			if (data[i][i] == 1)
				flag = true;
			else
				return false;
			for (int j = 0; j < col; j = j + 1)
			{
				if (data[i][j] != 0)
					return false;
			}
		}
	}
	return true;
}
Matrix & Matrix::getClone(const Matrix & m)
{
	Matrix clone{ m.getRow(),m.getCol() };
	for (int i = 0; i < m.getRow(); i = i + 1)
	{
		for (int j = 0; j < m.getCol(); j = j + 1)
		{
			data[i][j] = m.data[i][j];
		}
	}

	return clone;
}
bool Matrix::operator==(const Matrix & a)
{
	if (!(a.getCol() == col&&a.getRow() == row))
		return false;
	else
		for (int i = 0; i < row; i = i + 1)
		{
			for (int j = 0; j < col; j = j + 1)
			{
				if (!(a.data[i][j] == data[i][j]))
					return false;
			}
		}
	return true;
}
bool Matrix::operator !=(const Matrix & a)
{
	return !(*this == a);
}
Matrix  Matrix::transpose()
{
	Matrix trans(row, col);
	for (int i = 0; i < row; i = i + 1)
	{
		for (int j = 0; j < col; j = j + 1)
		{
			trans.data[j][i] = data[i][j];
		}
	}
	return trans;
}
bool Matrix::isSymmetric()
{
	if ((col != row))
		return false;
	Matrix x(transpose());
	return ((*this) == x);
}
Matrix  Matrix:: operator +(const Matrix & a)
{
	Matrix sum(row, col);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{

			sum.data[i][j] = a.data[i][j] + ((*this).data[i][j]);

		}

	}
	//sum.printMatrix();
	return  sum;
}
Matrix  Matrix:: operator -(const Matrix & a)
{
	Matrix sub(row, col);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{

			sub.data[i][j] = a.data[i][j] - ((*this).data[i][j]);

		}

	}
	//sub.printMatrix();
	return  sub;
}
Matrix  Matrix::operator =(const Matrix & a)
{
	this->~Matrix();

	int c = this->col;
	int r = this->row;
	int **ptr = new int *[row];
	for (int i = 0; i < row; i++)
	{
		ptr[i] = new int[col];
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{

			ptr[i][j] = a.data[i][j];
		}

	}
	this->col = c;
	this->row = r;
	this->data = ptr;
	for (int i = 0; i < row; i++)
	{
		data[i] = ptr[i];
	}
	return *this;
}
Matrix  Matrix::operator *(Matrix & a)
{
	if (a.getCol() == row)
	{
		Matrix mul(col, a.row);
		for (int i = 0; i < a.row; i = i + 1)
		{
			for (int j = 0; j < a.col; j = j + 1)
			{
				for (int k = 0; k < row; k = k + 1)
				{
					mul.data[i][j] = (a.data[i][j])*(data[k][i]) + mul.data[i][j];
				}
			}
		}
		return mul;
	}
}
Matrix  Matrix::operator *(int a)
{

	Matrix mul(row, col);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			mul.data[i][j] = data[i][j] * a;
		}
	}
	return mul;

}
bool Matrix::isRectangular()
{
	return (row != col);
}

bool Matrix::isDiagonal()
{
	if (isRectangular())
		return false;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (data[i][j] != 0 && i != j)
				return false;
			if (i == j&&data[i][j] == 0)
				return false;
		}
	}
	return true;
}

bool Matrix::isNull()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (data[i][j] != 0)
				return false;
		}
	}
	return true;
}

bool Matrix::isLowerTriangular()
{
	if (isRectangular())
		return false;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if ((data[i][j] != 0 && i > j) || (data[i][j] == 0 && i <= j))
			{
				return false;
			}
		}
	}
	return true;
}

bool Matrix::isUpperTriangular()
{
	if (isRectangular())
		return false;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if ((data[i][j] != 0 && i > j) || (data[i][j] == 0 && i <= j))
			{
				return false;
			}
		}
	}
	return true;
}

bool Matrix::isTriangular()
{
	if ((*this).isLowerTriangular() || ((*this).isUpperTriangular()))
		return true;
	return false;
}
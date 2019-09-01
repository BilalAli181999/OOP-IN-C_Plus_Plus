#include "matrix.h"
#include<iostream>
using namespace std;


 matrix::matrix()
{
	row = 0;
	col = 0;
}

  matrix::matrix(int r, int c)
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

  matrix::matrix(matrix & a)
{
	row = a.row;
	col = a.col;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			data[i][j] = a.data[i][j];
		}
	}
}

  void matrix::setRow(int r)
{
	row = r;
}

  void matrix::setCol(int c)
{
	col = c;
}

  int matrix::getCol() const
{
	return col;
}

  int matrix::getRow()
{
	return row;
}

  int & matrix::at(const int r, const int c)
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

  void matrix::printMatrix()
{
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

  int matrix::IsIdentety() const
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

   bool matrix::isRectangular()
  {
	  return (row != col);
  }

   bool matrix::isDiagonal()
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

   bool matrix::isNull()
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

   bool matrix::isLowerTriangular()
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

  bool matrix::isUpperTriangular()
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

 bool matrix::isTriangular()
  {
	  if ((*this).isLowerTriangular() || ((*this).isUpperTriangular()))
		  return true;
	  return false;
  }

  matrix & matrix::add(matrix & a)
{
	matrix sum(row, col);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{

			sum.data[i][j] = a.data[i][j] + data[i][j];

		}

	}
	return sum;
}

  matrix & matrix::multiply(matrix & a)
{
	if (a.getCol() == row)
	{
		matrix mul(col, a.row);
		for (int i = 0; i < a.row; i = i + 1)
		{
			for (int j = 0; j < a.col; j = j + 1)
			{
				for (int k = 0; k < row; k = k + 1)
				{
					mul.data[i][j] = (data[i][j])*(a.data[k][i]) + mul.data[i][j];
				}
			}
		}
		return mul;
	}
}

  bool matrix::isIdentity()
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

  matrix & matrix::getClone(matrix & m)
{
	matrix clone{ m.getRow(),m.getCol() };
	for (int i = 0; i < m.getRow(); i = i + 1)
	{
		for (int j = 0; j < m.getCol(); j = j + 1)
		{
			data[i][j] = m.data[i][j];
		}
	}

	return clone;
}

  bool matrix::isEqual(matrix a)
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
}

  matrix & matrix::transpose()
{
	matrix trans(row, col);
	for (int i = 0; i < row; i = i + 1)
	{
		for (int j = 0; j < col; j = j + 1)
		{
			trans.data[j][i] = data[i][j];
		}
	}
	return trans;
}

  bool matrix::isSymmetric()
{
	matrix x = transpose();
	return isEqual(x);
}

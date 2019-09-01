#ifndef MATRIXOPERATOROVERLOAD_H
#define MATRIXOPERATOROVERLOAD_H
#include<istream>
#include<ostream>
#include<iostream>
using namespace std;
class Matrix
{
private:
	int row;
	int col;
	int **data;
	Matrix & makeIdentety(int r, int c)
	{
		Matrix i(r, c);
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				data[i][j] = 1;
			}
		}
	}
public:
	/*int & operator() (int a, int b)
	{
		return data[a][b];
	}*/

	Matrix();
	Matrix(int r, int c);
	Matrix(Matrix & a);
	void setRow(int r);
	void setCol(int c);
	int getCol()const;
	int getRow()const;
	int & at(const int r, const int c);
	void printMatrix();
	Matrix  operator *(int a);

	~Matrix()
	{
		for (int i = 0; i < row; i++)
		{
			delete[]
				data[i];
		}
		delete[] data;
		data = 0;
	}

	int IsIdentety()const;
	//Matrix & add(Matrix &a);
	//Matrix &multiply(Matrix &a);
	bool isRectangular();
	bool isDiagonal();
	bool isNull();
	bool isLowerTriangular();
	bool isUpperTriangular();
	bool isTriangular();
	bool isIdentity();
	Matrix & getClone(const Matrix & m);
	bool operator !=(const Matrix & a);
	bool operator==(const Matrix & a);
	Matrix transpose();
	bool isSymmetric();
	bool isSkewSymmetric()
	{
		if ((row != col))
			return false;
		return (*this == (((*this).transpose())*(-1)));
	}
	Matrix   operator +(const Matrix & a);
	Matrix  operator -(const Matrix & a);
	Matrix  operator =(const Matrix & a);
	Matrix  operator *(Matrix & a);
	friend ostream & operator<<(ostream & os, Matrix &ref);
	friend istream & operator >> (istream & is, Matrix &ref);

	/*int getMinRow(int row)
	{
	if (data = 0)
	exit(0);
	int max = data[row][0];
	for (int i = 0; i < col; i++)
	{
	if (data[row][i] < max)
	max = data[row][i];
	}
	return max;

	}
	int rowGCD(int r, int c)
	{
	if (r < c)
	{
	int temp = c;
	c = r;
	r = temp;
	}
	int rem = r%c;
	if (rem == 0)
	return c;
	rowGCD(c, rem);

	}
	int scalarMultipleRow(int row1)
	{
	bool flag = true;
	int j = 0;
	int gcd = rowGCD(data[row1][j], data[row1][j + 1]);
	while (j < col - 2)
	{
	j++;
	if (!(gcd == rowGCD(data[row1][j], data[row1][j + 1])))
	return 1;
	}
	return gcd;

	}
	void scalarMultiplyRow(int row1,int scalar)
	{
	for (int j = 0; j < col; j++)
	{
	data[row1][j] = data[row1][j] * scalar;
	}
	cout << "multiply R" << row1 << " * " << scalar << "\n";
	}
	void intToFraction(Fraction **ref)
	{

	for (int i = 0; i < row; i++)
	{
	for (int j = 0; j < col; j++)
	{

	ref[i][j]=((*this).data[i][j],1);

	}

	}
	}
	void addRows(int distinationRow, int row2)
	{
	for (int j = 0; j < col; j++)
	{
	data[distinationRow][j] = data[row2][j]+data[distinationRow][j];
	}
	cout << "~ R" << distinationRow << " + R" << row2 << "\n";
	}

	/*//*void RREF()
	//{
	//	for (int i = 0; i < row; i++)
	//	{
	//		int div = scalarMultipleRow(i);
	//		for (int j = 0; j < col; j++)
	//		{
	//			data[i][j] = data[i][j] / div;
	//		}
	//		Fraction **f;
	//		f = new Fraction *[row];
	//		for (int i = 0; i < row; i++)
	//		{
	//			for (int j = 0; j < col; j++)
	//			{
	//				f[i] = new Fraction[col];
	//			}
	//		}
	//		if (div != 1)
	//		{
	//			cout << "\n R" << i << " MUL by (1/" << div << ")";
	//			for (int i = 0; i < row; i++)
	//			{
	//				for (int j = 0; j < col; j++)
	//				{
	//					if ((i == j)&&(f[i][j]>(Fraction)(1,1)))
	//					{
	//						f[i][j] = f[i][j]/ f[i][j];
	//					}
	//					if (i > j)
	//					{
	//						f[i][j] * f[0][0];
	//					}
	//				}

	//			}
	//		}

	//			//for (int j = 0; j < col; j++)
	//		//{
	//		//	if (i == j)
	//		//	{
	//		//		if((data[i][j] != 1));
	//		//		{
	//		//			for (int k = 0; k < row; k++)
	//		//			{
	//		//				for (int m = 0; m < row; m++)
	//		//				{
	//		//					if ((data[k][0] + data[m][0]) == 1 || (data[k][0] + data[m][0] == -1))
	//		//					{
	//		//						addRows(k, m);
	//		//					}
	//		//					if ((data[k][0] - data[m][0]) == 1 || (data[k][0] - data[m][0] == -1))
	//		//					{
	//		//						scalarMultiplyRow(m, -1);
	//		//						addRows(k, m);
	//		//					}
	//		//				}
	//		//			}
	//		//		}
	//		//	}
	//		//}

	//	}
	//}
	*/
};

#endif // !Matrix_H

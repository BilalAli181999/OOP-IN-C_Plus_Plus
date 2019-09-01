#ifndef MATRIX_H
#define MATRIX_H

class matrix
{
private:
	int row;
	int col;
	int **data;
public:

	matrix();
	matrix(int r, int c);
	matrix(matrix & a);
	void setRow(int r);
	void setCol(int c);
	int getCol()const;
	int getRow();
	int & at(const int r, const int c);

	void printMatrix();
	int IsIdentety() const;
	bool isRectangular();
	bool isDiagonal();
	bool isNull();
	bool isLowerTriangular();
	bool isUpperTriangular();
	bool isTriangular();

	matrix & add(matrix &a);
	matrix &multiply(matrix &a);
	bool isIdentity();
	matrix & getClone(matrix & m);

	bool isEqual(matrix a);
	matrix &transpose();
	bool isSymmetric();
	

};


#endif // !MATRIX_H

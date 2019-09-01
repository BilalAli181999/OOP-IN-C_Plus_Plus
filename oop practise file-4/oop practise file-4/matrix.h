using namespace std;
class matrix
{
private:
	int **data;
	int rows;
	int cols;
public:
	matrix()
	{
		cout << "constructor<<\n";
		rows = 3;
		cols = 3;
		data = new int *[cols];
		for (int i = 0; i < cols; i++)
		{
			data[i] = new int[rows];
		}
	}
	int & at(int r, int c)
	{
		return data[r][c];
	}
	void printMatrix()
	{
		cout << "\n";
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				cout << data[i][j] << " ";
			}
			cout << "\n";
		}
	}
	bool isIdentity()
	{
		bool status = 1;
		for (int i = 0; i < rows && status; i++)
		{
			for (int j = 0; j < cols && status; j++)
			{
				if (i != j)
				{
					if (data[i][j] != 0)
					{
						status = 0;
					}
				}
				if (i == j)
				{

					if (data[i][j] != 1)
					{
						status = 0;
					}
				}
			}

		}
		return status;
	}
	bool isRectangular()
	{
		if (rows != cols)
			return true;
	}
	bool isDiagonal()
	{
		bool status1 = 1, status = 1;
		for (int i = 0; i < rows && status; i++)
		{
			for (int j = 0; j < cols && status; j++)
			{
				if (i != j)
				{
					if (data[i][j] != 0)
					{
						status = 0;
					}
				}
				if (i == j)
				{

					if (data[i][j] != 1)
					{
						status1 = 0;
					}
				}
			}

		}
		if (status && !status1)
		{
			return true;
		}
	}
	bool isNullMatrix()
	{
		bool status = 1;
		for (int i = 0; i < rows && status; i++)
		{
			for (int j = 0; j < cols && status; j++)
			{
				if (data[i][j] != 0)
					status = 0;
			}
		}
		return status;
	}
	bool isLowerTriangular()
	{
		bool status1 = 1, status2 = 1;
		for (int i = 0; i < rows && status1; i++)
		{
			for (int j = 0; j < cols && status1; j++)
			{
				if (i > j)
				{
					if (data[i][j] != 0)
					{
						status1 = 0;
					}

				}

			}
		}
		return status1;
	}
	bool isUpperTriangular()
	{
		bool status1 = 1, status2 = 1;
		for (int i = 0; i < rows && status1; i++)
		{
			for (int j = 0; j < cols && status1; j++)
			{
				if (i < j)
				{
					if (data[i][j] != 0)
					{
						status1 = 0;
					}

				}

			}
		}
		return status1;
	}
	matrix transpose()
	{
		
		matrix a;
		for (int i = 0; i < a.rows; i++)
		{
			for (int j = 0; j < a.cols; j++)
			{
				a.data[i][j] = data[j][i];
			}
		}
		

		return a;
	}
	matrix  add(matrix & a)
	{
		matrix sum;

		for (int i = 0; i < a.rows; i++)
		{

			for (int j = 0; j < a.cols; j++)
			{
				sum.data[i][j] = a.data[i][j] + data[i][j];

			}
		}
		
		return sum;

	}
	matrix(matrix & ref)
	{
		rows = ref.rows;
		cols = ref.cols;
		
		data = new int*[cols];
		cout << "copy constructor";
		for (int i = 0; i < cols; i++)
		{
			data[i] = new int[rows];
		}
		for (int i = 0; i < ref.rows; i++)
		{

			for (int j = 0; j < ref.cols; j++)
			{
				data[i][j] = ref.data[i][j];

			}
		}
		
		
	}



	~matrix()
	{
		cout << "destructor\n";
		for (int i = 0; i < rows; i++)
		{
			delete[]data[i];
		}
		
	}
	
};

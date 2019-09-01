#include<iostream>
using namespace std;
//int main()
//{
//	cout << "Enter a number";
//	int n;
//	cin >> n;
//	int r,rev=0,t;
//	t = n;
//	while (t != 0)
//	{
//		r = t % 10;
//		t = t / 10;
//		rev = (rev * 10) + r;
//	}
//	if (rev == n)
//		cout << "\n Palindrome";
//	else
//		cout << "\n Not palindrome";
//}


//int fact(int n)
//{
//	static int sum = 1;
//	if (n == 0)
//		return sum;
//	else if(n>0)
//	{
//		sum = sum * n;
//			fact(n - 1);
//return sum;
//	}
//}
//int main()
//{
//cout<<	fact(5);
//}


//int fact(int n)
//{
//	if (n == 0)
//		return 0;
//	if (n == 1)
//		return 1;
//	else
//	{
//		return fact(n - 1) + fact(n - 2);
//	}
//}
//int main()
//{
//	cout << fact(10);
//}



//int fact(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//
//	else
//	{
//		return n*fact(n - 1);
//	}
//	
//	
//}
//int main()
//{
//	cout << fact(5);
//}


//int gcd(int x,int y,int n)
//{
//	if (x%y == 0)
//	{
//		return y;
//	}
//	else
//	{
//	return	gcd(x,x%y,n);
//	}
//
//}
//int main()
//{
//	cout << gcd(81,18,2);
//}




//double sum(double *a, int no,int c)
//{
//	
//	
//	if (c==no)
//	{
//		return a[c];
//	}
//	else
//	{
//		return a[c] + sum(a, no, c+1);
//	}
//}
//
//int main()
//{
//
//	double arr[10] = {1,1,1,1,1,1,1,1,1,1};
//	int s=sum(arr, 10,0);
//	cout << s;
//}




//int mul(int x, int y)
//{
//	if(y==0)
//	{
//		return 1;
//	}
//	else if (y == 1)
//	{
//		return x;
//	}
//	else
//	{
//		return x + mul(x, y - 1);
//	}
//}
//
//int main()
//{
//	cout<<mul(7, 9);
//}


//
//int pow(int n1, int n2)
//{
//	if (n2 == 1)
//	{
//		return n1;
//	}
//	else
//	{
//		return n1*pow(n1, n2 - 1);
//	}
//}
//int main()
//{
//	cout << pow(3, 3);
//}


//int find(int *a, int index,int x)
//{
//	bool status = true;
//	while (status)
//	{
//		
//		if (a[index] == x)
//		{
//			status = false;
//			return index;
//		}
//		else if (a[index] > x)
//		{
//			if (index > 0)
//				return find(a, index - 1, x);
//		}
//		else if (a[index] < x)
//		{
//			if (index <= 9)
//			{
//				return find(a, index + 1, x);
//			}
//
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int ind = (10 / 2)-1;
//
//	int x;
//	cout << "Enter Element you want?\n";
//	cin >> x;
//	cout << find(arr, ind, x);
//
//}

//int evenElements(int *a,int noE)
//{
//	
//	if (noE == 1)
//	{
//		if (a[noE-1] % 2 == 0)
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	else 
//	{
//		if (a[noE - 1] % 2 == 0)
//			return 1 + evenElements(a, noE - 1);
//		else
//			return evenElements(a, noE - 1);
//	}
//}
//int main()
//{
//	int arr[10] = {1,2,3,3,5,6,7,8,9,10 };
//cout<<	evenElements(arr, 10);
//}



//int superDigit(int n,int l)
//{
//	if (l==1)	
//	{
//		return n;
//	}
//	else
//	{
//		int d = pow(10, l - 1);
//		return (n /d+superDigit((n)%d,l-1));
//	}
//}
//int main()
//{
//	cout<<superDigit(1987,4);
//}





//int pow(int n, int p)
//{
//	if (p == 0)
//		return 1;
//	else
//	{
//		return n*pow(n, p - 1);
//	}
//
//}
//int main()
//{
//	cout << pow(2, 3);
//}



//int max(int *a, int l)
//{
//	if(l == 2)
//	{
//		if (a[l - 1] > a[l - 2])
//			return a[l - 1];
//		else
//			return a[l - 2];
//    }
//	else
//	{
//		if (a[l - 1] > max(a, l - 1))
//			return a[l - 1];
//		else
//			return max(a, l - 1);
//	}
//}
//int main()
//{
//	int arr[10] = { 13,2,34,4,5,66,7,188,19,10 };
//	cout << max(arr, 10);
//}




//void print(int *a, int s)
//{
//	static int c = s;
//	cout << a[c-s]<<" ";
//	if (s == 1)
//	{
//		exit(0);
//	}
//	else
//	{
//	 return print(a, s - 1);
//	}
//
//}
//int main()
//{
//	int arr[10] = { 13,2,34,4,5,66,7,188,19,10 };
//	print(arr, 10);
//}


//bool prime(int n,int i=2)
//{
//
//	if(n==2)
//	{
//		return 1;
//	}
//	
//	else if (n%i != 0)
//	{
//		return 1;
//	}
//	else if (n%i == 0)
//	{
//		return 0;
//	}
//	else 
//	{
//		prime(n, i + 1);
//	}
//
//}
////int main()
////{
////	if (prime(30))
////		cout << "\n YES";
////	else
////		cout << "\n No";
////}

//int binarySearch(int *arr,int s,int k)
//{
//
//	
//if (arr[s] == k)
//{
//	return s;
//}
//else if (arr[s] < k)
//{
//	return binarySearch(arr, s=s+1, k);
//}
//else if(arr[s]>k)
//{
//	return binarySearch(arr, s=s-1, k);
//}
//
//}
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	cout<<binarySearch(a, 4,9);
//}


//int superDigit(int num, int l)
//{
//	if (l == 1)
//	{
//		return num;
//	}
//	else
//	{
//		int i = pow(10 , l - 1);
//		return (num/i)  +superDigit(num%i,l-1);
//	}
//}
//int main()
//{
//	cout << superDigit(1234, 4);
//}

#include<cstdlib>
#include<ctime>
int main()
{
	srand(time(0));
	int a[20];
	for (int i = 0; i < 20; i++)
	{
		a[i] = rand()% 10;
		cout << a[i]<<" ";
	}
	cout << "\n\n";
	int s[10] = {};
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (a[i] == j)
			{
				s[j]++;
			}
		}
	}

		


	for (int i = 0; i < 10; i++)
	{
	for (int j = 0; j < s[i]; j++)
		{
			cout << i<<" ";
		}
	}
}
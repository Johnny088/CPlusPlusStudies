

#include <iostream>
using namespace std;
int max(int a,int b)
{
	return (a > b) ? a : b;

}
int max(int a, int b, int c)
{
	if (a > b && a > c)
	{
		return a;

	}
	if (c > a && c > b)
	{
		return c;

	}
	if (b > a && b > c)
	{
		return b;

	}


}
int min(int a, int b)
{
	return (a < b) ? a : b;

}
int min(int a, int b, int c)
{
	if (a < b && a < c)
	{
		return a;

	}
	if (c < a && c < b)
	{
		return c;

	}
	if (b < a && b < c)
	{
		return b;

	}
}
template <typename T>
T average(T a[], int size)
{
	T sum = 0;
	for (int i =0; i<size; i++)
	{
		sum += a[i];
	}
	return  sum / size;
}

int main()
{
	cout << "task1 Need to find min and max of numbers\n";
	cout << "It's max of two numbers\n";
	int a = max(11, 7);
	cout << a << endl;
	cout << "It's max of three numbers\n";
	int b = max(11, 25,15);
	cout << b << endl;
	cout << "It's min of two numbers\n";
	int e = min(11, 7);
	cout << e << endl;
	cout << "It's min of three numbers\n";
	int f = min(11, 25, 15);
	cout << f << endl;
	cout << "task2 Need to find the average  \n";
	const int size = 6;
	int arr1[size] = { 25,10,15,16,16,16 };
	float arr2[size] = { 25.02,35.25,10.52,15.15,16.65,16.25 };
	cout << "Average  is: " << average(arr1, size);
	cout << endl;
	cout << "Average  is: " << average(arr2, size);
	cout << endl;
}


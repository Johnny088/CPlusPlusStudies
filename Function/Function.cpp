#include <iostream>
#include <iomanip>
using namespace std;
void triangle(int h, int w)
{
	/*h *= 2;*/
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			
			cout << "* ";

		}
		cout << endl;
	}
}
void fuctorial(int a)
{
	int multy = 1;
	for (int i = 1; i <= a; i++)
	{
		multy *= i;
	}
	cout << multy << endl;
}
void issimple(int a)
{
	int count = 0;
	for (int i = (a / 2) + 1; i > 1; i--)
	{

		if (a % i == 0)
		{
			count += 1;
		}
	}
	if (count > 1)
	{
		cout << "The number is NOT simple\n";
	}
	else
	{
		cout << "number is simple";

	}

}
int CubeOfNumber(int number)
{
	number = number * number * number;
	return number;
}
int max(int a, int b)
{
	return (a > b) ? a : b;
}
int IsPositive(int a)
{
	if (a >= 0)
	{
		return true;
	}
	else
		return false;
}
void minmax(int a[], int size)
{
	int Min = 2147483647;
	int Max = -2147483647;
	int min = Min;
	int max = Max;
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
		if (min > a[i])
		{
			min = a[i];
		}
		if (max < a[i])
		{
			max = a[i];
		}
	}
	cout << endl << "the min of the array is: " << min << "\nThe max of the array is: " << max;

}
void main()
{
	cout << "Task1. Need to show the rectangle, given high and width\n";
	int SizeA;
	int SizeB;
	cout << "Enter the size a: ";
	cin >> SizeA;
	cout << "Enter the size b: ";
	cin >> SizeB;
	triangle(SizeA,SizeB);
	cout << endl << "Show fuctorial of number:\n Enter the number\n";
	int number1;
	cin >> number1;
	fuctorial(number1);
	cout << endl << "task 3 Determine if the number is simple\n";
	cout << endl << "Enter the number\n";
	number1 = 0;
	cin >> number1;
	issimple(number1);
	cout << endl << "task4\n\tshow cube of the number\n Enter your number ";
	number1 = 0;
	cin >> number1;
	cout << endl << CubeOfNumber(number1) << endl;
	cout << "task5\n\tShow the max of two numbers\n";
	cout << "Enter the first number: ";
	cin >> number1;
	 int number2;
	cout << "Enter the second number: ";
	cin >> number2;
	cout << endl << max(number1, number2);
	cout << "\ntask6\n\tIf the given number is positive return True, otherwise false\n";
	cout << "Enter the number: ";
	cin >> number1;
	cout << endl << IsPositive(number1);
	cout << "\ntask7\n\tGiven array. Need to determine min&max\n";
	const int size = 10;
	int arr1[size] = { 2,95,65,23,5,98,-45,65,99,59 };
	minmax(arr1, size);
}
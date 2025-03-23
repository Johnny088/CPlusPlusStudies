#include <iostream>;
#include <iomanip>;
using namespace std;
#define size 10
template <typename T>
void FillOut(T array[])
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 81-40.1;
	}
	cout << endl;
}
template <typename T>
void FillOut(T array[size][size])
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			array[i][j] = rand() % 81 - 40.1;
		}
		
	}
	cout << endl;
}
template <typename T>
void PrintArray(T array[])
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}
template <typename T>
void PrintArray(T array[size][size])
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << setw(5) << array[i][j] << " ";
		}
		cout << "\n\n";
		
	}
	cout << endl;
}
template <typename T>
void AmountOfNegative(T array[])
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] < 0)
			count++;
	}
	cout << "The negative numbers in the array are: " << count << " times." << endl;
}
template <typename T>
void AmountOfPositive(T array[])
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] > 0)
			count++;
	}
	cout << "The positive numbers in the array are: " << count << " times." << endl;
}
template <typename T>
void AmountOfZero(T array[])
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] == 0)
			count++;
	}
	cout << "The zero numbers in the array are: " << count << " times." << endl;
}

template <typename T>
void MaxOfDiagonale(T array[size][size])
{
	T max = array[0][0];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (array[i] == array[j] && array[i][j]>max)
			{
				max = array[i][j];
			}
		}
	}
	cout << "The max of main diagonale is: " << max << endl;
}

template <typename T>
void MinOfDiagonale(T array[size][size])
{
	T min = array[0][0];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (array[i] == array[j] && array[i][j] < min)
			{
				min = array[i][j];
			}
		}
	}
	cout << "The min of main diagonale is: " << min << endl;
}
int main()
{
	srand(time(NULL));
	cout << "homework for extra points\n Task1. Need to make a functions to determine amount of positive, negative and zero numbers\n";
	int array[size] = {};
	FillOut(array);
	PrintArray(array);
	AmountOfNegative(array);
	AmountOfPositive(array);
	AmountOfZero(array);
	cout << "array float" << endl;
	float array2[size];
	FillOut(array2);
	PrintArray(array2);
	AmountOfNegative(array2);
	AmountOfPositive(array2);
	AmountOfZero(array2);
	cout << "Task2. Need to make some functions such as filling a square matrix out, showing the matrix on the screen, detetermination  min$max of main diaginales\n";
	int array3[size][size];
	FillOut(array3);
	PrintArray(array3);
	MaxOfDiagonale(array3);
	MinOfDiagonale(array3);
	cout << "Sorry, but sort is too dificult for me at the moment, and today is dedline, and I'm not sure that I can do the task number 3.\n";
}

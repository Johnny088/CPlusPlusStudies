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
	cout << "Task2. Need to make some functions such as filling a square matrix out, showing the matrix on the screen, detetermination  min$max on main and side diagonales\n";
	int array3[size][size];
	FillOut(array3);
	PrintArray(array3);

}

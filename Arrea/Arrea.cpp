#include <iostream>
using namespace std;
int main()
{
	/*cout << "creating arrea for 10 elements\n";
	unsigned long long multy = 1;
	const int size = 10;
	int array1[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the" << i + 1 << "Element: \n";
		cin >> array1[i];
		multy *= array1[i];
	}
	
	cout << endl << array1 << endl;
	

	for (int i = 0; i < size; i++)
	{
		cout << array1[i] << " ";
	}
	cout << endl << "Multiply all numbers is: " << multy << endl;
	const int size2 = 7;
	int array2[size2];
	int sumplus = 0;
	int sumnegative = 0;
	cout << "task number 2\n";
	for (int i = 0; i < size2; i++)
	{
		cout << "Enter the" << i + 1 << "Element: \n";
		cin >> array2[i];
		if (array2[i] > 0)
		{
			sumplus += array2[i];
		}
		else
		{
			sumnegative += array2[i];

		}
	}
	cout << endl << "Sum positive numbers is: " << sumplus << endl;
	cout << endl << "Sum negative numbers is: " << sumnegative << endl;
	cout << "\ntask number 3\n";
	long array3[7] = {1512,54,5,412,8,74541,541};
	long sum = 0;
	for (int i = 0; i < 7; i++)
	{
		if (array3[i] % 2 == 0)
		{
			sum += array3[i];
		}
	}
	cout << "\nSum even elements is: " << sum << endl;
	cout << "\ntask number 4\n";
	long long array4[30] = {1};
	for (int i = 1; i < 30; i++)
	{
		array4[i] = 2 * (array4[i - 1]);
		
	}
	for (int i = 0; i < 30; i++)
	{
		cout << array4[i] << " ";

	}
	cout << "\n in the revers way this area is: \n";
	for (int i = 29; i >= 0; i--)
	{
		cout << array4[i] << " ";

	}
	cout << "\ntask number 5\n";
	int array5[10] = {-1,-5,-6,-9,-9,-9,-9,-9,-9,-9};
	for (int i = 0; i < 10; i++)
	{
		cout << array5[i] << " ";

	}
	cout << "\n positive arrayis:  \n";
	for (int i = 0; i < 10; i++)
	{
		array5[i] *= -1;
		cout << array5[i] << " ";

	}*/
	cout << endl << "Homework\n \tTask1: need to show n of number[1], 2n of number[2] 3n of number[3]\n";
	const int SIZE = 3;
	int array6[SIZE] = { 1,2,3 };
	int n;
	cout << "Enter the variable [n]\n";
	cout << "Vatiable 'n' is : "; 
	cin >> n;
	int n2 = n;
	/*for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < n; j++)
		{
			if (j == 0)
			{
				cout << array6[j];
			}
		}*/
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << i;
		}
		n +=n2;
		cout << endl;
	}
	cout << "task2. \n\t show the square\n";
	int square_size;
	cout << "the size of the square is: ";
	cin >> square_size;

	for (int i = 0; i < square_size; i++)
	{
		for (int j = 0; j < square_size; j++)
		{
			if (i == j || i + j == square_size - 1)
			{
				cout << 0 << " ";
			}
			else
			{
				cout << 1 << " ";
			}
		}
		cout << endl;
	}
	cout << endl;
	cout << "task3. \n\tNeed to show numbers 10 times '10', 9 times '9' and so on until the number '1'\n";
	int mount = 10;
	int sum = 0;
	for (int i = 10; i >= 1; i--)
	{
		for (int j = 1; j <=mount; j++)
		{
			cout << i;
			sum += i;
		}
		mount--;
		cout << endl;
	}
	cout << endl << "the sum of the numbers is: " << sum << endl;
	cout << "task4. \n\t\Need to show 15 mount of strings and each even string has 8 numbers, and value of the numbers has to be equal to the number of string\n\t\tOtherwise mount of numbers are 10\n";
	for (int i = 0; i < 15; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < 8; j++)
			{
				cout << i+1;
			}
			cout << endl;

		}
		
		else
		{
			for (int j = 0; j < 10; j++)
			{
				cout << i+1;
			}
			cout << endl;

		}
	}
	cout << "task5. \n\t\Need to show 30 strings. Odd strings have numbers from 1 to the number of the string, even strings have 5 '1' \n\t\t\n";
	for (int i = 1; i <= 30; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < 5; j++)
			{
				cout << 1;
			}
			cout << endl;

		}

		else
		{
			for (int j = 1; j <= i; j++)
			{
				cout << j << " ";
			}
			cout << endl;

		}
	}
	cout << "task6. \n\t\Need to show the mulriplicatin table from 1 to 10\n";
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}
	cout << "task7. \n\t\Need to find each number from A to B wich milpiples of 12.\n";
	int A;
	int B;
	int C;
	cout << "Enter the first number of range: ";
	cin >> A;
	C = A;
	cout << "Enter the second number of range: ";
	cin >> B;
	if (A > B)
	{
		A = B;
		B = C;

	}
	for (int i = A; i <= B; i++)
	{
		if (i % 12 == 0)
		{
			cout << i << " ";
		}
		
	}
	cout << endl;
	cout << "task8. \n\t\Given salary of the year, and the range. need determine min&max salary of this range.\n";
	const int size = 12;
	float array10[size];
	int month_start;
	int month_end;
	for (int i = 1; i <= size; i++)
	{
		cout << "Enter the salary of the " << i << " month - ";
		cin >> array10[i-1];
	}
	for (int i = 0; i < size; i++)
	{
		cout << "The salary of the month " << i << " is: " << array10[i] << endl;
	}
	cout << endl << "enter the range of months to know min&max salary of that time\n";
	cout << "Enter the 1 month: ";
	cin >> month_start;
	cout << "Enter the 1 month: ";
	cin >> month_end;
	int min = month_start;
	int max = month_start;
	for (int i = month_start; i <= month_end; i++)
	{
		if (array10[i]>max)
		{
			max = i;
		}
		if (array10[i] < min)
		{
			min = i;
		}
	}
	cout << "Max of this time is " << max << endl;
	cout << "Min of this time is " << min << endl;

}
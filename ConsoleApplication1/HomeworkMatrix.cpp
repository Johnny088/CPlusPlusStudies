#include <iostream>
#include <iomanip>
using namespace std;
int main()

{
	srand(time(NULL));
	cout << "homework1: \n";
	const int row = 3;
	const int col = 4;
	int count = 0;
	int array[row][col] = {};
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			array[i][j] = rand() % 10;
			cout << array[i][j] << "  ";
			if (array[i][j] == 0)
				count++;
		}
		cout << endl;
	}
	cout << " the mount of number '0' is: " << count << endl;
	cout << endl;
	const int size01 =10;
	/*cout << "Enter the size: ";
	cin >> size01;*/
	int max01 = -2147483647;
	int max = max01;
	int array01[size01][size01];
	for (int i = 0; i < size01; i++)
	{	
		for (int j = 0; j < size01; j++)
		{
			
			if (i <= j)
			{
				
				array01[i][j] = rand() % 90 + 10;
				if (array01[i][j] > max)
				{
					max = array01[i][j];
				}
				cout << setw(2) << array01[i][j] <<" ";

			}
			else
				cout << setw(3) << " ";

		}
		cout << endl;
		
	}
	cout << endl;
	cout << "The max number in row " << max << endl;

	cout << "Task2" << endl;
	max = max01;
	for (int i = 0; i < size01; i++)
	{
		for (int j = 0; j < size01; j++)
		{

			if (i >= j)
			{

				array01[i][j] = rand() % 70 + 10;
				if (array01[i][j] > max)
				{
					max = array01[i][j];
				}
				cout << setw(2) << array01[i][j] << " ";

			}
			else
				cout << setw(3) << " ";

		}
		cout << endl;

	}
	cout << endl;
	cout << "The max number in row " << max << endl;

	cout << "Task3" << endl;
	max = max01;
	for (int i = 0; i < size01; i++)
	{
		for (int j = 0; j < size01; j++)
		{

			if (i <= j && i+j <= size01-1)
			{

				array01[i][j] = rand() % 60 + 10;
				if (array01[i][j] > max)
				{
					max = array01[i][j];
				}
				cout << setw(2) << array01[i][j] << " ";

			}
			else
				cout << setw(3) << " ";

		}
		cout << endl;

	}
	cout << endl;
	cout << "The max number in row " << max << endl;

	cout << "Task4" << endl;
	max = max01;
	for (int i = 0; i < size01; i++)
	{
		for (int j = 0; j < size01; j++)
		{

			if (i >= j && i + j >= size01 - 1)
			{

				array01[i][j] = rand() % 60 + 10;
				if (array01[i][j] > max)
				{
					max = array01[i][j];
				}
				cout << setw(2) << array01[i][j] << " ";

			}
			else
				cout << setw(3) << " ";

		}
		cout << endl;

	}
	cout << endl;
	cout << "The max number in row " << max << endl;

	cout << "Task5" << endl;
	max = max01;
	for (int i = 0; i < size01; i++)
	{
		for (int j = 0; j < size01; j++)
		{

			if (i >= j && i + j >= size01 - 1 || i <= j && i + j <= size01 - 1)
			{

				array01[i][j] = rand() % 80 + 10;
				if (array01[i][j] > max)
				{
					max = array01[i][j];
				}
				cout << setw(2) << array01[i][j] << " ";

			}
			else
				cout << setw(3) << " ";

		}
		cout << endl;

	}
	cout << endl;
	cout << "The max number in row " << max << endl;

	cout << "Task6" << endl;
	max = max01;
	for (int i = 0; i < size01; i++)
	{
		for (int j = 0; j < size01; j++)
		{

			if (i >= j && i + j <= size01 - 1 || i <= j && i + j >= size01 - 1)
			{

				array01[i][j] = rand() % 40 + 10;
				if (array01[i][j] > max)
				{
					max = array01[i][j];
				}
				cout << setw(2) << array01[i][j] << " ";

			}
			else
				cout << setw(3) << " ";

		}
		cout << endl;

	}
	cout << endl;
	cout << "The max number in row " << max << endl;

	cout << "Task7" << endl;
	max = max01;
	for (int i = 0; i < size01; i++)
	{
		for (int j = 0; j < size01; j++)
		{

			if (i >= j && i + j <= size01 - 1)
			{

				array01[i][j] = rand() % 40 + 10;
				if (array01[i][j] > max)
				{
					max = array01[i][j];
				}
				cout << setw(2) << array01[i][j] << " ";

			}
			else
				cout << setw(3) << " ";

		}
		cout << endl;

	}
	cout << endl;
	cout << "The max number in row " << max << endl;

	cout << "Task7" << endl;
	max = max01;
	for (int i = 0; i < size01; i++)
	{
		for (int j = 0; j < size01; j++)
		{

			if (i <= j && i + j >= size01 - 1)
			{

				array01[i][j] = rand() % 30 + 10;
				if (array01[i][j] > max)
				{
					max = array01[i][j];
				}
				cout << setw(2) << array01[i][j] << " ";

			}
			else
				cout << setw(3) << " ";

		}
		cout << endl;

	}
	cout << endl;
	cout << "The max number in row " << max << endl;

	cout << "Task8" << endl;
	max = max01;
	for (int i = 0; i < size01; i++)
	{
		for (int j = 0; j < size01; j++)
		{

			if (i + j <= size01 - 1)
			{

				array01[i][j] = rand() % 80 + 10;
				if (array01[i][j] > max)
				{
					max = array01[i][j];
				}
				cout << setw(2) << array01[i][j] << " ";

			}
			else
				cout << setw(3) << " ";

		}
		cout << endl;

	}
	cout << endl;
	cout << "The max number in row " << max << endl;

	cout << "Task8" << endl;
	max = max01;
	for (int i = 0; i < size01; i++)
	{
		for (int j = 0; j < size01; j++)
		{

			if (i + j >= size01 - 1)
			{

				array01[i][j] = rand() % 65 + 10;
				if (array01[i][j] > max)
				{
					max = array01[i][j];
				}
				cout << setw(2) << array01[i][j] << " ";

			}
			else
				cout << setw(3) << " ";

		}
		cout << endl;

	}
	cout << endl;
	cout << "The max number in row " << max << endl;
	
}
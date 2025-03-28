#include <iostream>
#include <iomanip>
using namespace std;
void FillOut(int** parr,int rows, int colums)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < colums; j++)
		{
			parr[i][j] = rand() % 100;
		}
	}
}
void ShowArray(int** parr, int rows, int colums)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < colums; j++)
		{
			cout << setw(3) << parr[i][j] << " ";
		}
		cout << "\n";
	}
}
void CleanArr(int** parr, int rows, int colums);
void AddRowEnd(int** parr, int rows, int colums)
{
	int** parr2 = new int*[rows+1];
	for (int i = 0; i < rows+1; i++)
	{
		parr2[i] = new int[colums];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < colums; j++)
		{
			parr2[i][j] = parr[i][j];
		}
		parr2[rows][i] = 7;
	}
	ShowArray(parr2, rows + 1, colums);
	CleanArr(parr2, rows + 1, colums);
	cout << "\n";
}
void AddRowBegin(int** parr, int rows, int colums)
{
	
	int** parr2 = new int* [rows + 1];
	for (int i = 0; i < rows + 1 ; i++)
	{
		parr2[i] = new int[colums];
		
	}
	for (int i = 0; i < colums; i++)
	{
		parr2[0][i] = 7;
	}
	for (int i = 1; i < rows+1; i++)
	{
		for (int j = 0; j < colums; j++)
		{
			/*parr2[0][j] = 7;*/
			parr2[i][j] = parr[i-1][j];
		}

	}
	ShowArray(parr2, rows + 1, colums);
	CleanArr(parr2, rows + 1, colums);

}
void InsertArray(int** parr, int rows, int colums)
{
	int index;
	cout << "Enter the index: ";
	cin >> index;
	int newsize = rows + 1;
	int** parr2 = new int* [newsize];

	for (int i = 0; i < newsize; i++)
	{
		parr2[i] = new int[colums];

	}
	
	for (int i = 0; i < index; i++)
	{
		for (int j = 0; j < colums; j++)
		{
			
			parr2[i][j] = parr[i][j];
		}

	}
	for (int i = 0; i < colums; i++)
	{
		parr2[index][i] = 7;
	}
	for (int i = index+1; i < newsize; i++)
	{
		for (int j = 0; j < colums; j++)
		{

			parr2[i][j] = parr[i-1][j];
		}

	}
	ShowArray(parr2, newsize, colums);
	CleanArr(parr2, newsize, colums);
}
void DelIndex(int** parr, int rows, int colums)
{
	int index;
	cout << "Enter the index: ";
	cin >> index;
	int newsize = rows -1;
	int** parr2 = new int* [newsize];
	for (int i = 0; i < newsize; i++)
	{
		parr2[i] = new int[colums];

	}

	for (int i = 0; i < index; i++)
	{
		for (int j = 0; j < colums; j++)
		{

			parr2[i][j] = parr[i][j];
		}

	}
	
	for (int i = index + 1; i < rows; i++)
	{
		for (int j = 0; j < colums; j++)
		{

			parr2[i-1][j] = parr[i][j];
		}

	}
	ShowArray(parr2, newsize, colums);
	CleanArr(parr2, newsize, colums);
}



void CleanArr(int** parr, int rows, int colums)
{
	for (int i = 0; i < rows; i++)
	{
		delete[]parr[i];
	}
	delete[]parr;
}
int main()
{
	srand(time(0));
	int rows, colums;
	cout << "Task1.                 \nEnter the number of the rows and the number of the Colums\n";
	cin >> rows >> colums;
    int** parr = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		parr[i] = new int[colums];
	}
	FillOut(parr, rows, colums);
	ShowArray(parr, rows, colums);
	cout << "\n";
	AddRowEnd(parr, rows, colums);
	cout << "\n";
	AddRowBegin(parr, rows, colums);
	cout << "\n";
	InsertArray(parr, rows, colums);
	cout << "\n";
	DelIndex(parr, rows, colums);
	


	CleanArr(parr, rows, colums);
}


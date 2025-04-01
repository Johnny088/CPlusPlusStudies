#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;
#define size 5
void CleanArr(int** parr, int rows, int colums);
void SetColor(int color)//0-15
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void FillOut(int **parr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            parr[i][j] = rand() % 100;
        }
    }
}
void ShowArray(int** parr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(3) << parr[i][j] << " ";
        }
        cout << endl;
    }
}
void ShowArray(int** parr, int rows, int cols, int index)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (j == index)
            {
                SetColor(10); cout << setw(3) << parr[i][j] << " "; SetColor(7);
            }
            else
            {
                cout << setw(3) << parr[i][j] << " ";
            }
            
            
            
        }
        cout << endl;
    }
}
void AddColum(int** parr, int rows, int cols)
{
    cout << "Enter the index:\n";
    int index;
    cin >> index;
    int colsup = cols + 1;
    int** parr2 = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        parr2[i] = new int[colsup];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < index; j++)
        {
            parr2[i][j] = parr[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        parr2[i][index] = 7;
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = index + 1; j < colsup; j++)
        {
            parr2[i][j] = parr[i][j-1];
        }
    }
    ShowArray(parr2, rows , colsup, index);
    CleanArr(parr2, rows, colsup);
}
void DellColum(int** parr, int rows, int cols)
{
    cout << "Enter the index:\n";
    int index;
    cin >> index;
    int colsup = cols -1;
    int** parr2 = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        parr2[i] = new int[colsup];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < index; j++)
        {
            parr2[i][j] = parr[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = index; j < colsup; j++)
        {
            parr2[i][j] = parr[i][j + 1];
        }
    }
    ShowArray(parr2, rows, colsup);
    CleanArr(parr2, rows, colsup);
}
void SortId(int** parr, int rows, int cols)
{
    cout << "Enter the index:\n";
    int index, number, index2;
    cin >> index;
    cout << "Enter the value of moving:\n";
    cin >> number;
    index2 = index + number;
    ShowArray(parr, rows, cols, index);
    cout << endl;
    int** parr2 = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        parr2[i] = new int[cols];
    }
    if (index > 0)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < index; j++)
            {
                parr2[i][j] = parr[i][j];
            }
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = index; j < index2; j++)
            {
                parr2[i][j] = parr[i][j+1];
            }
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = index2+1; j < cols; j++)
            {
                parr2[i][j] = parr[i][j-1];
            }
        }
        for (int i = 0; i < rows; i++)
        {
            parr2[i][index2] = parr[i][index];
        }
    }
    if (index < 0)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < index2; j++)
            {
                parr2[i][j] = parr[i][j];
            }
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = index2; j < index; j++)
            {
                parr2[i][j] = parr[i][j + 1];
            }
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = index + 1; j < cols; j++)
            {
                parr2[i][j] = parr[i][j - 1];
            }
        }
        for (int i = 0; i < rows; i++)
        {
            parr2[i][index2] = parr[i][index];
        }
    }
    

    ShowArray(parr2, rows, cols, index2);
    CleanArr(parr2, rows, cols);
}





void CleanArr(int** parr, int rows, int colums)
{
    for (int i = 0; i < rows; i++)
    {
        delete[]parr[i];
    }
    delete[]parr;
}
void main()
{
    srand(time(0));
    int rows, cols;
    cout << "Enter the number of Rows, than number the colums\n";
    cin >> rows >> cols;

    int** parr = new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        parr[i] = new int[cols];
    }
    FillOut(parr, rows, cols);
    ShowArray(parr, rows, cols);
    cout << "Task1. Need to make a function which adds a colum to chosen index\n";
    AddColum(parr, rows, cols);
    cout << "Task1. Need to make a function which deletes a colum to chosen index\n";
    DellColum(parr, rows, cols);
    SortId(parr, rows, cols);


    CleanArr(parr, rows, cols);
}
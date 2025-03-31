#include <iostream>
#include <Windows.h>
using namespace std;
#define size 5
void SetColor(int color)//0-15
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void FillOut(int* array)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 10;
    }
}
void ShowArray(int* array)
{
    for (int i = 0; i < size; i++)
    {
        SetColor(3);
        cout << array[i] << " ";
    }
    SetColor(7);
    cout << "\n";
}
void square(int& num)
{
    cout << num * num << " ";
}
void doublevalue(int& num)
{
    cout << num * 2 << " ";
}
void negative(int& num)
{
    cout << num * (-1) << " ";
}
typedef void (*NumberOperation)(int&);
void ProcessArray(int arr[], NumberOperation op)
{
    for (int i = 0; i < size; i++)
    {
        SetColor(10);
        op(arr[i]);
    }
    SetColor;
    cout << "\n";
}
int main()
{
    srand(time(0));
    int array[size];
    FillOut(array);
    ShowArray(array);
    int num;
    do
    {
        cout << "Enter the operation you wanna see,\n1 - Square\n2 - Double value\n3 - Negative\n0 - Exit\n";
        cin >> num;
        switch (num)
        {
        case 1:
            ProcessArray(array, square);
            ShowArray(array);
            break;
        case 2:
            ProcessArray(array, doublevalue);
            ShowArray(array);
            break;
        case 3:
            ProcessArray(array, negative);
            ShowArray(array);
            break;
        case 0:
            break;
        default:
            SetColor(12); cout << "Your choise is incorrect\n"; SetColor(7);
            break;
        }
    } while (num != 0);
}
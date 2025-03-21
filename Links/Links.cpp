#include <iostream>
using namespace std;
void SumLinks(int& a, int& b, int& c)
{
    int sum = a + b + c;
    cout << " The sum is: " << sum << endl;
}
void FillArray(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(array + i) = rand() % 40 - 20;
    }
}
void ShowArray(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(array + i) << " ";
    }
    cout << endl;
}
void ChangeNegative(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (*(array + i) < 0)
        {
            *(array + i) = 0;
        }
    }
}
void Replacelinks(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;

}

int main()
{
    srand(time(NULL));
    cout << "task1. Given three numbers, need to find sum,avarege and min of numbers by using the link of these numbers\n";
    int a, b, c;
    cout << "Enter the number one: ";
    cin >> a;
    cout << "Enter the number two: ";
    cin >> b;
    cout << "Enter the number three: ";
    cin >> c;
    cout << endl;
    SumLinks(a, b, c);
    int& la = a;
    int& lb = b;
    int& lc = c;
    int average = (la + lb + lc)/3;
    int multy = la * lb * lc;
    if (la < lb && la < lc)
    {
        cout << "The min of these numbers is: " << la << endl;
    }
    else if(lb<la && lb <lc)
    {
        cout << "The min of these numbers is: " << lb << endl;
    }
    else
    {
        cout << "The min of these numbers is: " << lc << endl;
    }
    cout << "The averege of these numbers is: " << average << endl;
    cout << "The multy of these numbers is: " << multy << endl;
    cout << "task2. Given an array need to make the function to change all negative numbers by zero '0'\n";
    const int size = 10;
    int array[size];
    FillArray(array, size);
    cout << "Array is:\n";
    ShowArray(array, size);
    ChangeNegative(array, size);
    cout << "Changed array is:\n";
    ShowArray(array, size);
    int e, f;
    e = 14;
    f = 17;
    int& le = e;
    int& lf = f;
    cout << "Link of e is: " << le << endl << "Link of f is: " << lf << endl;
    Replacelinks(le, lf);
    cout << "Changed le is: " << le << endl << "Changed lf is: " << lf << endl;
}


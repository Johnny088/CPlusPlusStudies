#include <iostream>
using namespace std;
int* maxel(int* a, int* b)
{
    return (*a > *b) ? a : b;
}
void Ispozitive(int* a)
{
    if (*a > 0)
    {
        cout << "+" << endl;
    }
    else
    {
        cout << "-" << endl;
    }
}
void replace(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "The first number is: " << *a << endl << "The second number is: " << *b << endl;

}
void calculator(int* a, int* b, char c)
{
    
    switch (c)
    {
    case '+':
    {
        int temp = *a + *b;
        cout << *a << " + " << *b << " = " << temp << endl;
        break;
    }
    case '-':
    {
        int temp = *a - *b;
        cout << *a << " - " << *b << " = " << temp << endl;
        break;
    }
    case '*':
    {
        int temp = *a * *b;
        cout << *a << " * " << *b << " = " << temp << endl;
        break;
    }
    case '/':
    {
        int temp = *a / *b;
        cout << *a << " / " << *b << " = " << temp << endl;
        break;
    }

    default:
    {
        cout << "You gave the wrong operator";
        break;
    }
        
    }

}
void ArraySet(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(array+i) = rand() % 40 - 20;

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
void SumOfArray(int* array, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(array + i);
    }
    cout << "The sum of numbers of array is: " << sum << endl;
}

int main()

{
    srand(time(NULL));
    cout << "Task1. Need to show the max number of two given numbers\n";
    int a, b;
    cout << "Enter two numbers:\n number one is: ";
    cin >> a;
    cout << endl << "number two is: ";
    cin >> b;
    int* max = maxel(&a, &b);
    cout << "Max element is: " << *max << endl;
    cout << "Task2. Determine if the  given number is positive. \n";
    cout << "Enter the number ";
    cin >> a;
    Ispozitive(&a);
    cout << "Task3. Given 2 pointers need to replace them\n";
    cout << "Enter the first number: ";
    cin >> a;
    cout << endl << "Enter the second number:";
    cin >> b;
    cout << endl << "Number one is: " << a << endl << "number two is: " << b << endl;
    cout << "Replaced numbers are:\n";
    replace(&a, &b);
    cout << "Task4. Need to make a calculator using pointers\n";
    cout << "Enter the first number: ";
    cin >> a;
    cout << endl << "Enter the second number:";
    cin >> b;
    cout << "Enter the operator \n'+' \n'-' \n'*' \n'/'\n";
    char op;
    cin >> op;
    calculator(&a, &b, op);
    cout << "Task5. Need to find the sum of in numbers of the given array. \n";
    const int size = 10;
    int array[size];
    ArraySet(array, size);
    ShowArray(array, size);
    SumOfArray(array, size);
}


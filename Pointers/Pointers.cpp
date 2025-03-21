

#include <iostream>
#include <iomanip>
using namespace std;
void FillArray(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(array + i) = rand() % 200;
    }
    cout << endl; 
}
void PrintArray(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(array + i) << " ";
    }
    cout << endl;
}
void PrintRevers(int* array, int size)
{
    for (int i = 0; i<size; i++)
    {
        int* temp = array + (size-1);
        cout << *(temp - i) << " ";
    }
    cout << endl;
}
void MinArray(int* array, int size)
{
    int* min = array;
    for (int i = 0; i < size; i++)
    {
        if (*min > *(array+i))
        {
            min = array+i;
        }
    }
    cout << "Min of the array is: " << *min << endl;
}
void MaxArray(int* array, int size)
{
    int* max = array;
    for (int i = 0; i < size; i++)
    {
        if (*max < *(array + i))
        {
            max = array+i;
        }
    }
    cout << "Max of the array is: " << *max << endl;
}
void ReplaceMinMax(int* array, int size)
{
    int* min = array;
    int* max = array;
    
    for (int i = 0; i < size; i++)
    {
        if (*min > *(array + i))
        {
            min = array + i;
        }
        if (*max < *(array + i))
        {
            max = array + i;
        }
    }
    cout << "changed Array is: ";
    int temp = *min;
    *min = *max;
    *max = temp;
    cout << endl;
}







int main()
{
    srand(time(NULL));
    cout << "Given 3 numbers. Need to determine multiple, average, min by using pointer.\nThe array is:\n";
    const int size = 3;
    int arr[size];
    int* adress = arr;
    int multiple = 1;
    int average =0;
    for (int i = 0; i < size; i++)
    {
        *(adress + i) = rand() % 100;
        multiple *= *(adress +i);
        average += *(adress+i);
    }
    
    int min = *adress;

    /*cout << "min is" << min << endl;*/
    for (int i = 0; i < size; i++)
    {
        cout<< *(adress + i) <<" ";
        if (min > *(adress +i))
        {
            min = *(adress+i);
        }
        
    }
    cout << endl;
    cout << "Multiple is: " << multiple << endl << "Average is: " << average / size << endl;
    cout << "The min of numbers is: " << min << endl;

    cout << "\nTask2. Given an array, need to fill it out and to show it two ways include revers, and to show the sum of numbers\n";
    const int size2 = 10;
    int array[size2];
    FillArray(array, size2);
    PrintArray(array, size2);
    PrintRevers(array, size2);

    cout << "\nTask3. Given an array, need to determine min$max and replace them, to print changed array\n";
    const int size3 = 6;
    int array3[size3];
    FillArray(array3, size3);
    PrintArray(array3, size3);
    MinArray(array3, size3);
    MaxArray(array3, size3);
    ReplaceMinMax(array3, size3);
    PrintArray(array3, size3);

    cout << "\nTask4. i Have no idea, how to solve it, sorry.\n";



}

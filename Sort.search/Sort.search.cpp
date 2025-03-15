

#include <iostream>
using namespace std;
#define SIZE 10
int linearSearch(int arr[], int value)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}
void bubblesort(int arr[], int n)
{
    for (int i = 0; i, n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[i] > arr[j + 1])
            {

            }
        }
    }

}
int main()
{
    int arr[] = { 1,2,3,5,4,7,7,8,4,7,9, };
    int num;
    cout << "enter the number " << endl;
    cin >> num;
    int index = linearSearch(arr; 9);
}


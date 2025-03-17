

#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    cout << "Given 3 numbers. Need to determine multiple, average, min by using pointers ";
    const int size = 4;
    int arr[size];
    int* adress = arr;
    int multiple = 1;
    int average =0;
   
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        *(adress + i) = rand() % 100;
        multiple *= *(adress +i);
        average += *(adress+i);
    }
    cout << " multiple is: " << multiple << endl << "Average is: " << average / size << endl;
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
    cout << endl << "The min of numbers is: " << min << endl;


}

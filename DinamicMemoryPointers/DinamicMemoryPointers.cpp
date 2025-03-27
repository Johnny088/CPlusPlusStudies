#include <iostream>
#include <iomanip>
using namespace std;
//#define size 10
//#define size2 20
void FillOut(int* parr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(parr + i) = rand() % 99;

    }
}
void ShowArray(int* parr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(parr + i) << " ";
    }
    cout << "\n";
}
void StickArray(int* parr1, int size1, int* parr2,int size2, int* parr3)
{
    for (int i = 0; i < size1; i++)
    {
        *(parr3 + i) = *(parr1 + i);

    }
    for (int i = 0; i < size2; i++)
    {
        *(parr3 + size1 + i) = *(parr2 + i);

    }

}
int main()
{
    srand(time(0));
    cout << "Given two pointers of digit arrays. need to coplite them to one array\n";
    int size1;
    int size2;
    int size3;
    cout << "enter the number of the size of the first array: ";
    cin >> size1;
    cout << "\nenter the number of the size of the second array: ";
    cin >> size2;
    cout << endl;
    size3 = size1 + size2;
    int* parr1 = new int[size1];
    int* parr2 = new int[size2];
    int* parr3 = new int[size3];
    FillOut(parr2, size2);
    FillOut(parr1, size1);
    ShowArray(parr1, size1);
    ShowArray(parr2, size2);
    StickArray(parr1, size1, parr2, size2, parr3);
    ShowArray(parr3, size3);
    cout << "The recers way: ";
    delete []parr1;
    delete []parr2;
    delete []parr3;

    /*int* parr4 = new int[size4];*/
}

#include <iostream>
#include <Windows.h>
void SetColor(int color)//0-15
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
using namespace std;
class Stack
{
    enum {Empty = -1, Full = 9};
    int arr[Full+1];
    int LastElement;
    int MaxSize;
    /*int* arr2;*/
public:
    Stack()
    {
        LastElement = -1;
    }
    void add()
    {
        int* temp;
        if(!Isfull())
        arr[++LastElement] = rand() % 40;
        else
        {
            SetColor(12); cout << "Mission is Impossible\n"; SetColor(7);   
        }

    }
    void print()
    {
        for (int i = 0; i < LastElement +1; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    bool Isfull()
    {
        return LastElement == Full;
    }
    int Pop()
    {
        if (!IsEmpty())
        {
            return arr[LastElement--];
        }
    }
    int amount()
    {
        return LastElement + 1;
    }
    bool IsEmpty()
    {
        return LastElement = Empty;
    }
    
};

int main()
{
    srand(time(0));
    Stack st1;
    for (int i = 0; i < 9; i++)
    {
        st1.add();
    }
    st1.print();
    SetColor(10); cout << "was added 9/10 elements in stack.\n"; SetColor(7);
    st1.add();
    st1.add();
    st1.add();
    st1.add();
    st1.print();

}


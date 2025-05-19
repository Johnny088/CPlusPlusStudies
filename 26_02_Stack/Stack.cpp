#include <iostream>
#include <Windows.h>
void SetColor(int color)//0-15
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
using namespace std;
class Stack
{
    enum { Empty = -1};
    int* arr;
    int LastElement;
    int MaxSize;
    /*int* arr2;*/
public:
    Stack()
    {
        arr = nullptr;
        LastElement = Empty;
        MaxSize = 0;
    }
    Stack(int size)
    {
        this->MaxSize = size;
        arr = new int[MaxSize];
        LastElement = Empty;
    }
    void Resize()
    {
        int* temp;
        MaxSize *= 2;
            temp = new int[MaxSize];
            for (int i = 0; i < LastElement+1; i++)
            {
                temp[i] = arr[i];
            }
            if (arr != nullptr)
                delete[]arr;
            arr = temp;
    }
    void add()
    {
        
        if (Isfull())
            Resize();
        arr[++LastElement] = rand() % 40;
       

    }
    void print()
    {
        for (int i = 0; i < LastElement + 1; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    bool Isfull()
    {
        return LastElement == MaxSize-1;
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
    ~Stack()
    {
        if (arr!=nullptr)
            delete[]arr;
    }
};

int main()
{
    srand(time(0));
    Stack st1(10);
    for (int i = 0; i < 9; i++)
    {
        st1.add();
    }
    st1.print();
    SetColor(10); cout << "was added 9/10 elements in stack.\n"; SetColor(7);
    //st1.add();
    //st1.add();
    //st1.add();
    //st1.add();
    //st1.print();

}


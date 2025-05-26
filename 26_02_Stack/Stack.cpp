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
        if (size < 0)
        {
            throw invalid_argument("Incorrect size...");
        }
        else
        {
            this->MaxSize = size;
            arr = new int[MaxSize];
            LastElement = Empty;
        }
        
    }
    bool IsEmpty()
    {
        return LastElement == Empty;
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
    int add()
    {
        
        if (Isfull())
        {
            throw exception("Your array is full");
        }
        else 
        {
            arr[++LastElement] = rand() % 40;
        }
           /* Resize();
        arr[++LastElement] = rand() % 40;*/
       

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
        else
        {
            throw exception();
        }
    }
    int amount()
    {
        return LastElement + 1;
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
    int size;
    cout << "Enter the size: "; cin >> size;

    try
    {
    
        Stack st1(size);
        for (int i = 0; i < size; i++)
        {
            st1.add();
        }
        st1.print();
        st1.add();
        st1.add();
        st1.add();
        /*for (int i = 0; i < size + 1; i++)
        {
            st1.Pop();
        }*/
        
    }
   
    catch (invalid_argument& e)
    {
        cout << "Invalid argument...\n";
        cout << e.what() << endl;
    }
    catch (exception)
    {
        cout << "Your array is full...\n";
    }
    cout << "--------------------------------------------------------------------------------\n";
    Stack st2(size);
    for (int i = 0; i < size; i++)
    {
        st2.add();
    }
    st2.print();
    try
    {
        for (int i = 0; i < size+1; i++)
        {
            cout << "Element: " << st2.Pop() << "was deleted." << endl;
        }
    }
    catch (exception)
    {
        SetColor(12); cout << "You have nothing to delete.........\n"; SetColor(7);
    }
  






    /*SetColor(10); cout << "was added 9/10 elements in stack.\n"; SetColor(7);*/
    //st1.add();
    //st1.add();
    //st1.add();
    //st1.add();
    //st1.print();

}


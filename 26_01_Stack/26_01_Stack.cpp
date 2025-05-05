#include <iostream>
using namespace std;
class Stuck
{
    int arr[10];
    int size;
    int LastElement;
public:
    Stuck()
    {
        size = 10;
        LastElement = -1;
    }
    void add()
    {
        LastElement++;
        arr[LastElement] = rand() / 40;

    }
    void print()
    {
        for (int i = 0; i < LastElement; i++)
        {
            cout << arr[i];
        }
    }
    bool Isfull()
    {
        return LastElement == size - 1;
    }
    int Pop()
    {
        if (!Isfull())
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
        if (LastElement == -1)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    srand(time(0));
}


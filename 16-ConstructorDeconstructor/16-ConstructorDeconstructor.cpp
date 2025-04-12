#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
using namespace std;
#define size 10 
struct library {
    char name[100];
    char autor[100];
    char publisher[100];
    char genre[100];
};
void SetColor(int color)//0-15
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void SetPos(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

class Rectangle1
{
    int width;
    int height;
    string symbol;
public:
    Rectangle1()
    {
        width = 5;
        height = 6;
        symbol = '*';
    }
    Rectangle1(int a)
    {
        width = a;
        height = a;
        symbol = '*';
    }
    Rectangle1(int width, int height)
    {
        this->width = width;
        this->height = height;
        symbol = '*';
    }
    void print()
    {
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                cout << symbol << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    void print(int point1, int point2)
    {
        for (int i = 0; i < height; i++)
        {
            
            for (int j = 0; j < width; j++)
            {
                SetPos(point2+i, point1+j);
                cout << symbol << " ";
            }
            cout << "\n";
        }
        cout << "\n";
        SetColor(7);
    }
};

int main()
{
    int num1;
    int num2;
    Rectangle1 default1;
    cout << "Defalut constructor:\n"; default1.print();
    cout << "Enter the size of the first parametrized rectangle: "; cin >> num1;
    Rectangle1 square(num1);
    if (num1 < 1)
    {
        SetColor(12); cout << "Something went wrong\n"; SetColor(7);
    }
        
    else
    {
    cout << "Parametrized constructor:\n"; square.print();
    }
    cout << "Enter the size of the second parametrized rectangle:\n";
    cout << "Enter the width: "; cin >> num1;
    cout << "Enter the heigth: "; cin >> num2;
    Rectangle1 parameter2(num1,num2);
    if (num1 < 1 || num2 < 1)
    {
        SetColor(12); cout << "Something went wrong\n"; SetColor(7);
    }

    else
    {
        parameter2.print();
    }
    SetColor(14); cout << "Changin position of the default rectangle:\n";
    cout << "Enter the number of x axis "; cin >> num1;
    cout << "Enter the number of y axis "; cin >> num2;
    if (num1 < 1 || num2 < 1)
    {
        SetColor(12); cout << "Something went wrong\n"; SetColor(7);
    }

    else
    {
        system("cls");
         default1.print(num1,num2);
    }
    
}

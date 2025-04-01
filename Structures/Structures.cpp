#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;
void SetColor(int color)//0-15
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

struct date {
    int day;
    int month;
    int year;
    int weekday;
    char mon_name[10];
};
struct rectangle {
    int height;
    int width;
};
void FillOut(rectangle &task1)
{
    cout << "Enter the height: ";
    cin >> task1.height;
    cout << "Enter the width: ";
    cin >> task1.width;
}
void Show(rectangle& task1)
{
    cout << "The height is: " << task1.height << "\nThe width is: " << task1.width << "\n";
}
void ShowRectangle(rectangle& task1)
{
    for (int i = 0; i < task1.height; i++)
    {
        for (int i = 0; i < task1.width; i++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}
void setpos(int x, int y) {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD position;

    position.X = x;

    position.Y = y;

    SetConsoleCursorPosition(hConsole, position);

}

int main()
{
    rectangle rec;
    /*FillOut(rec);
    Show(rec);
    ShowRectangle(rec);*/
    cout << "Task1 need to make some functions for inicialization rectangle, changing position, changing the size.\n";
    int choice;
    do
    {
        cout << "Enter the operation: \n1 - inicialization rectangle.\n2 - changing position.\n3 - changing the size.\n4 - showing the rectangle.\n5 - Showing changed rectangle\n0 - exit\n Enter the choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            FillOut(rec);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            ShowRectangle(rec);
            break;
        case 0:
            break;
        default:
            SetColor(12); cout << "Your choise is incorrect!\n"; SetColor(7);
            break;
        }

    } while (choice != 0);
   
}
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
void FillOut(rectangle &rec1)
{
    cout << "Enter the height: ";
    cin >> rec1.height;
    cout << "Enter the width: ";
    cin >> rec1.width;
}
void Show(rectangle& rec1)
{
    cout << "The height is: " << rec1.height << "\nThe width is: " << rec1.width << "\n";
}
void ShowRectangle(rectangle& rec1)
{
    for (int i = 0; i < rec1.height; i++)
    {
        for (int i = 0; i < rec1.width; i++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}
//void setpos(int x, int y) {
//
//    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//
//    COORD position;
//
//    position.X = x;
//
//    position.Y = y;
//
//    SetConsoleCursorPosition(hConsole, position);
//
//}
void SetPos(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void ChangePosition(rectangle& rec1)
{
    int x, y;
    x = 50;
    y = 50;
    

    /*cout << "Enter X and Y of the position you wanna change fo the rectangle\nx: ";
    cin >> x;
    cout << "\ny: ";
    cin >> y;*/
    for (int i = 0; i <rec1.height; i++)
    {
        for (int j = 0; j < rec1.width; j++)
        {
            SetColor(12);
            SetPos(y+i, x+j);
            cout << "* ";
            
        }
        
        
    }
    SetColor(7);

}

int main()
{
    rectangle rec1;
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
            FillOut(rec1);
            break;
        case 2:
            ChangePosition(rec1);
            break;
        case 3:
            break;
        case 4:
            ShowRectangle(rec1);
            break;
        case 0:
            break;
        default:
            SetColor(12); cout << "Your choise is incorrect!\n"; SetColor(7);
            break;
        }

    } while (choice != 0);
   
}
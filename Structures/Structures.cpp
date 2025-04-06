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
struct line {
    int x;
    int y;
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
            cout << "*";
        }
        cout << "\n";
    }
}
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
    cout << "Enter X and Y of the position you wanna change fo the rectangle\nx: ";
    cin >> x;
    cout << "\ny: ";
    cin >> y;
    system("cls");
    for (int i = 0; i <rec1.height; i++)
    {
        
        for (int j = 0; j < rec1.width; j++)
        {
            
            SetColor(10);
            SetPos(x+j,y+i);
            cout << "*";
            
        }   
    }
    cout << "\n";
    SetColor(7);

}
void distance(line& point1, line& point2)
{
    int sum1 = point1.x + point1.y;
    int sum2 = point2.x + point2.y;
    int dist;
    if (sum2 > sum1)
        dist = sum2 - sum1;
    else
        dist = sum1 - sum2;
    cout << "The distance between these points is: " << dist << "\n";
}

int main()
{
    rectangle rec1;
    cout << "Task1 need to make some functions for inicialization rectangle, changing position, changing the size.\n";
    int choice;
    do
    {
        cout << "\n1 - inicialization rectangle.\n2 - changing position.\n3 - changing the size.\n4 - showing the rectangle.\n0 - exit\nEnter the operation: ";
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
            FillOut(rec1);
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
    line point1;
    line point2;
    cout << "\nTask2 need to determine the distance between two points it two-dimensional coordinates.\n point one:\nX - ";
    cin >> point1.x;
    cout << "\nY - ";
    cin >> point1.y;
    cout << "point two:\nX - ";
    cin >> point2.x;
    cout << "\nY - ";
    cin >> point2.y;
    distance(point1, point2);
}
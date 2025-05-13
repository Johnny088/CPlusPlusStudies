#include <iostream>
//#include <iomanip>
#include <Windows.h>
#include <string>
#include "Point.h"
#include "Vector.h"
using namespace std;
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

int main()
{
    Point p1(5,9);
    Point p2(2,4);
    cout << "Origin point:\n";
    p1.print();
    cout << "******** point ++ ********\n";
    ++p1;
    p1.print();
    cout << "******** point -- ********\n";
    --p1;
    p1.print();
    cout << "******** Whether p1(5,9) <= p2(2,4) ********\n";
    bool b1 = p1 <= p2;
    cout << b1 << "\n";
    cout << "******** Whether p1(5,9) >= p2(2,4) ********\n";
    b1 = p1 >= p2;
    cout << b1 << "\n\t\tVectors....\n";
    Vector v1;
    v1.add(Point(4,5));
    v1.add(Point(3,6));
    v1.add(Point(4,7));
    v1.printm();
    cout << "--------------------------------Copy----------------------------\n";
    Vector CopyV1(v1);
    CopyV1.printm();
    /*cout << "--------------------------------Moving Operator----------------------------\n";
    Vector CopyV2(v1);*/
    Vector v2 = v1;
    cout << "--------------------------------Operator = ----------------------------\n";
    v2.printm();
}
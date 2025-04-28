#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <string>
using namespace std;
void SetColor(int color)//0-15
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
class Aircraft
{
    string model;
    string type;
    string AmoutnOfPassangers;
    string MaxOfPlaces;
public:
    Aircraft()
    {
        model = "default";
        type = "default";
        AmoutnOfPassangers = "default";
        MaxOfPlaces = "default";
    }
    void init()
    {
        string
    }


};

int main()
{
    Aircraft v1();
   
}
#include <iostream>
//#include <iomanip>
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
    string AmountOfPassangers;
    string MaxOfPlaces;
public:
    Aircraft()
    {
        model = "default";
        type = "default";
        AmountOfPassangers = "default";
        MaxOfPlaces = "default";
    }
    /*~Aircraft()
    {
        if (AmountOfPassangers != nullptr)
        {
            delete[]AmountOfPassangers;
        }
    }*/
};
class Airplane
{
    Aircraft* aircraft;
    int size;
public:
    Airplane()
    {
        aircraft = nullptr;
        size = 0;
    }
    ~Airplane()
    {
        if (aircraft != nullptr)
        {
            delete[]aircraft;
        }
    }

};


int main()
{
    Aircraft v1();
   
}
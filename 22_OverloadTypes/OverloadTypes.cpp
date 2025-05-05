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
    int MaxPlaces;
    int AmountOfPassangers;
public:
    Aircraft()
    {
        model = "default";
        type = "default";
        MaxPlaces = 0;
        AmountOfPassangers = 0;
        
    }
    /*~Aircraft()
    {
        if (AmountOfPassangers != nullptr)
        {
            delete[]AmountOfPassangers;
        }
    }*/
};
class Airport
{
    Aircraft* aircraft;
    int size;
public:
    Airport()
    {
        aircraft = nullptr;
        size = 0;
    }
    ~Airport()
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
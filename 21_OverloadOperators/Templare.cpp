#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <string>
using namespace std;
void SetColor(int color)//0-15
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
class Time
{
    int hours;
    int minutes;
    int seconds;
public:
    Time() : hours(0), minutes(0), seconds(0) {}

    Time(int hours,int minutes,int seconds)
    {
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
    }
    Time(int seconds) //55555 hours = 55555/3600 minutes     hours =1
    {
        this->hours = seconds / 3600;
        this->minutes = seconds / 60 % 60;
        this->seconds = seconds % 60;

    }
    Time operator +(const Time& other)
    {
        /*Time res(this->hours + other.hours, this->minutes + other.minutes, this->seconds + other.seconds);
        return res;*/
        
        Time res((*this).TotalSecond() + other.TotalSecond());
            return res;
        
    }
    int TotalSecond()const
    {
        return this->hours * 3600 + this->minutes * 60 + seconds;
    }
    void print()
    {
        cout << hours << ":" << minutes << ":" << seconds;
    }
};


int main()
{
    Time time(1, 50, 48);
    Time time2(1, 50, 48);
    Time result = time + time2;
    result.print();
}
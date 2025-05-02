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
        cout << hours << ":" << minutes << ":" << seconds << "\n";
    }
    Time PlusSecond()
    {
        Time res((*this).TotalSecond() + 1);
        return res;
    }
    bool operator >(const Time& other)
    {
        return (*this).TotalSecond() > other.TotalSecond();
    }
    bool operator <(const Time& other)
    {
        return (*this).TotalSecond() < other.TotalSecond();
    }
    bool operator ==(const Time& other)
    {
        return (*this).TotalSecond() == other.TotalSecond();
    }
    bool operator !=(const Time& other)
    {
        return (*this).TotalSecond() != other.TotalSecond();
    }
};


int main()
{
    Time time(1, 50, 48);
    Time time2(1, 50, 48);
    Time result = time + time2;
    cout << "The summ of the time1 and time 2 is:\t"; result.print();
    Time time3(1, 59, 59);
    cout << "Time 3 is:\t"; time3.print();
    Time res2 = time3.PlusSecond();
    cout << "Adding one second to the 'time3':\t"; res2.print();
    Time time4(6, 59, 43);
    Time time5(5, 57, 43);
    SetColor(6);
    cout << "\nIf time4(6, 59, 43) > time5(5, 57, 43):\t";
    bool res3;
    res3 = time4 > (time5);
    cout << res3;
    SetColor(3);
    cout << "\nIf time4(6, 59, 43) < time5(5, 57, 43):\t";
    res3 = time4 < (time5);
    cout << res3;
    SetColor(6);
    cout << "\nIf time4(6, 59, 43) == time5(5, 57, 43):\t";
    res3 = time4 == (time5);
    cout << res3;
    SetColor(3);
    cout << "\nIf time4(6, 59, 43) != time5(5, 57, 43):\t";
    res3 = time4 != (time5);
    cout << res3;
    SetColor(12);
    cout << "\nI know nothing how to use explicit in this case."; SetColor(7);
}
#include <iostream>
using namespace std;
#include <windows.h>
void SetColor(int color)//0-15
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
struct PIB
{
    string name;
    string midlename;
    string lastname;
};
struct birthday
{
    int day;
    int month;
    int year;
};
struct Univercity {
    string name;
    string sity;
    string sountry;
};
class Student
{
public:
    PIB Fullname;
    birthday birth;
    string phone;
    string city;
    string country;
    Univercity univercity;
    string group;
    int* marks;
    int markCount;
    float average;
    void Print(){
    cout << Fullname.name << endl;
    cout << Fullname.midlename << endl;
    cout << Fullname.lastname << endl;
    cout << birth.day << endl;
    cout << birth.month << endl;
    cout << birth.year << endl;
    cout << phone << endl;
    cout << city << endl;
    cout << country << endl;
    cout << univercity.name << endl;
    cout << univercity.sity << endl;
    cout << univercity.sountry << endl;

       
        }

};
int main()
{
    Student student;
    student.Print();
    
}


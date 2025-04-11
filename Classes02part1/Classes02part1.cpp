#include <iostream>
using namespace std;
#include <windows.h>
#include <string>
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
struct Birthday
{
    int day;
    int month;
    int year;
};
struct University {
    string name;
    string city;
    string country;
};
class Student
{
    PIB fullname;
    Birthday birth;
    string phone;
    string city;
    string country;
    University university;
    string group;
    int* marks;
    int markCount;
    float average;
public:
    Student()
    {
        fullname.name = "no name";
        fullname.midlename = "no surname";
        fullname.lastname = "no lastname";
        birth.day = 0;
        birth.month = 0;
        birth.year = 0;
        phone = "no phone";
        city = "no city";
        country = "no country";
        university.name = "no university_name";
        university.city = "no university_city";
        university.country = "no university_country";
        group = "no group";
        marks = nullptr;
        markCount = 0;
        average = 0;
    }
    void Print()
    {
        cout << fullname.name << endl;
        cout << fullname.midlename << endl;
        cout << fullname.lastname << endl;
        cout << birth.day << endl;
        cout << birth.month << endl;
        cout << birth.year << endl;
        cout << phone << endl;
        cout << city << endl;
        cout << country << endl;
        cout << university.name << endl;
        cout << university.city << endl;
        cout << university.country << endl;
        cout << group << endl;
        cout << "Marks: ";
        for (int i = 0; i < markCount; i++)
        {
            cout << marks[i] << " ";
        }
        cout << "\nAmoutn of grades is: " << markCount << endl;
        /*cout << average << "\n";*/
        SetAverage();
       
    }
    
    void SetName(string name)
    {
        this->fullname.name = name;
    }
    void SetMidleName(string midlename)
    {
        fullname.midlename = midlename;
    }
    void SetLastName(string lastname)
    {
        fullname.lastname = lastname;
    }
    void SetBirthday(int day)
    {
        birth.day = day;
    }
    void SetBirthMonth(int month)
    {
        birth.month = month;
    }
    void SetBirthYear(int year)
    {
        birth.year = year;
    }
    void SetPhone(string phone)
    {
        this ->phone = phone;
    }
    void SetCity(string city)
    {
        this->city = city;
    }
    void SetCountry(string Country)
    {
        this->country = Country;
    }
    void SetUniversityName(string name)
    {
        university.name = name;
    }
    void SetUniversityCity(string city)
    {
        university.city = city;
    }
    void SetUniversityCountry(string Country)
    {
        university.country = Country;
    }
    void SetGroup(string group)
    {
        this->group = group;
    }
    void AddMarks(int mark)
    {  
      markCount++;
      int *temp = new int[markCount];
      for (int i = 0; i < markCount-1; i++)
      {
          temp[i] = marks[i];
      }
      temp[markCount - 1] = mark;
      if (marks != nullptr)
      {
          delete[]marks;
      }
      marks = temp;
    }
    void SetAverage()
    {
        float sum = 0;
        for (int i = 0; i < markCount; i++)
        {
            sum += marks[i];
        }
        average = (float)sum / markCount;
        cout << "The Average is: " << average << "\n";
    }
    void Clean1()
    {
        if (marks != nullptr)
        {
            delete[]marks;
        }
    }
    //Get functions............................................................................
    string GetName()
    {
        return fullname.name;
    }
    string GetMidleName()
    {
       return fullname.midlename;
    }
    string GetLastName()
    {
        return fullname.lastname;
    }
    int GetBirthday()
    {
        return birth.day;
    }
    int GetBirthMonth()
    {
        return birth.month;
    }
    int GetBirthYear()
    {
        return birth.year;
    }
    string GetPhone()
    {
        return phone;
    }
    string GetCity()
    {
        return city;
    }
    string GetCountry()
    {
        return country;
    }
    string GetUniversityName()
    {
        return university.name;
    }
    string GetUniversityCity()
    {
        return university.city;
    }
    string GetUniversityCountry()
    {
        return university.country;
    }
    string GetGroup()
    {
        return group;
    }
    void GetMarks()
    {
        for (int i = 0; i < markCount; i++)
        {
            cout << marks[i] << " ";
        }
    }



    
};
int main()
{
    Student student;
    int choice;
    string TempString;
    int TempInt;
    float TempFloat;
    
    do
    {
        SetColor(3);
    cout << "\t\t\tData of the students:\n1 - showing all information of the student\n2 - set name\n3 - set middlename\n4 - set lastname\n5 - set the day of birth\n";
    cout << "6 - set the month of the bith\n7 - set the year of the birth\n8 - set the phone\n9 - set the city\n10 - set the coutry\n11 - set the name of the University\n";
    cout << "12 - set the sity if the university\n13 - set the country of the University\n14 - set the group\n15 - add a mark\n16 - showing the average\n17 - get name of the student\n";
    cout << "18 - get the middle name if the student\n19 - get the last name of the student\n20 - get birthday\n21 - get birthmonth\n22 - get birthyear\n23 - get the phone\n";
    cout << "24 - get city\n25 - get country\n26 - get the university's name\n27 - get the University's city\n28 - get the University's country\n29 - get group\n30 - get marks\n";
    cout << "31 - get average\n0 - exit\nEnter your choice : ";
    SetColor(14);
        cin >> choice;
        cin.ignore();
        system("cls");
        cout << "\n";
        switch (choice)
        {
        case 1:
            student.Print();
            break;
        case 2:
            
            cout << "Enter the name: "; cin >> TempString;
             student.SetName(TempString);
             break;
        case 3:
            
            cout << "Enter the middlename: "; cin >> TempString;
             student.SetMidleName(TempString);
            break;
        case 4:
            
            cout << "Enter the lastname: "; cin >> TempString;
             student.SetLastName(TempString);
            break;
        case 5:
            
            cout << "Enter the dirth day: "; cin >> TempInt;
             student.SetBirthday(TempInt);
            break;
        case 6:
            
            cout << "Enther the month of the birth: "; cin >> TempInt;
            student.SetBirthMonth(TempInt);
            break;
        case 7:
            
            cout << "Enter the year of the Birth: "; cin >> TempInt;
            student.SetBirthYear(TempInt);
            break;
        case 8:
            
            cout << "Enter the phone's number: "; cin >> TempString;
            student.SetPhone(TempString);
            break;
        case 9:
            
            cout << "Enter the city: "; getline(cin, TempString);
            student.SetCity(TempString);
            break;
        case 10:
            
            cout << "Enter the country: "; cin >> TempString;
            student.SetCountry(TempString);
            break;
        case 11:
            
            cout << "Enter the University's name: "; cin >> TempString;
            student.SetUniversityName(TempString);
            break;
        case 12:
            
            cout << "Enter the University's city: "; cin >> TempString;
            student.SetUniversityCity(TempString);
            break;
        case 13:
            
            cout << "Enter the University's country: "; cin >> TempString;
             student.SetUniversityCountry(TempString);
            break;
        case 14:
           
            cout << "Enter the student's group: "; cin >> TempString;
            student.SetGroup(TempString);
            break;
        case 15:
            
            cout << "Enter the mark, you wanna add: "; cin >> TempInt;
            student.AddMarks(TempInt);
            break;
        case 16:
            
            student.SetAverage();
            break;
        case 17:
            
            cout << student.GetName() << "\n";
            break;
        case 18:
            
            cout << student.GetMidleName() << "\n";
            break;
        case 19:
            
            cout << student.GetLastName() << "\n";
            break;
        case 20:
            
            cout << student.GetBirthday() << "\n";
            break;
        case 21:
            
            cout << student.GetBirthMonth() << "\n";
            break;
        case 22:
            
            cout << student.GetBirthYear() << "\n";
            break;
        case 23:
            cout << student.GetPhone() << "\n";
            break;
        case 24:
            cout << student.GetCity() << "\n";
            break;
        case 25:
            cout << student.GetCountry() << "\n";
            break;
        case 26:
            cout << student.GetUniversityName() << "\n";
            break;
        case 27:
            cout << student.GetUniversityCity() << "\n";
            break;
        case 28:
            cout << student.GetUniversityCountry() << "\n";
            break;
        case 29:
            cout << student.GetGroup() << "\n";
            break;
        case 30:
            student.GetMarks();
            cout << "\n";
            break;
        case 31:
            student.SetAverage();
            break;
        case 0:
            cout << "Have a nice day\n";
            SetColor(7);
            break;
        default:
            SetColor(12); cout << "your choice is incorrect\n"; SetColor(7);
            break;
        }
    } while (choice != 0);
    
    
    





    student.Clean1();
}


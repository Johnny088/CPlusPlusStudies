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
    Aircraft(string m, string t, int pl, int ps): model(m), type(t),MaxPlaces(pl), AmountOfPassangers(ps){} 
    

    void printAir() const
    {
        cout << "Model: " << this->model << "\n";
        cout << "Type: " << this->type << "\n";
        cout << "maximum places: " << this->MaxPlaces << "\n";
        cout << "Amount of the passengers: " << this->AmountOfPassangers << "\n";
    }
    string gettype() const
    {
        return this->type;
    }
    int getpassangers()
    {
        return this->AmountOfPassangers;
    }
    int getplaces() const
    {
        return this->MaxPlaces;
    }
    int SetPassengers()
    {
        return this->AmountOfPassangers;
    }

    friend bool operator ==(Aircraft& first, Aircraft& second);
    friend void operator ++(Aircraft& other);
    friend void operator --(Aircraft& other);
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
    inline int getaircrafts()const
    {
        return size;
    }
    void add()
    {
        string modelT, typeT;
        int places, passengers;
        cout << "enter the model "; cin >> modelT;
        cout << "enter the type "; cin >> typeT;
        cout << "enter the maximum places "; cin >> places;
        cout << "enter the amount of passengers "; cin >> passengers;
        Aircraft newplane(modelT, typeT, places, passengers);
        size++;
        Aircraft* temp = new Aircraft[size];
        for (int i = 0; i < size-1; i++)
        {
            temp[i] = aircraft[i];
        }
        temp[size - 1] = newplane;
        if (aircraft != nullptr)
        {
            delete[]aircraft;
        }
        aircraft = temp;
        SetColor(10);
        cout << "The Aircraft was added\nTotal sum of aircrafts is: " << this->size <<"\n"; SetColor(14);

    }
    void print() const
    {
        for (int i = 0; i < size; i++)
        {
            SetColor(6); cout << "\tThe " << i + 1 << " aircraft.\n"; SetColor(14);
            aircraft[i].printAir();
        }
        cout << "\n";
    }
    string type()
    {
        aircraft->gettype();
    }
    int passengers()
    {
        aircraft->getpassangers();
    }
    int places()
    {
        aircraft->getplaces();
    }
    
    /*friend bool operator ==(Airport& first, Airport& second);
    friend void operator ++(Airport& other);
    friend void operator --(Airport& other);*/
    friend bool operator ==(Aircraft& first, Aircraft& second);
    friend void operator ++(Aircraft& other);
    friend void operator --(Aircraft& other);
};





#pragma region Friends
bool operator ==(Aircraft& first, Aircraft& second)
{
    return first.type == second.type;
}
void operator ++(Aircraft& other)
{
    if (other.AmountOfPassangers < other.MaxPlaces)
    {
        other.AmountOfPassangers++;
    }
}
inline void operator --(Aircraft& other)
{
    other.AmountOfPassangers--;
}
//bool operator ==(Aircraft& first, Aircraft& second)
//{
//    return first.AmountOfPassangers == second.AmountOfPassangers;
//}
//bool operator ==(Airport& first, Airport& second)
//{
//    return first.type() == second.type();
//}
//void operator ++(Airport& other, int i)
//{
//    if (other.passengers() < other.places())
//    {
//        other.;
//    }
//}
//void operator --(Airport& other, int i)
//{
//    other.aircraft--;
//}
#pragma endregion


void menu()
{
    Airport v1;
    int choice; 
    do
    {
        SetColor(11);
        cout << "\t\tMain Menu: \n1 - to add one aircraft. \n2 - to add a passenger \n3 - to remove a passenger \n4 - to compare two aircrafts by using"; SetColor(3);
        cout << " type"; SetColor(11); cout << " or "; SetColor(3); cout << " amount of the passengers\n"; SetColor(11);
        cout << "5 - to add number of the passengers \n6 - to show all aircrafts \n0 - exit \nEnter the choice: "; 
        cin >> choice; SetColor(14);
        switch (choice)
        {
        case 1:
            v1.add();
            break;
        case 2:
            break;
        case 6:
            v1.print();
            break;
        /*case 0:
            SetColor(7);
            break;*/
        default:
            break;
        }
    } while (choice != 0);
   
}

int main()
{
    menu();
   
}
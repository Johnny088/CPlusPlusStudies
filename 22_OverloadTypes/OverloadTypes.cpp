#include <iostream>
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
        cout << "Amount of the passengers: " << this->AmountOfPassangers << "\n\n";
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



#pragma region MyFail
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
        for (int i = 0; i < size - 1; i++)
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
        cout << "The Aircraft was added\nTotal sum of aircrafts is: " << this->size << "\n"; SetColor(14);

    }
    void add(Aircraft newplane)
    {
        size++;
        Aircraft* temp = new Aircraft[size];
        for (int i = 0; i < size - 1; i++)
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
        cout << "The Aircraft was added\nTotal sum of aircrafts is: " << this->size << "\n"; SetColor(14);

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
    /*friend bool operator ==(Aircraft& first, Aircraft& second);
    friend void operator ++(Aircraft& other);
    friend void operator --(Aircraft& other);*/

};
#pragma endregion



    






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

#pragma endregion


void menu()
{
    Airport v1;
    int choice; 
    Aircraft a1("model", "12", 70, 12);
    Aircraft a2("model", "12", 70, 12);
    a1.printAir();
    ++a1;
    a1.printAir();
    --a1;
    a1.printAir();
    bool res = a1 == a2;
    cout << "Whether v1==v2: " << res;
    do
    {
        SetColor(11);
        cout << "\n\t\tMain Menu: \n1 - to add one aircraft. Function is disabled \n2 - to add a passenger \n3 - to remove a passenger \n4 - to compare two aircrafts by using"; SetColor(3);
        cout << " type"; SetColor(11); cout << " or "; SetColor(3); cout << " amount of the passengers\n"; SetColor(11);
        cout << "5 - to add number of the passengers \n6 - to show all aircrafts \n0 - exit \nEnter the choice: "; 
        cin >> choice; SetColor(14);
        switch (choice)
        {
        case 1:
            v1.add();
            break;
        case 2:
            v1.getaircrafts();
            break;
        case 3:
            break;
        case 6:
            v1.print();
            break;
        case 0:
            SetColor(7);
            break;
        default:
            SetColor(12); cout << "your choice is incorrect\n"; SetColor(7);
            break;
        }
    } while (choice != 0);
   
}

int main()
{
    menu();
    
}
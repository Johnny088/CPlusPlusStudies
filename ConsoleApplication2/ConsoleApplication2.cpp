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
    Aircraft(string m, string t, int pl, int ps) : model(m), type(t), MaxPlaces(pl), AmountOfPassangers(ps) {}


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
    friend inline bool operator >(Aircraft& first, Aircraft& second);
    friend void addPassangers(Aircraft& curent);
    
};

#pragma region Friends
bool operator ==(Aircraft& first, Aircraft& second)
{
    int temp2;
    cout << "1 - to compare the aircrafts by using the type \n2 - To compare the aircrafts by using the amount of the passengers: "; cin >> temp2;
    if (temp2 == 1)
    {
        return first.type == second.type;
    }
    else if (temp2 == 2)
    {
        return first.AmountOfPassangers == second.AmountOfPassangers;
    }
    else return -1;
    /*return first.type == second.type;*/
}
void operator ++(Aircraft& other)
{
    if (other.AmountOfPassangers < other.MaxPlaces)
    {
        other.AmountOfPassangers++;
    }
    else
        SetColor(12);  cout << "You can't to add another passenger.\n"; SetColor(14);
}
inline void operator --(Aircraft& other)
{
    other.AmountOfPassangers--;
}
inline bool operator >(Aircraft& first, Aircraft& second)
{
    return first.MaxPlaces > second.MaxPlaces;
}
void addPassangers(Aircraft& curent)
{
    int temp;
    cout << "How many passangers you wanna add? "; cin >> temp;
    if (curent.AmountOfPassangers + temp > curent.MaxPlaces)
    {
        SetColor(12); cout << "Too many passangers"; SetColor(14);
    }
    else
    {
        curent.AmountOfPassangers += temp;
        SetColor(10); cout << "The passengers were added."; SetColor(14);
    }
        


    
}
#pragma endregion


void menu()
{
    
    Aircraft v1("model", "type", 70, 13);
    Aircraft v2("model2", "type", 70, 14);
    /*bool res = v1 == v2;*/
    /*bool res2 = v1 > v2;*/
    int choice;
    int temp;
    do
    {
        SetColor(11);
        cout << "\n\t\tMain Menu: \n1 - to compare two aircrafts by using"; SetColor(3);
        cout << " type"; SetColor(11); cout << " or "; SetColor(3); cout << " amount of the passengers\n"; SetColor(11);
        cout << "2 - to add a passenger \n3 - to del a passenger \n4 - to compare two aircrafts by the max places \n5 - to add some passengers \n6 - to show all aircrafts \n0 - exit \nEnter the choice: ";
        cin >> choice; SetColor(14);
        switch (choice)
        {
        case 1:
            cout << (v1 == v2);
            break;
        case 2:
            cout << "enter the plane which you wanna add a passenger (1) or (2): ";
            cin >> temp;
            
            if (temp == 1)
            {
                ++v1;
            }
            else if (temp == 2)
            {
                ++v2;

            }
            else
            {
                SetColor(12); cout << "your choice is incorrect\n"; SetColor(14);
            }

            break;
        case 3:
            cout << "enter the plane which you wanna delete a passenger (1) or (2): ";
            cin >> temp;
            if (temp == 1)
            {
                --v1;
            }
            else if (temp == 2)
            {
                --v2;

            }
            else
            {
                SetColor(12); cout << "your choice is incorrect\n"; SetColor(14);
            }
            break;
            case 4:
                cout << "whether maximum places of the first airplane more than the second: " << (v1>v2) << "\n";
                break;
            case 5:
                cout << "enter the plane which you wanna delete a passenger (1) or (2): ";
                cin >> temp;
                if (temp == 1)
                {
                    addPassangers(v1);
                }
                else if (temp == 2)
                {
                    addPassangers(v2);

                }
                else
                {
                    SetColor(12); cout << "your choice is incorrect\n"; SetColor(14);
                }
                break;
        case 6:
            v1.printAir();
            v2.printAir();
            break;
        case 0:
            SetColor(7);
            break;
        default:
            SetColor(12); cout << "your choice is incorrect\n"; SetColor(14);
            break;
        }
    } while (choice != 0);

}

int main()
{
    menu();

}
#include <iostream> // main function
#include <iomanip> // for resercation space
#include <Windows.h> // random
#include <string>
using namespace std;
void SetColor(int color)//0-15
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
struct FullName
{
    string name;
    string middlename;
    string surname;
    FullName()
    {

    }
    FullName(string n, string m, string s):name(n),middlename(m),surname(s){}

};



class Account
{
    FullName fullname;
    string homephone;
    string workphone;
    string cellphone;
public:
    Account()
    {
        fullname.name = "Unkown";
        fullname.middlename = "Unkown";
        fullname.surname = "Unkown";
        homephone = "Unknown";
        workphone = "Unknown";
        cellphone = "Unknown";

    }
    Account(FullName full) :Account()
    {
        this->fullname.name = full.name;
        this->fullname.middlename = full.middlename;
        this->fullname.surname = full.surname;
    }
    void Printacc()
    {
        SetColor(6);
        cout <<"Name: " << fullname.name << endl;
        cout << "Middle name " << fullname.middlename << endl;
        cout <<"Surname " << fullname.surname << endl;
        cout << "Homephone " << homephone << endl;
        cout << "Workphone " << workphone << endl;
        cout << "Cellphone " << cellphone << "\n\n";
        SetColor(7);
       
    }
    inline void SetHomephone(string homephone)
    {
        this->homephone = homephone;
    }
    inline void SetWorkphone(string workphone)
    {
        this->workphone = workphone;
    }
    inline void SetCellphone(string cellphone)
    {
        this->cellphone = cellphone;
    }
    void CleanNumbers()
    {
        this->homephone = "none";
        this->workphone = "none";
        this->cellphone = "none";
    }
    void SearchName(string temp)
    {
        if (fullname.name == temp)
        {
            Printacc();
        }
        cout << "\n";
    }
    void SearchNumber(string temp)
    {
        if (homephone == temp || workphone == temp || cellphone == temp)
        {
            Printacc();
        }
    }

    
};






class Phonebook
{
    Account* account;
    int size;
public:
    Phonebook()
    {
        size = 0;
        account = nullptr;
    }
    void add(Account a)
    {
        size++;
        Account* temp = new Account[size];
        for (int i = 0; i < size-1; i++)
        {
            temp[i] = account[i];
        }
        temp[size - 1] = a;
        if (account != nullptr)
            delete[]account;
        account = temp;

    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            SetColor(4);
            cout << "The Id of customer is: " << i + 1 << "\n";
            account[i].Printacc();
        }
        cout << "\n";
        SetColor(7);
    }
    void SetPhones()
    {
        int id;
        string homephone, workphone, cellphone;
        SetColor(6);
        cout << "Enter the Id of the customer: "; cin >> id;
        cout << "Enter the homephone of the customer: "; cin >> homephone; 
        account[id - 1].SetHomephone(homephone);
        cout << "Enter the workphone of the customer: "; cin >> workphone;
        account[id - 1].SetWorkphone(workphone);
        cout << "Enter the cellphone of the customer: "; cin >> cellphone;
        account[id - 1].SetCellphone(cellphone);
        SetColor(7);
    }
    void DellPhones()
    {
        int id;
        SetColor(6);
        cout << "Enter the id of the customer to delete him phone numbers: "; cin >> id;
        account[id - 1].CleanNumbers();
    }
    void SearchV1()
    {
        string temp; SetColor(6);
        cout << "Enter the name you wanna find: "; cin >> temp;
        for (int i = 0; i < size; i++)
        {
            account[i].SearchName(temp);
        }
        SetColor(7);

    }
    void SearchV2()
    {
        string temp;
        SetColor(6);
        cout << "Enter the phone you wanna find: "; cin >> temp;
        for (int i = 0; i < size; i++)
        {
            account[i].SearchNumber(temp);
        }
        SetColor(7);
    }



    ~Phonebook()
    {
        if (account != nullptr)
        {
            delete[]account;
        }
    }
    
};
//int Phonebook::size = 0;
void menu()
{
    int choice;
    Phonebook v1;
    string Name, Middlename, Lastname;
    do 
    {
        SetColor(11);
        cout << "Main menu: \n1 - to add a new account \n2 - to add phone's numbers \n3 - to delete all phone numbers";
        cout <<"\n4 - to search the account using the name  \n5 - to search the account using the phone \n6 - to show all\n";
        cout << "0 - exit\nYour option: "; SetColor(7);
        cin >> choice;
        switch (choice)
        {
            
        case 1:
            SetColor(6);
            cout << "Enter the name: "; cin >> Name;
            cout << "Enter the middle name: "; cin >> Middlename;
            cout << "Enter the Last name: "; cin >> Lastname;
            v1.add(Account(FullName(Name, Middlename, Lastname)));
            SetColor(7);
            break;
        case 2:
            v1.SetPhones();
            break;
        case 3:
            v1.DellPhones();
            break;
        case 4:
            v1.SearchV1();
            break;
        case 5:
            v1.SearchV2();
            break;
        case 6:
            v1.print();
            break;
        case 0:
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
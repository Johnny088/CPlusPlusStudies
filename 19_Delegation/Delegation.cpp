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
        cout << fullname.name << endl;
        cout << fullname.middlename << endl;
        cout << fullname.surname << endl;
        
       
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
            account[i].Printacc();
        }
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
    do 
    {
        SetColor(11);
        cout << "Main menu: \n1 - To add a new account \n2 - To delete an account \n3 - to search the account using the name  \n4 - to search the account using the phone \n5 - to show all\n";
        cout << "0 - exit"; SetColor(7);
        cin >> choice;
        switch (choice)
        {
            
        case 1:
            v1.add(Account(FullName("name", "middlename", "Surname")));
            break;
        case 2:
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
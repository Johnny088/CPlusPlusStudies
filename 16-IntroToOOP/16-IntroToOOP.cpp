#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;
void SetColor(int color)//0-15
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
class Points 
{
    int x;
    int y;
    int z;
public:
    void setx(int x)
    {
        this->x = x;
    }
    void sety(int y)
    {
        this->y = y;
    }
    void setz(int z)
    {
        this->z = z;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
    int getz()
    {
        return z;
    }
};

void ReadFile()
{
    ifstream fin1("data1.txt");
    if (!fin1)
    {
        SetColor(12); cout << "Something went wrong\n"; SetColor(7);
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            char buffer[500];
            fin1.getline(buffer, 500);
            cout << buffer << "\n";
        }
        fin1.close();
    }
}
    
int main()
{ 
    Points point;
    int x;
    int y;
    int z;
    int choice;
    ofstream fout1;
    do
    {
        SetColor(11); cout << "\t\tWelcome to menu:\n1 - setting value for points 'x','y','z'\n2 - showing the points 'x','y','z'\n3 - pushing the data to the file";
        cout <<  "\n4 - reading the data from the file\n0 - exit from the program\nEnter your choice: "; SetColor(7);
        cin >> choice;
        switch (choice)
        {
        case 1:
            SetColor(14);
            cout << "Enter the 'x' "; cin >> x; point.setx(x);
            cout << "Enter the 'y' "; cin >> y; point.sety(y);
            cout << "Enter the 'z' "; cin >> z; point.setz(z); SetColor(7);
            break;
        case 2:
            SetColor(15);
            cout << "x = " << point.getx() << "\n";
            cout << "y = " << point.gety() << "\n";
            cout << "z = " << point.getz() << "\n"; SetColor(7);
            break;
        case 3:
            fout1.open("data1.txt");
            fout1 << "x = " << point.getx() << "\n";
            fout1 << "y = " << point.gety() << "\n";
            fout1 << "z = " << point.getz() << "\n";
            fout1.close();
            break;
        case 4:
            ReadFile();
            break;
        case 0:
            cout << "Have a nice day\n";
            break;
        default:
            break;
        }
    } while (choice != 0);
    
}


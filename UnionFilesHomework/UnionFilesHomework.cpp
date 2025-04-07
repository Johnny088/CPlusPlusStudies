#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;
#define size 255
#include <windows.h>
void SetColor(int color)//0-15
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main()
{
    ifstream fin1("text01.txt");
    ifstream fin2("text02.txt");
    char buffer1[size];
    char buffer2[size];
    if (!fin1)
    {
        SetColor(12); cout << "Something went wrong\n"; SetColor(7);
    }
    else
    {
        fin1.getline(buffer1, size);
        cout << "THe first file is:\n" << buffer1 << endl;
    }
    if (!fin2)
    {
        SetColor(12); cout << "Something went wrong\n"; SetColor(7);
    }
    else
    {
        fin2.getline(buffer2, size);
        cout << "THe second file is:\n" << buffer2 << endl;
    }
  
    
   

    if (buffer1 == buffer2)
    {
        cout << "The text files are the same\n";
    }
    else
        cout << "The files is different\n";





    fin1.close();
    fin2.close();
}
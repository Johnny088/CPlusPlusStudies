#include <iostream>
#include <fstream>
#include <regex>
#include <windows.h>
using namespace std;
#define size 255
void SetColor(int color)//0-15
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
int main()
{
    cout << "Given two file, need to copy all words with more than 6 characters from file 1 to file 2\n";
    /*char buffer[size];
    ifstream fin("text1.txt", 'r');
    ofstream fout("text2.txt", ios::app);
    fin.getline(buffer, size);
    int count = 0;
    for (int i = 0; i < 255; i++)
    {
        if (isalpha(buffer[i])) 
        {
            count++;
            continue;
        }
        if (count >= 7)
        {
         
        }
    }*/
    cout << "I have no idea how to solve it.\n";
    SetColor(6);
    cout << "Task 2 Given text file, need to copy the text into  another file. both files have to be similar. \n";  SetColor(7);
    char buffer2[size];
    ifstream fin("text1.txt");
    ofstream fout("text3.txt", ios::app);
    ofstream fout2("text4.txt", ios::app);
    if (!fin)
    {
        SetColor(12); cout << "Something went wrong\n"; SetColor(7);
    }
    else
    {
        fin.getline(buffer2, size);
        cout << buffer2 << endl;
    }
    if (!fout)
    {
        SetColor(12); cout << "Something went wrong\n"; SetColor(7);
    }
    else
    {
        fout << buffer2;
        cout << "File was copied successfuly" << endl;
    }
    int len =0;
    for (int i = 0; i < size; i++)
    {
        if (buffer2[i] != '\0')
            len++;
            
            
        else
            break;
            
   
    }
    cout << len << endl;
    int j = 0;
    char buffer3[size];
    buffer3[len] = '\0';
    for (int i = len-1; i > 0; i--)
    {
        
        buffer3[j] = buffer2[i];
        j ++;
        
    }
    buffer3[j] = '\0';
    if (!fout2)
    {
        SetColor(12); cout << "Something went wrong\n"; SetColor(7);
    }
    else
    {
        fout2 << buffer3;
        cout << "File was copied successfuly" << endl;
    }
    


    fin.close();
    fout.close();
    fout2.close();

}


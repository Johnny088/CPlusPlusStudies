#include <iostream>
#include <fstream>
#include <regex>
using namespace std;
int main()
{
    char buffer[255];
    fstream file1("text1.txt", 'r');
    fstream file2("text2.txt", ios::app);
    file1.getline(buffer, 255);
    int count = 0;
    for (int i = 0; i < 255; i++)
    {
        if (count >= 7)
        {

        }
        if (isalpha(buffer[i])) 
        {
            count++;
            continue;
        }
        if (count >= 7)
        {
            
        }
    }
}


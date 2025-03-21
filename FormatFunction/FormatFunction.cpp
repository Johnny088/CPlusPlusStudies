#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

int main()
{
    /*for (int i = 0; i < 255; i++)
    {
        cout << "code = " << i << " char =  " << (char)i << endl;
    }*/
    char line[255];
    cout << "Enter line:\n";
    cin.getline(line, 255);
    cout << line;
    int countA = 0;
    int countO = 0;
    for (int i = 0; i < 255; i++)
    {
        if (line[i] == 'a' || line[i] == 'A')
        {
            countA++;
        }
        if (line[i] == 'o' || line[i] == 'O')
        {
            countO++;
        }
    }
    cout << endl;
    cout << "The leter A is " << countA << " times\n";
    cout << "The leter O is " << countO << " times\n";

    char line2[255];
    cout << "Enter line:\n";
    cin.getline(line2, 255);
    cout << line2;
    int CountLetter = 0;
    int CountNumbers = 0;
    int CountSpace = 0;
    for (int i = 0; i < strlen(line2); i++)
    {
        if (isalpha(line2[i]))
        {
            CountLetter++;
        }
        if (isdigit(line2[i]))
        {
            CountNumbers++;
        }
        if (isspace(line2[i]))
        {
            CountSpace++;
        }
    }
    cout << endl;
    cout << "The leters in line are " << CountLetter << " times\n";
    cout << "The numbers in line are " << CountNumbers << " times\n";
    cout << "The space in line are " << CountSpace << " times\n";
}

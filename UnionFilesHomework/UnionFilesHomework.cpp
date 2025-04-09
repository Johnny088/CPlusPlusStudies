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
        
    }
    cout << "THe second file is: " << buffer2 << endl;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        /*if (buffer1[i] = '\0' || buffer2[i] == '\0')
            break;*/
        if (buffer1[i] != buffer2[i]) {
            cout << "Are not equal";
            count++;
            break;
        }
    }
    cout << "\n";
    cout << count << "\n";
    if (count == 0)
    {
        cout << "Chosen files are intentical\n";
    }
    SetColor(2); cout << "Given a text file, need to make the second file and to push amount of: symbols, characters, vowels, consonants and numbers into this file\n"; SetColor(7);
    char vowels[] = {'a','e','i','o','u','y'};
    char consonants[] = { 'b','c','d','f','g','h','j','k','l','m','n','p','r','s','t','v','w','x','z' };
    int AmountOfVowels = 0;
    int AmountOfConsonants = 0;
    int symbols = 0;
    int AmountOfSymbols = 0;
    int numbers = 0;
    int characters = 0;
    for (int i = 0; i < size; i++)
    {
        if (buffer1[i] != '\0')
            AmountOfSymbols++;
        else
        {
            break;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (buffer1[i] == '\0')
            break;
        if (isdigit(buffer1[i]))
        {

            numbers++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (buffer1[1] == '\0')
        if (isalpha(buffer1[i]))
        {
            characters++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < sizeof(vowels); j++)
        {
            if (buffer1[i] == '\0')
            {
                break;
            }
            if (tolower(buffer1[i]) == vowels[j])
            {
                AmountOfVowels++;
            }

        }

    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < sizeof(consonants); j++)
        {
            if (buffer1[i] == '\0')
            {
                break;
            }
            if (tolower(buffer1[i]) == consonants[j])
            {
                AmountOfConsonants++;
            }

        }

    }

    ofstream fout1("text3.txt");
    if (!fout1)
    {
        SetColor(12); cout << "Something went wrong\n"; SetColor(7);
    }
    else
    {
        fout1 << "Amount of symbols is: " << AmountOfSymbols << "\nAmount of characters is: " << characters << "\nAmount of vowels is: " << AmountOfVowels << "\n";
        fout1 << "Amount of consonants is: " << AmountOfConsonants << "\n" << "Amount of numbers is: " << numbers << endl;
        cout << "The file was updated successfuly\n";
    }
    SetColor(2); cout << "Task3. Need to encrypt the date of the first file to the second by using Caesar cipher\n"; SetColor(7);
    ofstream fout2("text4.txt");
    fout2 << ("Some text for example");
    fout2.close();
    char buffer4[size];
    char buffer5[size];
    ifstream fin4("text4.txt");
    fin4.getline(buffer4,size);
    for (int i = 0; i < size; i++)
    {
        if (buffer4[i] == 0)
        {
            buffer5[i] = 0;
        }
        if (buffer4[i] == '\0')
        {
            break;
        }
        else if (buffer4[i] == ' ')
        {
            buffer5[i] = buffer4[i];
        }
        else
            buffer5[i] = (char)buffer4[i] + 2;
    }
    SetColor(8); cout << "Origin text is: "; SetColor(14);
    cout << buffer4 << "\n";
    SetColor(8); cout << "Ceasar cipher is: "; SetColor(14);
    cout << buffer5 << "\n"; SetColor(7);
    ofstream fout5("text5.txt");
    fout5 << buffer5;

    fin1.close();
    fin2.close();
    fout1.close();
    fin4.close();
    fout5.close();
}   
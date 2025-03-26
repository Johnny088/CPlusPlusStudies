#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;
void stringlen(char text[], int size)
{
    int len = 0;
    for (int i = 0; i < size; i++)
    {
        if (text[i] != '\0')
            len++;
        else
            break;


    }
    cout << "this text has " << len << " symbols include spaces\n";
}
//char DelSymbol(char text[], char text2[], int size)
//{
//    char symbol;
//    cout << "enter the simbol we need to delete" << endl;
//    cin >> symbol;
//    for (int i = 0; i < size; i++)
//    {
//        char temp;
//        if (text[i] != symbol)
//        {
//            temp = text[i];
//            strcopy(text2, temp);
//        }
//
//
//    }
//}
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
    cout << "Task3. ";
    char text[255] = "Lorem Ipsum is simply DUMMY text OF the printing AND typesetting industry. LOREM Ipsum has been THE industry's standard dummy";
    int size = strlen(text);
    cout << text << endl;
    cout << "The changed: \n";
    for (int i = 0; i < size; i++)
    {
        if (islower(text[i]))
        {
            text[i] = toupper(text[i]);
            cout << text[i];
        }
        else
        {
            text[i] = tolower(text[i]);
            cout << text[i];

        }
            

    }
    cout << endl;
    cout << "task4. Need to make a function which return the lenght of the string without strlen\n";
    char text2[255] = "Lorem Ipsum is simply DUMMY text OF the printing AND typesetting industry.";
    cout << text2 << endl;
    stringlen(text2, 255);
    int i = strlen(text2);
    cout << "strlen(text2) =  " << i << endl;
    cout << "task5. Given a string, need to delete given symbol. \n";
    char text3[255] = "Lorem Ipsum is simply DUMMY text OF the printing AND typesetting industry.\n";
    /*char text4[255];
    DelSymbol(text3, text4, 255);*/
    cout << "I have no idea how to solve it\n";
    cout << "Task6. need to make the proggram which count amount of spaces, vowels and consonants and punctuations marks\n";
    char text4[255] = "Lorem Ipsum is simply DUMMY text OF the printing AND typesetting industry.\n";
    int size4 = 255;
    char vowels[] = {'a','e','i','o','u','y'};
    char consonants[] = {'b','c','d','f','g','h','j','k','l','m','n','p','r','s','t','v','w','x','z'};
    char punctuation[] = { '!','?', ',','.'};
    int AmountOfVowels = 0;
    int AmountOfConsonants = 0;
    int AmountOfSpaces = 0;
    int AmountOfPunctuation = 0;
    cout << text4 << endl;
    for (int i = 0; i < size4; i++)
    {
        for (int j = 0; j < sizeof(vowels); j++)
        {
            if (text4[i] == '\0')
            {
                break;
            }
            if (tolower(text4[i]) == vowels[j])
            {
                AmountOfVowels++;
            }

        }

    }
    cout << "The number of vowels is: " << AmountOfVowels << endl;
    for (int i = 0; i < size4; i++)
    {
        for (int j = 0; j < sizeof(consonants); j++)
        {
            if (text4[i] == '\0')
            {
                break;
            }
            if (tolower(text4[i]) == consonants[j])
            {
                AmountOfConsonants++;
            }

        }

    }
    cout << "The number of consonants is: " << AmountOfConsonants << endl;
    for (int i = 0; i < size4; i++)
    {
        if (text4[i] == '\0')
        {
            break;
        }
        if (text4[i] == ' ')
            AmountOfSpaces++;

    }
    cout << "The number of spaces is: " << AmountOfSpaces << endl;
    for (int i = 0; i < size4; i++)
    {
        for (int j = 0; j < sizeof(punctuation); j++)
        {
            if (text4[i] == '\0')
            {
                break;
            }
            if (tolower(text4[i]) == punctuation[j])
            {
                AmountOfPunctuation++;
            }

        }

    }
    cout << "The number of punctuation marks is: " << AmountOfPunctuation << endl;


}

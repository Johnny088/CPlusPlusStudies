#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;

struct WashingMashines {
    char name[20];
    char color[20];
    float width;
    float length;
    float height;
    float power;
    int spead;
    int temperature;
};

void FillWashingMashine(const char& filename)
{
    ofstream outFiles(&filename, ios_base::app);
    if (!outFiles)
    {
        cout << "Error opening file for writing!" << endl; return;
    }
    WashingMashines s;
    cout << "Enter name : ";
    cin >> s.name;
    cout << "Enter the color : ";
    cin >> s.color;
    cout << "Enter the width : ";
    cin >> s.width;
    cout << "Enter length : ";
    cin >> s.length;
    cout << "Enter power : ";
    cin >> s.power;
    cout << "Enter spead : ";
    cin >> s.spead;
    cout << "Enter temperature : ";
    cin >> s.temperature;

    outFiles << s.name << "\n" << s.color << "\n" << s.width << "\n" << s.length << "\n" << s.power << "\n" << s.spead << "\n" << s.temperature << "\n";
    outFiles.close();
    cout << "product was added to file successfully! " << endl;
}
void printWashing()
{
    cout 
}
void ImportFile(const char& filename)
{
    ifstream infile(&filename);
    if (!infile)
    {
        cout << "We have a trouble with opening this file" << endl;
        return;
    }
    WashingMashines p;
    while (infile >> p.name >> p.color >> p.width >> p.length >> p.power >> p.spead >> p.temperature)
    {
        infile.ignore();
        printWashing();
    }
    infile.close();
}

int main()
{
    const char filename[20] = { "WashingMashines.txt"};
    FillWashingMashine(*filename);
}


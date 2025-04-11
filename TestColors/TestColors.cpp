
#include <iostream>
#include <windows.h>
using namespace std;
void SetColor(int color)//0-15
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
int main()
{
	for (int i = 0; i < 16; i++)
	{
		SetColor(i); cout << "Hello World " << i << "\n";
	}
}


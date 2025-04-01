#include <iostream>
#include <Windows.h>
using namespace std;

void SetColor(int color)//0-15
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); // Set Colors
}
int main()
{
	typedef void (*NumberOperation)(int&); // the pointer of function
}


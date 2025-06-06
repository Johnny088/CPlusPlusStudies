#include <iostream>
#include <windows.h>
using namespace std;
void SetColor(int color)//0-15
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

//#pragma comment(lib, "winmm.lib")
//
//int main()
//{
//    PlaySound(TEXT("ROARING_LION_AUo.wav"), NULL, SND_FILENAME | SND_SYNC);
//    return 0;
//}
int main()
{
	for (int i = 0; i < 16; i++)
	{
		SetColor(i);
		cout << "Hello world " << i <<"\n";
	}
}

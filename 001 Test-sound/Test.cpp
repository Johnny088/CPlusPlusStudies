#include <iostream>
#include <windows.h>

#pragma comment(lib, "winmm.lib")

int main()
{
    PlaySound(TEXT("ROARING_LION_AUo.wav"), NULL, SND_FILENAME | SND_SYNC);
    return 0;
}
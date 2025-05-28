#include <iostream>
#include <Windows.h>
#include <iomanip>
#define size 5
using namespace std;
void SetColor(int color)//0-15
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void IntroduseMe()
{
    string name, city;
    int age;
    cout << "what's your name: ";
    cin >> name;
    cout << "what's your city: ";
    cin >> city;
    cout << "How old are you: ";
    cin >> age;
    cout << "I'm " << name << endl << "I'm from " << city << endl << "I'm " << age << " years old\n";
}
//int stringlen(char* pointer, int size)
//{
//    int len = 0;
//    for (int i = 0; i < size; i++)
//    {
//        if (pointer[i] != '\0')
//            len++;
//        else
//            break;
//
//
//    }
//    return len;
//}
void one()
{
    cout << "hello\n";
}
//int print(int* num)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << num[i] << endl;
//    }
//    
//}
int Factorial(int num)
{
    if (num == 0)
    {
        cout << "Can`t fint factorial of 0" << endl;
        return -1;
    }
    if (num == 1)
    {
        return 1;
    }
    else
    {			//5*4   //3*2*1
        return num * Factorial(num - 1);
    }
}
void add(int * a)
{
    a++;
}
int main()
{
    /*IntroduseMe();*/
    /*const int size = 255;
    char text[size] = "Lorem Ipsum is simply DUMMY text OF the printing AND typesetting industry. LOREM Ipsum has been THE industry's standard dummy\n";
    int len = stringlen(text, size);
    cout << len;*/
 /*  for (int i = 0; i < 16; i++)
    {
        SetColor(i);
        cout << "Hello World!\n";
    }*/
    /*Sleep(2000);
    system("cls");*/
   /*for (int i = 0; i < 16; i++)
    {
        SetColor(i);
        cout << " Hello world " << i << "\n";
    }*/
    /*one();
    cout << one << endl;*/

    /*int array[size] = { 4,5,6,7,8 };
    int* parr = array;*/
   /*int a[5];
   int* b;
   b = nullptr;
   a[1] = 2;
   cout << a[1] << endl;*/

   /*int b = {35};
   cout << "b: " << b << endl;*/


  /* int c{ 35 };
   cout << "c: " << c << endl;

   c = (4 > 11) ? 4 : 11;
   cout << c;*/


   /*enum Priority { None, guest, administrator, manager, boss };
   cout << "Boss: " << boss << "\nGuest: " << guest << endl << "--------------------\n";
   int a{ 5 };
   int b = Factorial(a);
   cout << b;*/
    /*int a = 5;
    add(&a);
    cout << a;*/
    int x = 2.25;
    decltype(x) z = 15.5;
    cout << "decltype z" << z << endl;
    cout << "just x:" << x << endl;
    auto j = x;
    cout << "Auto j:" << j << endl;
    cout << "-----------------------------\n";
    x = 15;
    cout << "just x:" << x << endl;
    cout << "Auto j:" << j << endl;
}

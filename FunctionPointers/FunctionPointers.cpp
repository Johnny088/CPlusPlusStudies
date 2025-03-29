#include <iostream>
#include <Windows.h>
using namespace std;

void SetColor(int color)//0-15
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
int add(int a, int b)
{
	return a + b;
}
int division(int a, int b)
{
	return a / b;
}
int sub(int a, int b)
{
	return a - b;
}
int multy(int a, int b)
{
	return a * b;
}
void LowerCase(char* pointer, int size)
{
	SetColor(11);
	for (int i = 0; i < size; i++)
	{
		pointer[i] = tolower(pointer[i]);
		if (pointer[i] == '\0')
		{
			break;
		}
		
	
	}
	cout << pointer;
	SetColor(7);
}
void UpperCase(char* pointer, int size)
{
	SetColor(11);
	for (int i = 0; i < size; i++)
	{
		pointer[i] = toupper(pointer[i]);
		if (pointer[i] == '\0')
		{
			break;
		}
		

	}
	cout << pointer;
	SetColor(7);
}
int stringlen(char* pointer, int size)
{
	int len = 0;
	for (int i = 0; i < size; i++)
	{
		if (pointer[i] != '\0')
			len++;
		else
			break;


	}
	return len;
}
void ReversWay(char* pointer, int size)
{
	SetColor(11);
	int len = stringlen(pointer,size);
	for (int i = len; i >= 0; i--)
	{
		cout << pointer[i];
	}
	cout << "\n";
	SetColor(7);
}
void LowerCase2(char* pointer, int size)
{

	for (int i = 0; i < size; i++)
	{
		pointer[i] = tolower(pointer[i]);
		if (pointer[i] == '\0')
		{
			break;
		}


	}
}
void Capitalize(char* pointer, int size)
{
	SetColor(11);
	LowerCase2(pointer, size);
	for (int i = 0; i < size; i++)
	{
		if (isalpha(pointer[i]))
		{
			pointer[i] = toupper(pointer[i]);
			break;
		}
	}
	cout << pointer;
	SetColor(7);
}

int main()
{
	int(*pFunc[])(int, int) = { add, sub, multy, division };
	int x, y;
	char c;

	do 
	{
		cout << "Enter operation: ";
		cin >> c;
		cout << "Enter x and y:\n";
		cin >> x >> y;
		
		switch (c)
		{
		case '+':
			cout << pFunc[0](x, y) << "\n";
			break;
		case '-':
			pFunc[1] = sub;
			cout << pFunc[1](x, y) << "\n";
			break;
		case '*':
			cout << pFunc[2](x, y) << "\n";
			pFunc[2] = multy;
			break;
		case '/':
			cout << pFunc[3](x, y) << "\n";
		case 0:
			c = '0';
			break;
			
		default:
			break;
		}
		
	} while (c != '0');
	cout << "\n Task2. Make functions to change string to lowercase, upepcase,revers,capitalize,\n";
	const int size = 255;
	char text[size] = "Lorem Ipsum is simply DUMMY text OF the printing AND typesetting industry. LOREM Ipsum has been THE industry's standard dummy\n";
	char* ptext = text;
	SetColor(12); cout << "The original text is:\n";
	cout << text;
	SetColor(6); cout << "Lowercase is:\n";
	LowerCase(ptext, size);
	SetColor(6); cout << "Uppercase is:\n";
	UpperCase(ptext, size);
	SetColor(6); cout << "Revers is:\n";
	ReversWay(ptext, size);
	SetColor(6); cout << "Capitalize is:\n";
	Capitalize(ptext, size);
	void (*OptionsChar[4])(char*, int) = {LowerCase,UpperCase,Capitalize,ReversWay};
	int options;
	/*OptionsChar[2](ptext, size);*/
	SetColor(7);
	do
	{
		cout << "Enter The number of Options you wanna see.\n1. Transform to Lowercase\n2. Transform to Uppercase\n3. Transform to Capitalize\n4. Rewersway\n0. to exit\n";
		cin >> options;
		switch (options)
		{
		case 1:
			OptionsChar[0](ptext, size);
			/*cout << ptext << "\n";*/
			break;
		case 2:
			OptionsChar[1](ptext, size);
			/*cout << ptext << "\n";*/
			break;
		case 3:
			OptionsChar[2](ptext, size);
			/*cout << ptext << "\n";*/
			break;
		case 4:
			OptionsChar[3](ptext, size);
			/*cout << ptext << "\n";*/
		default:
			break;
		}

	} while (options != 0);
	
	SetColor(7);
}
#include <iostream>
#include <Windows.h>
using namespace std;


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
void Lowercase(char* pointer, int size)
{
	
	for (int i = 0; i < size; i++)
	{
		pointer[i] = tolower(pointer[i]);
		if (pointer[i] == '\0')
		{
			break;
		}
		
	
	}
	cout << pointer;
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
	cout << text;
	cout << "Lowercase is:\n";
	char* ptext = text;
	/*Lowercase(ptext, size);*/
	for (int i = 0; i < size; i++) 
	{
		text[i] = tolower(text[i]);
		/*cout << text[i];*/
		
		if (text[i] == '\0')
		{
			break;
		}

	}
	cout << text;

}
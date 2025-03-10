#include <iostream>
#include <iomanip>
using namespace std;
void triangle(int h, int w)
{
	/*h *= 2;*/
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			
			cout << "*";

		}
		cout << endl;
	}
}
void fuctorial(int a)
{
	int multy = 1;
	for (int i = 1; i <= a; i++)
	{
		multy *= i;
	}
	cout << multy << endl;
}
void issimple(int a)
{
	for (int i = (a / 2) + 1; i > 0; i--)
	{
		if (a % i == 0)
		{
			cout << "The number is NOT simple\n";
			break;
		}
		else
		{
			cout << "number is simple";
		}
	}
}

void main()
{
	cout << "Task1. Need to show the triangle, given high and width\n";
	triangle(10, 10);
	cout << endl << "Show fuctorial of number:\n";
	fuctorial(5);
	cout << endl << "task 3 Determine if the number is simple\n";
	issimple(4);
	



}
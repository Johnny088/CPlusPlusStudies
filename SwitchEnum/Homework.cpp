#include <iostream>
using namespace std;
int main()
{
	cout << " Show all numbers from 14 to 123 (while)\n";
	int number1 = 14;
	while (number1 < 123)
	{
		cout << number1 << " ";
		number1++;

	}
	cout << endl <<" need to show all positive odd numbers from 1 to 100 (while):\n";
	number1 = 1;
	while (number1 < 100)
	{
		if (number1 % 2 != 0)
		{
			cout << number1 << " ";

		}
		number1++;
	}
	cout << endl << "Given N>0, N - mount of numbers. Need to count each negative number (while)\n";
	int mount;
	int count =0;
	number1 = 0;
	int count2 = 1;
	cout << "Enter the mount of numbers(N):\n";
	cin >> mount;
	while (mount>0)
	{
		cout << "enter the " << count2 << " number\n";
		cin >> number1;
		if (number1 < 0)
		{
			count++;
		}
		mount--;
		count2++;

	}
	cout << endl << "user gave us: " << count << " negative numbers\n";
	cout << "Need to show all odd numbers from 100 to 1 with (do ... while)\n";
	number1 = 101;
	do
	{
		number1--;
		if (number1 % 2 != 0)
		{
			cout << number1 << " ";
		}
		
		
	} while (number1 > 1);
	cout << endl << "Making the program to multiply 5 given numbers (Do ... while)\n";
	count = 5;
	count2 =1;
	int multy = 1;
	cout << "give me 5 numbers\n";
	do
	{
		cout << "give me the " << count2 << " number.\n";
		cin >> number1;
		multy *= number1;
		count--;
		count2++;
	} while (count >= 1);
	cout << endl << multy << endl;
	cout << endl << "\nExtra tasks for 12" << endl;
	cout << endl << "\nmaking a program to find the sum of numbers in range from 1 to 50 and a multiple of 4\n";
	number1 = 1;
	int sum = 0;
	while (number1 <= 50)
	{
		if (number1 % 4 == 0)
		{
			cout << number1 << " ";
			sum += number1;
		}
		number1++;
	}
	cout << endl << sum << endl;
	cout << endl << "The second way (do ... while)" << endl;

	number1 = 1;
	sum = 0;
	do
	{
		if (number1 % 4 == 0)
		{
			cout << number1 << " ";
			sum += number1;
		}
		number1++;

	} while (number1 <= 50);
	cout << endl << sum << endl;
	cout << endl << "Show all numbers until given number by user." << endl;
	cout << endl << "Give me the number" << endl;
	number1 = 0;
	int number2;
	cin >> number2;
	do
	{
		cout << number1 << " ";
		number1++;

	} while (number1 <= number2);
	


}
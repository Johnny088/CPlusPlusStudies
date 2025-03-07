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
	cout << endl << "given two numbers of range by user. Need to determine: 1 - all even numbers; 2 - all odd numbers; 3 - all numbers that are miltiples of 7\n";
	cout << "Give me the number one\n";
	cin >> number1;
	cout << "Give me the number two\n";
	cin >> number2;
	int number3;
	int number4;
	int number5;
	number3 = number1;
	if (number1 > number2)
	{
		number1 = number2;
		number2 = number3;
		cout << "The number one is:\n" << number1 << "\nThe number two is:\n" << number2 << endl;
	}
	number4 = number1;
	number5 = number1;
	cout << "\nAll even numbers are:\n";
	while (number1 <= number2)
	{
		if (number1 % 2 == 0)
		{
			cout << number1 << " ";
		}
		number1++;
	}
	cout << "\nAll odd numbers are:\n";
	while (number4 <= number2)
	{
		if (number4 % 2 != 0)
		{
			cout << number4 << " ";
		}
		number4++;
	}
	cout << "\nAll numbers that are multiples of 7:\n";
	while (number5 <= number2)
	{
		if (number5 % 7 == 0)
		{
			cout << number5 << " ";
		}
		number5++;
	}
	cout << endl << "Given range of two numbers by user. Determine sum of numbers in this range\n";
	cout << "Give me the number one\n";
	cin >> number1;
	cout << "Give me the number two\n";
	cin >> number2;
	number3 = number1;
	sum = 0;
	if (number1 > number2)
	{
		number1 = number2;
		number2 = number3;
		cout << "\nThe number one is:\n" << number1 << "\nThe number two is:\n" << number2 << endl;
	}
	while (number1 <= number2)
	{
		sum += number1;
		number1++;
	}
	cout << "\n The sum of numbers is: " << sum << endl;
	cout << " User gives some numbers, need counting the sum of hte numbers until this user push zero:\n";
	sum = 0;
	number1;
	while (number1 != 0)
	{
		cout << "Enter the number\n";
		cin >> number1;
		sum += number1;
	}
	cout << endl << "The sum of numbers equil: " << sum << endl;
}
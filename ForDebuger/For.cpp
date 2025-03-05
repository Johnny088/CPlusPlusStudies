#include <iostream>
using namespace std;
int main()
{
	cout << "Show each number in from 1 to given number by user. \nEnter your number:\n";
	int number;
	cin >> number;
	for (int i = 1; i <= number; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << "Given a range. Need to show all even numbers, all odd numbers and all numbers % 7 = 0\n";
	int number1;
	int number2;
	cout << "give the first number\n";
	cin >> number1;
	cout << "give the first number\n";
	cin >> number2;

	
	int number3;
	int number4;
	int number5;
	number3 = number1;
	if (number1 > number2)
	{
		number1 = number2;
		number2 = number3;
	}
	number4 = number1;
	number5 = number1;

	for (int i = number1; i <= number2; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << " ";
		}
	}
		
	cout << endl;
		
	for (int i = number4; i <= number2; i++)
	{
		if (i % 2 != 0)
		{
			cout << i << " ";
		}
	}
		
	cout << endl;
	for (int i = number5; i <= number2; i++)
	{
		if (i % 7 == 0)
		{
			cout << i << " ";
		}
	}
		
	cout << endl;
	cout << "Given range. Need to sum all number in range from the first value to second value:\n";
	cin >> number1;
	cin >> number2;
	number3 = number1;
	if (number1 > number2)
	{
		number1 = number2;
		number2 = number3;
	}
	int sum = 0;
	for (int i = number1; i <= number2; i++)
	{
		sum += i;
	}
	cout << "Sum of number in your range is: " << sum << endl;
	number, sum = 0;
	cout << "given numbers by user. need to determine the sum of numbers\n";
	for (; ; )
	{
		cout << "\nEnter number:\n ";
		cin >> number;
		if (number == 0)break;
		sum += number;
	}

	cout << "Sum of all numbers : " << sum << endl;
	cout << "the game guess the number\n Enter the number from 1 to 500, and try to guess the number\n";
	int guessnumber = 356; //you didn't see it 

	int count;
	for (count = 1; ; count++)
	{
		cout << "Enter the number: \n";
		cin >> number;
		if (number == guessnumber)
		{
			cout << "My Congratulations you're winner\n You've tried " << count << " times to guess it\n";
			break;
		}
		else if (number < guessnumber)
			cout << "Your number is smaller than the 'Guess Number'\n";
		else if (number > guessnumber)
			cout << "Your number is bigger than the 'Guess Number'\n";
	}
	float cash;
	float res;
	cout << "Exchange\n Enter the mount of money\n";
	cin >> cash;
	
	cout << " Enter what do you want to exchange\n [1] Euro to Hrn\n [2] Dollar to Hrn\n [3] Hrn to Euro\n [4] Hrn to Dollar \n";
	int key;
	cin >> key;
	switch (key)
	{
	case 1:
		res = cash * 44.17;
		cout << res << endl;
		break;
	case 2: 
		res = cash * 41.30;
		cout << res << endl;
		break;
	case 3: 
		res = cash * 0.023;
		cout << res << endl;
		break;
	case 4:
		res = cash * 0.024;
		cout << res << endl;
		break;

	default:
		break;
	}






}
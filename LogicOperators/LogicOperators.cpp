
#include <iostream>
using namespace std;

int main()
{
	cout << "1. Given the sides of a triangle.Determine what type of triangle it is(equilateral, isosceles, right - angled).\n";
	cout << " Enter the value of triangle sides: \n";
	float a;
	cin >> a;
	float b;
	cin >> b;
	float c;
	cin >> c;
	if (a == b && b == c)
	{
		cout << "this triangle has is eqilateral\n\n\n";
	}
	else if (a == b || b == c || a == c)
	{
		cout << "the triangle is: isosceles\n\n\n";

	}
	else if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == b * b + a * a))
	{
		cout << "the triangle is angled\n\n\n";
	}
	else
	{
		cout << "The triangle is not match of these types\n\n\n";
	}
	cout << "Given the size of the brick and the hole of the wall. Need to determine if it's possible that this brick is in fit in this hole\n";
	
	cout << "Given 3 numbers. Need to determine if there are positive numbers\n\n";
	cout << "Enter three numbers: \n\n";
	int number1;
	cin >> number1;
	int number2;
	cin >> number2;
	int number3;
	cin >> number3;
	if (number1 > 0)
	{
		cout << " the firts number " << number1 << " is positive\n\n\n";
	}
	if (number2 > 0)
	{
		cout << " the second number " << number2 << " is positive\n\n\n";
	}
	if (number3 > 0)
	{
		cout << " the third number " << number3 << " is positive\n\n\n";
	}
	cout << "given the number.Determine if it's in fit in the line segments [2,5] and [-1;1] \n\n";
	cout << "Enter your number: ";
	int LineNumber;
	cin >> LineNumber;
	if ((LineNumber >= 2 && LineNumber <= 5) || (LineNumber >= -1 && LineNumber <=1))
	{
		cout << "this number is from your line segments\n\n";
	}
	else
	{
		cout << "Your number is out of line segments \n\n";
	}
	cout << "Given 3 numbers. Determine if they are equal each other\n";
	cout << "Enter three numbers \n";
	int	number01;
	cin >> number01;
	int	number02;
	cin >> number02;
	int	number03;
	cin >> number03;
	if (number01 == number02 && number01 == number03)
	{
		cout << "The numbers are equal each other\n\n";
	}
		
	else
	{
		cout << "Numbers aren't equal each other\n\n";
	}
	cout << "Extra tasks: \n\t Given two numbers if these numbers aren't similar need to replace both of them. \n";
	cout << "Enter the number one:\n";
	cin >> number1;
	cout << "Enter the number two:\n";
	cin >> number2;
	number3 = number1;

	if (number1 == number2)
	{
		cout << "numbers1 is equil to numbers two \n";
	}
		
	else
	{
		number1 = number2;
		number2 = number3;
		cout << "Number one is: " << number1 << endl << "Number two is: " << number2 << endl;
	}
	int number;
	int sum = 0;
	cout << "Given the number from user in range 101-998 Need to count numbers of these number and sum of them\n";
	cout << "Enter the number from 101 to 998\n";
	cin >> number;
	sum = (number % 10) + ((number / 10) % 10) + (number / 100);
	
	cout << "The numbers are 3, because our range is between the 3 simbol numbers \n and the sum of them is " << sum << endl;
	int hour;
	int minutes;
	int seconds;
	cout << "Given the current time. Determine if it can be correct\n";
	cout << "What time is it now??\n";
	cout << "hour is: ";
	cin >> hour;
	cout << "Minutes is: ";
	cin >> minutes;
	cout << "Seconds is: ";
	cin >> seconds;
	if (0 > hour || hour > 23 || 0 > minutes || minutes > 59 || 0 > seconds || seconds > 59)
	{
		cout << "Your time " << hour << "." << minutes << "." << seconds << "." << " is incorrect. \n\t\tHey, are you kidding me?\n";
	}
	else
	{
		cout << "Your time " << hour << "." << minutes << "." << seconds << "." << " is correct  ";
	}
	if (hour > 5 && hour < 12)
	{
		cout << "Good Morning: \n";
	}
	else if (hour >= 12 && hour < 18)
	{
		cout << "Good day: \n";
	}
		
	else if (hour >= 18 && hour < 22)
	{
		cout << "Good evening: \n";
	}
		
	else if (hour >= 22 && hour < 24 || hour >= 0 && hour < 6)
	{
		cout << "Good night: \n";
	}
		
	cout << "Need to write the program to determine whitn one number of three numbers is a minimun. \n";
	cout << "Enter the first number:\n ";
	cin >> number;
	cout << "Enter the second number: \n";
	cin >> number2;
	cout << "Enter the third number: \n";
	cin >> number3;
	if (number < number2 && number < number3)
		cout << "the number " << number << " is minimum of these numbers";
	else if (number2 < number && number2 < number3)
		cout << "the number " << number2 << " is minimum of these numbers";
	else if (number3 < number2 && number3 < number)
		cout << "the number " << number3 << " is minimum of these numbers";

}
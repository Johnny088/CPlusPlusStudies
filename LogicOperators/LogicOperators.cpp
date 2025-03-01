
//#include <iostream>
//using namespace std;

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
	if (number01 == number2 && number1 == number3)
	{
		cout << "The numbers are equal each other\n\n";
	}
		
	else
	{
		cout << "Numbers aren't equal each other";
	}

}
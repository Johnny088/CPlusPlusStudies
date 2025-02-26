
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
		cout << "this triangle has is rivn";
	}
	else if (a == b || b == c || a == c)
	{
		cout << "the triangle is: rivnobedreniy";

	}
	else if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == b * b + a * a))
	{
		cout << "the triangle is primocutniy";
	}
	


}
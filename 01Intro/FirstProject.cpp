#include<iostream>

using namespace std;
void main()
{
	cout << "Enter the diagonal of tv in inch: ";
	float inch;
	cin >> inch;
	const float size = 2.54;
	float total = inch * size;
	cout << "the size in santimetr is: " << total;

	

}
#include<iostream>

using namespace std;
void main()
{
	cout << "Enter the diagonal of tv in inch: ";
	float inch;
	cin >> inch;
	const float size = 2.54;
	float total = inch * size;
	cout << "the size in santimetr is: " << total << endl;

	cout << "task#1\n";
	cout << "I \n\tlove \n\t\tyou \n\t\t\tC++!\n";
	cout << "task#2\n";
	cout << "Name: \t\t\t\tIvan \nSurname: \t\t\tDzhyhyr \nLast name: \t\t\tMichalovich \n\nDate of bith: \t\t\t24.07.88 \ncity: \t\t\t\tDnipro \nage: \t\t\t\tI'm too scary to count it \nHobby: \t\t\t\tC++ \n::...................... . . . . . . . ................::\n";
	cout << "task#4\n";
	cout << "How many does your humster eat per day in gramm? ";
	float MountOfFood;
	cin >> MountOfFood;
	float total2;
	total2 = (MountOfFood * 30) / 1000;
	cout <<"Your humster eats " << total2 <<"kg per month\n";
	cout << "Math tasks\n \t\t\tEnter three numbers through enter:\n";
	int number1;
	cin >> number1;
	int number2;
	cin >> number2;
	int number3;
	cin >> number3;
	int total3;
	total3 = number1 + number2 + number3;
	cout << "sum of these numbers is: " << total3 << endl;
	float average;
	average = (number1 + number2) / 2;
	cout << "the everage of your numbers: " << number1 << " and " << number2 << " is: " << average << endl;


}
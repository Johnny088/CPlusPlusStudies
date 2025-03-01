

#include <iostream>
using namespace std;
int main()
{
	cout << "task#1 show all numbers from 1 to 100\n";
	int number = 1;
	while (number <= 100)
	{
		cout << number << " ";
		number++;
	}
	cout << "\n task#2 Show all even numbers until 200\n";
	number = 1;
	int counter = 0;
	while (number <= 200)
	{ 
		if (number % 2 == 0)
		{
			cout << number << " ";
			counter++;
			

		}
		number++;
		
	
	}
	cout << endl << counter << endl;
	cout << "task#3 enter the mount of numbers:\n";
	counter;
	cin >> counter;
	cout << "  Enter your numbers:\n";
	int sum = 0;
	while (counter>0)
	{ 
		int number;
		cin >> number;
		if (number % 2 == 0)
		{
			sum += number;
		}
		counter--;
	}
	cout << "sum even numbers is: " << sum << endl;

	cout << "Task4 given 10 mount of numbers. Finding sum and averege number of them: \n";
	counter = 10;
	float sum2 = 0;
	number = 0;
	float averege;
	cout << "Enter 10 numbers \n";
	while (counter > 0)
	{
		cin >> number;
		sum2 += number;
		counter--;
	}
	averege = (sum2 / 10);
	cout << " The sum of numbers is: " << sum2 << " The averege of number is " << averege << endl;
	cout << " Task#5 showing numbers from 100 to 1 with do...while\n";
	number = 100;
	do 
	{
		cout << number << " ";
		number--;

	} while (number != 0);

	cout << "\n write the program wich calculate sum of seven given numbers \n";
	sum = 0;
	counter = 7;
	number = 0;
	cout << "enter seven numbers: \n";
	do
	{
		cin >> number;
		sum += number;
		counter--;

	} while (counter != 0);
	cout << "\nthe sum of your numbers is: " << sum << endl;


	
		



	
}


#include <iostream>
using namespace std;
int main()
{
	cout << "Given a country. need to show the capital of that country\nEnter the number of country to know the capital of this country:\n[1] - The USA\n[2] - The United Kingdom\n[3] - France\n[4] - Spain\n[5] - Italy\n";
	int key;
	cin >> key;

	switch (key)
	{
	case 1:
		cout << "The capital of the USA is: Washington\n";
		break;
	case 2:
		cout << "The capital of the United Kingdom is: London\n";
		break;
	case 3:
		cout << "The capital of France is: Paris\n";
		break;
	case 4:
		cout << "The capital of France is: Madrid\n";
		break;
	case 5:
		cout << "The capital of France is: Rome\n";
		break;
	default:
		cout << "Error choice\n";
		break;
	}
	cout << "Given the number of the day. determine if this day is a weekend\n Enter the number of the day from 1 to 7\n";
	cin >> key;
	switch (key)
	{
	case 1:
		cout << "It's Monday, and it's not a weekend\n";
		break;
	case 2:
		cout << "It's Tuesday, and it's not a weekend\n";
		break;
	case 3:
		cout << "It's Wednesday, and it's not a weekend\n";
		break;
	case 4:
		cout << "It's Thursday, and it's not a weekend\n";
		break;
	case 5:
		break;
		cout << "It's Friday, and it's not a weekend\n";
	case 6:
		cout << "It's Saturday, and it's  a weekend. Let's go and have fun\n";
		break;
	case 7:
		cout << "It's Sonday, and it's a weekend. Let's go and have fun\n";
		break;
	default:
		break;
	}
	cout << "Next Task\n Given a way of the ship (North, South, East, West). If it turns back, where this ship go?\n";
	cout << "Enter the way:\n[1] - North\n [2] - South\n [3] - East \n [4] West\n";
	cin >> key;
	switch (key)
	{
	case 1:
		cout << "It will be going to South\n";
		break;
	case 2:
		cout << "It will be going to North\n";
		break;
	case 3:
		cout << "It will be going to West\n";
		break;
	case 4:
		cout << "It will be going to East\n";
		break;
	default:
		break;
	}
	cout << "Task4.\n Need to show the type of animal from the menu:\n[1] - Dolphin\n[2] - Lion\n[3] - Panda\n[4] - Hamster\n[5] - Chameleon\n[6] - Green sea turtle\n[7] - Kinkajou\n";
	cin >> key;
	switch (key)
	{
	case 1:
		cout << "Dolphin is: Omnivore \n";
		break;
	case 2:
		cout << "Lion is predator\n";
		break;
	case 3:
		cout << "Panda is herbivorous\n";
		break;
	case 4:
		cout << "Hamster is omnivore\n";
		break;
	case 5:
		break;
		cout << "Chameleon is herbivorous\n";
	case 6:
		cout << "Green sea turtle is herbivorous\n";
		break;
	case 7:
		cout << "Kinkajou is omnivore \n";
		break;
	default:
		break;
	}
}
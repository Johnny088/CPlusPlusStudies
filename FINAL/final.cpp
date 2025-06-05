#include <iostream>
#include "Animal.h"
#include <vector>


using namespace std;
class Zoo
{
	vector<Animal*> animals;
	Animal* an;
public:
	void AddAnimal()
	{
		int choice;
		cout << "Who you wanna add:\n1 - Lion \n2 - Monkey\nEnter the choice: "; cin >> choice;
		string name, type, habitat, species;
		float weight, speed;
		switch (choice)
		{
		case 1:
			
			cout << "Enter the name of the lion: "; cin >> name;
			cout << "Enter the type of the lion: "; cin >> type;
			cout << "Enter the weight of the lion: "; cin >> weight;
			cout << "Enter the speed of the lion: "; cin >> speed;
			cout << "Enter the habitat of the lion: "; cin >> habitat;
			cout << "Enter the habitat of the lion: "; cin >> species;
			animals.push_back(new Lion(name, Type::terrestrial,weight,speed,habitat,species));
			break;
		case 2:
			cout << "Enter the name of the lion: "; cin >> name;
			cout << "Enter the type of the lion: "; cin >> type;
			cout << "Enter the weight of the lion: "; cin >> weight;
			cout << "Enter the speed of the lion: "; cin >> speed;
			cout << "Enter the habitat of the lion: "; cin >> habitat;
			cout << "Enter the habitat of the lion: "; cin >> species;
			animals.push_back(new Monkey(name, Type::terrestrial, weight, speed, habitat, species));
			break;
		default:
			break;
		}

	}
	void menu()
	{
		cout << "\tWelcome to our Zoo "
	}
};


void main()
{
	
}
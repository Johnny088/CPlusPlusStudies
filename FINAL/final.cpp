#include <iostream>
#include "Animal.h"
#include <vector>
#include "Food.h"
void SetColor1(int color)//0-15
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}


using namespace std;
class Zoo
{
	vector<Animal*> animals;
	Food * food;
public:
	Zoo() :animals(0), food() {}
	void AddAnimal()
	{
		int choice;
		cout << "Who you wanna add:\n1 - Lion \n2 - Monkey\n3 - elephant\nEnter the choice: "; cin >> choice;
		string name, habitat, species;
		float weight, speed;
		switch (choice)
		{
		case 1:
			
			cout << "Enter the name of the lion: "; cin >> name;
			cout << "Enter the weight of the lion: "; cin >> weight;
			cout << "Enter the speed of the lion: "; cin >> speed;
			cout << "Enter the habitat of the lion: "; cin >> habitat;
			cout << "Enter the species of the lion: "; cin >> species;
			animals.push_back(new Lion(name, Type::terrestrial,weight,speed,habitat,species));
			SetColor1(10); cout << "The animal was added\n";
			break;
		case 2:
			cout << "Enter the name of the monkey: "; cin >> name;
			cout << "Enter the weight of the monkey: "; cin >> weight;
			cout << "Enter the speed of the monkey: "; cin >> speed;
			cout << "Enter the habitat of the monkey: "; cin >> habitat;
			cout << "Enter the species of the monkey: "; cin >> species;
			animals.push_back(new Monkey(name, Type::terrestrial, weight, speed, habitat, species));
			SetColor1(10); cout << "The animal was added\n";
			break;
		case 3:
			cout << "Enter the name of the Elephant: "; cin >> name;
			cout << "Enter the weight of the elephant: "; cin >> weight;
			cout << "Enter the speed of the elephant: "; cin >> speed;
			cout << "Enter the habitat of the elephant: "; cin >> habitat;
			cout << "Enter the species of the elephant: "; cin >> species;
			animals.push_back(new Elephant(name, Type::terrestrial, weight, speed, habitat, species));
			SetColor1(10); cout << "The animal was added\n";
			break;
		default:
			break;
		}
		
	}
	void showAnimals()
	{
		for (int i = 0; i < animals.size(); i++)
		{
			animals[i]->show();
			system("pause");
		}
	}
	//Food
	void BuyFood()
	{
		food->BuySomeFood();
	}
	void AmountOfFood()
	{
		food->RestOfFood();
	}
	void NextDay()
	{
		/*if (animals.size() !=0 );
		{
			int i = 0;
			for (auto animal : animals)
			{
				animals[i].
			}

		}*/
	}

	~Zoo()
	{
		for (auto animal : animals)
		{
			delete animal;
			
		}
		animals.clear();
	}
	
};

void menu()
{
	
	Zoo zoo1;
	int ChoiceMenu;
	do
	{
		SetColor1(3);
		cout << "\tWelcome to our Zoo:\n\nMain menu\n1 - add an animal.\n2 - Show animals.\n3 - Buy some food\n4 - Show the rest of food\n0 - exit.\n"; cin >> ChoiceMenu;
		switch (ChoiceMenu)
		{
		case 1:
			zoo1.AddAnimal();
			break;
		case 2:
			zoo1.showAnimals();
			break;
		case 3:
			zoo1.BuyFood();
			break;
		case 4:
			zoo1.AmountOfFood();
			break;
		case 0:
			SetColor1(7);
			break;
		default:
			break;
		}

	} while (ChoiceMenu != 0);
	
	
}



void main()
{
	/*Zoo z1;
	z1.AddAnimal();*/
	menu();
}
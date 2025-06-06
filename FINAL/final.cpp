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
	Zoo() :animals(0), food(new Food()) {}
	void AddAnimal()
	{
		int choice;
		SetColor1(14); cout << "Who you wanna add?"; SetColor1(3); cout << "\n1 - Lion \n2 - Monkey\n3 - elephant\nEnter the choice: "; cin >> choice;
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
			animals.push_back(new Lion(name,weight,speed,habitat,species));
			SetColor1(10); cout << "The animal was added\n";
			break;
		case 2:
			cout << "Enter the name of the monkey: "; cin >> name;
			cout << "Enter the weight of the monkey: "; cin >> weight;
			cout << "Enter the speed of the monkey: "; cin >> speed;
			cout << "Enter the habitat of the monkey: "; cin >> habitat;
			cout << "Enter the species of the monkey: "; cin >> species;
			animals.push_back(new Monkey(name, weight, speed, habitat, species));
			SetColor1(10); cout << "The animal was added\n";
			break;
		case 3:
			cout << "Enter the name of the Elephant: "; cin >> name;
			cout << "Enter the weight of the elephant: "; cin >> weight;
			cout << "Enter the speed of the elephant: "; cin >> speed;
			cout << "Enter the habitat of the elephant: "; cin >> habitat;
			cout << "Enter the species of the elephant: "; cin >> species;
			animals.push_back(new Elephant(name, weight, speed, habitat, species));
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
		SetColor1(10); cout << "food was added\n";
	}
	void AmountOfFood()
	{
		SetColor1(14);
		food->RestOfFood();
	}
	void Checkanimals()
	{
		if (animals.size() > 0)
		{
			int state = animals[0]->CheckState();
			cout << "StateOfAnimals: ";
			switch (state)
			{
			case 1: SetColor1(4); cout << "the animal feel sick, it need to be treated\n"; break;
			case 2: SetColor1(14); cout << "the animals wanna eat, please feed them\n"; break;
			case 3: SetColor1(10); cout << "the animals are happy.\n"; break;
			}
		}
		
	}
	void NextDay()
	{
		if (animals.size() == 0)
		{
			cout << "you don't have any animal \n";
			return;
		}
			int state = animals[0]->CheckState();
			
				for (int i = 0; i < animals.size(); i++)
				{
					if (state == 3) 
					{
						animals[i]->SetState(State::hungry);
					}
					else if (state == 2)
					{
						animals[i]->SetState(State::sick);
					}
				}
	}

	~Zoo()
	{
		for (auto animal : animals)
		{
			delete animal;
			
		}
		animals.clear();
		delete food;
	}
	
};

void menu()
{
	
	Zoo zoo1;
	int ChoiceMenu;
	do
	{
		SetColor1(3);
		cout << "\tWelcome to our Zoo:\n\nMain menu\n1 - add an animal.\n2 - Show animals.\n3 - Buy some food\n4 - Show the rest of food\n5 - Check animals\n6 - Next day\n0 - exit.\n"; cin >> ChoiceMenu;

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
		case 5:
			zoo1.Checkanimals();
		case 0:
		case 6:
			zoo1.NextDay();
			break;
			SetColor1(7);
			break;
		default:
			break;
		}

	} while (ChoiceMenu != 0);
	
	
}



void main()
{
	menu();
}
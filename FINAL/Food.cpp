#include "Food.h"

void Food::BuySomeFood()
{
	int weight;
	cout << "Enter the number of pounds of food: "; cin >> weight;
	this->SetMeat(weight);
	this->SetGrass(weight);
	this->SetFruit(weight);
}

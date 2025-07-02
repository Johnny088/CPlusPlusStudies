#include "Food.h"

void Food::BuySomeFood()
{
	int weight;
	cout << "Enter the number of pounds of food: "; cin >> weight;
	const int a = this->GetMeat();
	const int b = this->GetGrass();
	const int c = this->Getfruit();
	this->SetMeat(weight + a);
	this->SetGrass(weight + b);
	this->SetFruit(weight + c);
}

#pragma once
#include <iostream>
using namespace std;
class Food
{
	int meat;
	int grass;
	int fruit;
public:
	Food() :meat(0), grass(0), fruit(0) {}
	//set
	inline void SetMeat(int weight)
	{
		this->meat = weight;
	}
	inline void SetGrass(int weight)
	{
		this->grass = weight;
	}
	inline void SetFruit(int weight)
	{
		this->fruit = weight;
	}
	//get
	inline void GetMeat() const
	{
		cout << meat << "\n";
	}
	inline void GetGrass() const
	{
		cout << grass << "\n";
	}
	inline void Getfruit() const
	{
		cout << fruit << "\n";
	}
	//other function
	void BuySomeFood();
	void RestOfFood()
	{
		cout << "the meat is: "; this->GetMeat(); cout << " pounds left\n";
		cout << "the grass is: "; this->GetGrass(); cout << " pounds left\n";
		cout << "the fruits is: "; this->Getfruit(); cout << " pounds left\n";
	}


};


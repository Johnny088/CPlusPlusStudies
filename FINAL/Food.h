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
	inline int GetMeat() const
	{
		/*cout << meat << "\n";*/
		return this->meat;
	}
	inline int GetGrass() const
	{
		/*cout << grass << "\n";*/
		return this->grass;
	}
	inline int Getfruit() const
	{
		/*cout << fruit << "\n";*/
		return this->fruit;
	}
	//other function
	void BuySomeFood();
	void RestOfFood()
	{
		cout << "the meat is: " << this->GetMeat() << " \tpounds left\n";
		cout << "the grass is: " << this->GetGrass() << " \tpounds left\n";
		cout << "the fruits is: " << this->Getfruit() << " \tpounds left\n";
	}


};


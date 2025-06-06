#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#pragma comment(lib, "winmm.lib")
using namespace std;
enum Type { none, amphibians, aquatic, terrestrial, birds };
enum State{sick=1,hungry,happy};
class Animal
{
protected:
	string name;
	Type type;
	float weight;
	float speed;
	string habitat;
	string species;
	State state;
public:
	Animal():name("none"), type(none),weight(0),speed(0),habitat("nowhere"), species("none"), state(happy){}
	Animal(string n,Type t, float w, float s, string h, string sp, State st) :name(n), type(t), weight(w), speed(s), habitat(h), species(sp), state(st) {}
public:
	virtual void show()const=0;
	virtual void sound()const=0;
	void description() const;
	int CheckState() const
	{
		int a;
		if (state == hungry)
		{
			a = 2;
			return a;
		}
		else if (state == sick)
		{
			a = 1;
			return a;
		}
		else
			return 3;
	}
	inline void SetState(State other)
	{
		this->state = other;
	}
};






class Lion : public Animal
{
public:
	Lion(string n, float w, float s, string h, string sp) : Animal(n, terrestrial, w, s, h, sp, happy) {}
	void show() const override;
	void sound() const override;
	void description() const
	{
		cout << "I'm a lion...\n"; Animal::description();
	}
};
class Monkey: public Animal
{
public:
	Monkey(string n, float w, float s, string h, string sp) : Animal(n, terrestrial, w, s, h, sp, happy) {}
	void show() const override;
	void sound() const override;
	void description() const
	{
		cout << "I'm a monkey...\n"; Animal::description();
	}
	/*void function();*/
};
class Elephant : public Animal
{
public:
	Elephant(string n, float w, float s, string h, string sp) : Animal(n, terrestrial, w, s, h, sp, happy) {}
	void show() const override;
	void sound()const override;
	void description() const
	{
		cout << "I'm an Elephant...\n"; Animal::description();
	}
};

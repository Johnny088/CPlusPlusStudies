#include <iostream>
using namespace std;
enum BodyType {none, Sedan, Hatchback, Coupe, Van,Crossover,Microcar };
class Body
{
	BodyType type;
public:
	Body(): type(none) {}
	Body(BodyType type) : type(type) {}
	void show()
	{
		switch (type)
		{
		case none:cout << "none\n";
			break;
		case Sedan:
			cout << "Sedan\n";
			break;
		case Hatchback:
			cout << "Hatchback\n";
			break;
		case Coupe:
			cout << "Coupe\n";
			break;
		case Van:
			cout << "Van\n";
			break;
		case Crossover:
			cout << "Crossover\n";
			break;
		case Microcar:
			cout << "Microcar\n";
			break;
		default:
			break;
		}
	}


};
class Engine
{
	string type;
public:
	Engine() : type("none"){}
	Engine(string type) : type(type) {}
};



class Door
{
	string color;

};

class HeadLight
{
	string color;
};

enum WheelType {None, r13,r14,r15,r16};
class Wheel
{
	WheelType type;
public:
	Wheel():type(None) {}
	Wheel(WheelType type): type(type) {}
	
};

class Driver
{
	string name;
	string MiddleName;
	string surname;


};


class Car
{
	Door door;
	HeadLight headlight;
	Engine engine;
	Body body;
	WheelType wheel;
	Driver driver;

};
int main()
{
  
}


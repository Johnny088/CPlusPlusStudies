
#include <iostream>
using namespace std;

class Shape
{
	string name;
protected:
	float area;
public:
	Shape() :name("None"),area(0){}
	Shape(string n):name(n), area(0){}
	virtual void GetArea() {}
	virtual void show() { cout << "name: " << name << endl; cout << "Area: " << area << "cm" << endl;
	}

};

class Circle : public Shape
{
	
	float radius;
public:
	Circle() :radius(0),Shape() {}
	Circle(string n, float r):Shape(n), radius(r){}
	void GetArea() override
	{
		area = 3.14 * (radius * radius);
	}
	
};
class TriangleM : public Shape
{
	float a;
	float height;
public:
	TriangleM() : a(0), height(0), Shape() {}
	TriangleM(string n, float a, float height) : Shape(n), a(a), height(height) {}
	void GetArea() override
	{
		area = 1.0 /2.0 * a * height;
	}

};
int main()
{
	Circle circle("circle",10);
	circle.GetArea();
	circle.show();
	TriangleM trianglem("Triangle", 5, 7);
	trianglem.GetArea();
	trianglem.show();
}


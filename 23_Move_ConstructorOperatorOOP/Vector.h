#pragma once
#include "Point.h"
class Vector
{
	Point* points;
	int CountPoints;
public:
	Vector() : points(nullptr), CountPoints(0) {}
	Vector(const Point& other);
	Vector(Point&& other);
	Vector operator =(Point&& other);

	~Vector()
	{
		if (points != nullptr)
			delete[]points;
	}
	void add();
	void print();

};


#pragma once
#include "Point.h"
class Vector
{
	Point* points;
	int CountPoints;
public:
	Vector() : points(nullptr), CountPoints(0) {}
	Vector(const Vector& other);
	Vector(Vector&& other);
	Vector operator =(Vector& other);

	~Vector()
	{
		if (points != nullptr)
			delete[]points;
	}
	void add(Point point);
	void printm() const;

};


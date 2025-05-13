#include "Vector.h"



Vector::Vector(const Vector& other)
{
	this->CountPoints = other.CountPoints;
	this->points = new Point[other.CountPoints];
	for (int i = 0; i <other.CountPoints; i++)
	{
		points[i] = other.points[i];
	}
}

Vector::Vector(Vector&& other)
{
	CountPoints = other.CountPoints;
	points = other.points;
	other.points = nullptr;
}

Vector Vector::operator=(Vector& other)
{
	this->CountPoints = other.CountPoints;
	if (points != nullptr)
		delete[]points;
	this->points = new Point[other.CountPoints];
	for (int i = 0; i < other.CountPoints; i++)
	{
		points[i] = other.points[i];
	}
	return Vector();
}

void Vector::add(Point point)
{
	CountPoints++;
	Point* temp = new Point[CountPoints];
	for (int i = 0; i < CountPoints-1; i++)
	{
		temp[i] = points[i];
	}
	temp[CountPoints - 1] = point;
	if (points != nullptr)
		delete[]points;
	points = temp;
}

void Vector::printm()const
{
	for (int i = 0; i < CountPoints; i++)
	{
		points[i].print();
		
	}
}

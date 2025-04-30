#include "Point.h"
#include <iostream>
using namespace std;

void Point::print() const
{
	cout << "X: " << x << "\nY: " << y << "\n";
}

Point Point::operator++()
{
	this->x++;
	this->y++;
	return *this;
}

Point Point::operator--()
{
	this->x--;
	this->y--;
	return *this;
}

bool Point::operator>=(const Point& other)
{
		return ((this->x + this->y) >= (other.x + other.y));
}

bool Point::operator<=(const Point& other)
{
	return ((this->x + this->y) <= (other.x + other.y));
}

Point Point::operator!()
{
	x*=(-1);
	y*=(-1);
	return *this;
}



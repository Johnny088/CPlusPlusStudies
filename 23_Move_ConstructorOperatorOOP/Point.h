#pragma once
class Point
{
	int x;
	int y;
public:
	void print() const;
	Point():x(0), y(0){}
	Point(int x, int y):x(x), y(y){}
	Point operator ++();
	Point operator --();
	bool operator >=(const Point& other);
	bool operator <=(const Point& other);
	Point operator !();
};



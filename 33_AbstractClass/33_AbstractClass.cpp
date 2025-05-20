#include <iostream>
using namespace std;
#include <Windows.h>
void SetColor(int color)//0-15
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void SetPos(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);

}
struct Point
{
	int x;
	int y;
	Point() :x(0), y(0) {}
	Point(int x, int y) : x(x), y(y) {}
	void add()
	{
		x = rand() % 50;
		y = rand() % 50;
	}
	
};

class Shape
{
public:
	virtual void print()const = 0;
};



class Line :public Shape
{
	Point point;
	Point point2;
public:
	Line() :point(0,0) {}
	Line(int x, int y, int x2, int y2):point(x,y), point2(x2,y2){}
	void print() const override
	{
		
		SetPos(point.x, point.y); cout << "*";
		SetPos(point2.x, point2.y); cout << "*";

		
	}
};


class Rectangle1 :public Shape
{
	Point point;
	int height;
	int width;
public:
	Rectangle1() = delete;
	Rectangle1(int x, int y, int height, int width) : height(height), width(width), point(x, y) {}
	void print() const override
	{
		
		for (int i = 0; i < height; i++)
		{
			SetPos(point.x, point.y+i);
			for (int j = 0; j < width; j++)
			{
				SetColor(j);
				cout << "*"; Sleep(500);
			}
			
		}
		cout << "\n";
	}

};




class Poliline :public Shape
{
	Point points[15]{};
public:
	Poliline() :points() {}

	void FillOut()
	{
		for (int i = 0; i < 15; i++)
		{
			points[i].add();
		}
	}
	void print() const override
	{
		for (int i = 0; i < 15; i++)
		{
			SetColor(i+1); 
			SetPos(points[i].x, points[i].y); cout << "*";
			Sleep(2000);
		}
	}
	
};
int main()
{
	srand(time(0));
	Line line(5, 4, 9, 8);
	line.print();
	Sleep(5000);
	system("cls");
	Rectangle1 rect(5, 5, 5, 15);
	rect.print();
	Poliline pol;
	pol.FillOut();
	Sleep(5000);
	system("cls");
	pol.print();
	

}
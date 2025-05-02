#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point()
	{
		x = y = 0;//<------------
	}
	Point(int value)
	{
		x = y = value;
	}
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	Point(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
	}
	void Print()
	{
		cout << "X : " << this->x << " . Y : " << y << endl;
	}
	Point Plus(const Point& other)
	{
		Point res(this->x + other.x, this->y + other.y);
		return res;
	}
	Point Minus(const Point& other)
	{
		Point res(this->x - other.x, this->y - other.y);
		return res;
	}
	Point Multy(const Point& other)
	{
		Point res(this->x * other.x, this->y * other.y);
		return res;
	}
	//Overload operators
	//void operator [type] (arguments){}

#pragma region Binary Operators

	Point operator +(const Point& other)
	{
		Point res(this->x + other.x, this->y + other.y);
		return res;
	}
	Point operator -(const Point& other)
	{
		Point res(this->x - other.x, this->y - other.y);
		return res;
	}
	Point operator *(const Point& other)
	{
		Point res(this->x * other.x, this->y * other.y);
		return res;
	}
	Point operator /(const Point& other)
	{
		Point res(this->x / other.x, this->y / other.y);
		return res;
	}

	Point operator +=(const Point& other)
	{
		//a = a + 5
		//a += 5
		this->x += other.x;
		this->y += other.y;
		return *this;
	}
	Point operator =(const Point& other)
	{
		//a = 5, b = 9
		//a = b 
		this->x = other.x;
		this->y = other.y;
		return *this;
	}
#pragma endregion

#pragma region Uno Operators
	Point operator -()
	{
		return Point(this->x * -1, -this->y);
	}
	// ++ --
	// int a = 5; 
	// a++; - postfix form
	// ++a; - prefix
	// a = a + 1;
	//prefix form increment and decrement

	Point operator --()
	{
		this->x--;
		this->y--;
		return *this;
	}
	//postfix form increment and decrement
	Point operator ++(int a)
	{
		this->x++;
		this->y++;
		return *this;
	}
	Point operator --(int)
	{
		this->x--;
		this->y--;
		return *this;
	}

#pragma endregion

#pragma region ??????? ?????????
	bool operator >(const Point& other)
	{
		////1
		//if ((this->x + this->y) > (other.x + other.y))
		//{
		//	return true;
		//}
		//else
		//	return false;
		////2
		//bool res =  ((this->x + this->y) > (other.x + other.y)) ? true : false;
		//return res;

		//3
		return ((this->x + this->y) > (other.x + other.y));
	}

	bool operator >=(const Point& other)
	{
		return ((this->x + this->y) >= (other.x + other.y));
	}
	bool operator <=(const Point& other)
	{
		return ((this->x + this->y) <= (other.x + other.y));
	}
	bool operator ==(const Point& other)
	{
		return ((this->x == other.x) && (this->y == other.y));
	}
	bool operator !=(const Point& other)
	{
		//return ((this->x != other.x) || (this->y != other.y));
		return !(*this == other);
	}

#pragma endregion
	int getX()const
	{
		return x;
	}
	int getY()const
	{
		return y;
	}
	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	//friend function 
	friend Point operator ++(Point& other);
	friend ostream& operator << (ostream& out, const Point& other);
	friend istream& operator >> (istream& in, Point& other);

};

bool operator <(const Point& left, const Point& right)
{
	return ((left.getX() + left.getY()) < (right.getX() + right.getY()));
}
//Point operator ++(Point & other)
//{
//	other.setX(other.getX()+1);
//	other.setY(other.getY()+1);
//	return other;
//}
Point operator ++(Point& other)
{
	other.x++;
	other.y++;
	return other;
}
ostream& operator << (ostream& out, const Point& other)
{
	out << " x = " << other.x << " . y = " << other.y;
	return out;
}
istream& operator >> (istream& in, Point& other)
{
	in >> other.x;
	in >> other.y;
	return in;
}
int main()
{
	int a = 4, b = 7;
	cout << "Summa " << a + b << endl;
	cout << "Sub " << a - b << endl;
	cout << "Multy " << a * b << endl;

	Point p1(5, 7);
	Point p2(2, 3);
	cout << "Point 1 : "; p1.Print();
	cout << "Point 2 : "; p2.Print();

	//ostream cout;
	//istream cin;
	cout << p1 << endl;
	cout << p2 << endl;
	cin >> p1;
	cout << p1;


	//++p1;
	//cout << "Point 1 : "; p1.Print();
	//--p1;
	//cout << "Point 1 : "; p1.Print();
	//p1++;
	//cout << "Point 1 : "; p1.Print();
	//p1--;
	//cout << "Point 1 : "; p1.Print();

	//Point res;
	//res = p1 + p2;//res = p1.operator+(p2); //res = p1.Plus(p2);//p1 + p2;
	//res.Print();
	//res = p1 - p2; //res = p1.operator-(p2); //res = p1.Minus(p2);//p1 - p2;
	//res.Print();
	//res = p1 * p2;//res = p1.operator*(p2);//res = p1.Multy(p2);//p1 * p2;
	//res.Print();
	//res = p1 / p2;//res = p1.operator/(p2);
	//res.Print();

	//p1 += p2;
	//cout << "Point 1 : "; p1.Print();
	//cout << "Point 2 : "; p2.Print();
 //  
	//res = -p1;
	//res.Print();

	////p1 = p2;
	//cout << "Point 1 : "; p1.Print();
	//cout << "Point 2 : "; p2.Print();

	//if (p1 > p2)
	//{
	//	cout << "Point p1 > p2" << endl;
	//}
	//else
	//{
	//	cout << "Point p2 > p1" << endl;
	//}
	//if (p1 < p2)
	//{
	//	cout << "Point p1 < p2" << endl;
	//}
	//else
	{
		cout << "Point p2 < p1" << endl;
	}

	//if (p1 == p2)
	//{
	//	cout << "Point p1 == p2" << endl;
	//}
	//else
	//{
	//	cout << "Point p2 != p1" << endl;
	//}



}
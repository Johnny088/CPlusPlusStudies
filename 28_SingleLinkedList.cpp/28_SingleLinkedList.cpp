#include <iostream>
using namespace std;
template <typename T>
class List
{
	struct Node
	{
		T value;
		Node* next;
		Node(T value, Node* next) :value(value), next(next) {}
	};
	Node* head;
public:
	List()
	{
		head = nullptr;
	}
	void AddToHead(T value)
	{
		/*Node* newNode = new Node;
		newNode->value = value;
		newNode->next = head;*/
		Node* newNode = new Node(value, head);
		head = newNode;
	}
	void PrintList()
	{
		Node* current = head;
		while (current != nullptr)
		{
			cout << current->value << " ";
			current = current->next;
		}
		cout << endl;
	}
	
	~List()
	{
		Node* current = nullptr;
		while (head != nullptr)
		{
			current = head;
			head = head->next;
			delete current;
		}
	}
	void AddToTail(T value)
	{
		Node* newNode = new Node(value, nullptr);
		if (head == nullptr)
		{
			head = newNode;
		}
		else
		{
			Node* current = head;
			while (current->next != nullptr)
			{
				current = current->next;
			}
			current->next = newNode;
		}
	}
	T GetElement(int pos)
	{
		Node* current = head;
		int i = 1;
		while (current != nullptr)
		{
			if (i == pos) return current->value;
			current = current->next;
			i++;
		}
	}
	T operator[](int pos)
	{
		Node* current = head;
		int i = 1;
		while (current != nullptr)
		{
			if (i == pos) return current->value;
			current = current->next;
			i++;
		}
	}
	void DeleteFromTail()
	{

		if (head == nullptr)return;
		if (head->next == nullptr)
		{
			delete head;
			head = nullptr;
		}
		else
		{
			Node* current = head;
			while (current->next->next != nullptr)
			{
				current = current->next;
			}
			delete current->next;
			current->next = nullptr;
		}
	}
	void DelBegin()
	{
		Node* current = head;
		head == head->next;
		delete current;

	}

};
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
	friend ostream& operator <<(ostream& out, Point& value);
	
};
ostream& operator <<(ostream& out, Point& value)
{
	out << "x: " << value.x << "\n";
	out << "y: " << value.y <<"\n";
	return out;
}
class Vector
{
	List<Point> points;
	int size;

public:
	Vector()
	{
		size = 0;
	}
	void AddPointToHead(Point value)
	{
		size++;
		points.AddToHead(value);
	}
	void AddPointToTail(Point value)
	{
		size++;
		points.AddToTail(value);
	}
	void DellPointFromHead()
	{
		size--;
		points.DelBegin();
	}
	void DelPointFromTail()
	{
		size--;
		points.DeleteFromTail();
	}
	void Printv1()
	{
		points.PrintList();
	}
};
int main()
{

	Vector p;

	/*List<int> l;

	for (int i = 0; i < 10; i++)
	{
		l.AddToHead(i);
	}
	l.PrintList();
	l.AddToTail(100);
	l.AddToTail(200);
	l.AddToTail(300);
	l.PrintList();
	cout << "Element pos = 3 : " << l.GetElement(3) << endl;
	cout << "Element pos = 3 : " << l[3] << endl;
	for (int i = 0; i < 3; i++)
	{
		l.DeleteFromTail();
		l.PrintList();
	}*/
	p.Printv1();
	cout << "-------------------------------------\n";
	p.AddPointToHead(Point(5, 8));
	cout << "-------------------------------------\n";
	p.Printv1();
	 
}
#include <iostream>
using namespace std;
template<typename T_value>
class List
{
	struct Node
	{
		Node* prev;
		T_value value;
		Node* next;
		Node(Node* prev, T_value value, Node* next) :prev(prev), value(value), next(next) {}
	};

	Node* head;
	Node* tail;

public:
	List()
	{
		head = tail = nullptr;
	}
	bool IsEmpty()
	{
		return head == nullptr;
	}
	void AddToHead(T_value value)
	{
		Node* newNode = new Node(nullptr, value, head);

		if (IsEmpty())
		{
			head = tail = newNode;
		}
		head->prev = newNode;
		head = newNode;
	}
	void PrintList()
	{
		//Node* current = head;//int i = 0;
		//while (current != nullptr)//i < 10;
		//{
		//	cout << current->value << " ";//algorithm
		//	current = current->next;//i++
		//}
		for (Node* i = head; i != nullptr; i = i->next)
		{
			cout << i->value;
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
	void AddToTail(T_value value)
	{
		Node* newNode = new Node(tail, value, nullptr);
		if (IsEmpty())
		{
			head = tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
	}
	T_value GetElement(int pos)
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
	T_value operator[](int pos)
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

		if (IsEmpty())return;
		if (head->next == nullptr)
		{
			delete head;
			head = tail = nullptr;
		}
		else
		{
			tail = tail->prev;
			delete tail->next;
			tail->next = nullptr;
		}

	}
	void DeleteFromHead()
	{
		if (IsEmpty())return;
		if (head->next == nullptr)
		{
			delete head;
			head = tail = nullptr;
		}
		else
		{
			head = head->next;
			delete head->prev;
			head->prev = nullptr;
		}
	}
};

struct Wagon {
	int number;
	int places;
	int passanger;
};
ostream& operator <<(ostream& out, const Wagon& wagon)
{
	out <<"Number: " << wagon.number << "\n";
	out <<"Amount of the passengers: " << wagon.passanger << "\n";
	out <<"Amount of places: " << wagon.places << "\n";
	return out;
}
class Train {
	string model;
	List<Wagon> Wagons;
public:
	Train(string model)
	{
		this->model = model;
	}
	void AddToBegin(Wagon value)
	{
		Wagons.AddToHead(value);
	}
	void AddToTail(Wagon value)
	{
		Wagons.AddToTail(value);
	}
	void DelFromHead()
	{
		Wagons.DeleteFromHead();
	}
	void DelFromTail()
	{
		Wagons.DeleteFromTail();
	}
	void print()
	{
		Wagons.PrintList();
	}

};
int main()
{
	Train v1("Hunday");
	v1.AddToBegin(Wagon{1,30,10});
	v1.AddToBegin(Wagon{2,40,10});
	v1.AddToTail(Wagon{ 4,56,13 });
	v1.AddToTail(Wagon{ 87,36,12 });
	cout << "---------------------------------\n";
	v1.print();
	cout << "---------------------------------\n";
	v1.DelFromTail();
	v1.print();
	cout << "---------------------------------\n";
	v1.DelFromHead();
	v1.print();
}


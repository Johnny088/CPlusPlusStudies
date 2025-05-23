#include <iostream>
using namespace std;

enum Priority {None, guest, administrator, manager, boss };
template<typename T>
class QueueWithPriority
{
private:

	struct Element
	{
		T Document;
		Priority priority;
		void Print()
		{
			cout << "Value : " << Document << ". Priority : " << priority;
		}
	};

	Element* arr;
	int size;
public:
	QueueWithPriority() :arr(nullptr), size(0) {}
	~QueueWithPriority()
	{
		if (arr != nullptr)delete[]arr;
	}
	void Enqueue(T value, Priority priority)
	{
		int index = 0;
		while (index < size && arr[index].priority > priority)
		{
			index++;
		}
		size++;
		Element* temp = new Element[size];
		for (int i = 0; i < index; i++)
		{
			temp[i] = arr[i];
		}
		temp[index] = Element{ value, priority };
		for (int i = index; i < size - 1; i++)
		{
			temp[i + 1] = arr[i];
		}
		if (arr != nullptr)delete[]arr;
		arr = temp;
	}
	bool IsEmpty()
	{
		return size == 0;
	}
	Element Dequeue()
	{
		if (!IsEmpty())
		{
			Element first = arr[0];
			for (int i = 0; i < size - 1; i++)
			{
				arr[i] = arr[i + 1];
			}
			size--;
			return first;
		}
		return Element();
	}
	void Print()
	{
		cout << "-------------- Queue ---------------" << endl;
		for (int i = 0; i < size; i++)
		{
			arr[i].Print();
			cout << endl;
		}
		cout << "_____________________________________" << endl;
	}
};

int main()
{
	QueueWithPriority <string> q;

	q.Enqueue("A", Priority::boss);

	q.Enqueue("B", Priority::administrator);
	q.Enqueue("B", Priority::guest);
	q.Enqueue("W", Priority::manager);
	q.Enqueue("C", Priority::manager);
	q.Enqueue("G", Priority::administrator);
	q.Enqueue("K", Priority::boss);
	q.Print();

	cout << "-----------------------------" << endl;
	q.Enqueue("D", Priority::guest);
	q.Print();
	cout << "-----------------------------" << endl;
	while (!q.IsEmpty())
	{
		q.Dequeue().Print();
		cout << endl;
	}



}
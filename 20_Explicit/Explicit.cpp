#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <string>
using namespace std;
void SetColor(int color)//0-15
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
class Array
{
	int* arr;
	int size;
public:
	Array()
	{
		arr = nullptr;
		size = 0;
	}
	explicit Array(int size)
	{
		this->size = size;
		this->arr = new int[size];
	}
	~Array()
	{
		if (arr != nullptr)
			delete[]arr;
	}
	int getSize() const
	{
		return size;
	}
	int getValue(int index)const
	{
		return arr[index];
	}
	void setValue(int value, int index)
	{
		arr[index] = value;
	}
	void display(int index)const
	{
		cout << arr[index] << " ";
	}
	void SetRandoms()
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = rand() % 80 + 10;
		}
	}
	/*~Array()
	{
		if (arr != nullptr)
		{
			delete[]arr;
		}
	}*/
};
void menu()
{
	Array v1;
	int Menu, Size;
	do
	{

		cout << "Main menu: \n1 - to make an array \n2 - to fill out the array by random numbers";
		cin >> Menu;
		switch (Menu)
		{
		case 1:
			cin >> Size;
			v1(Size);
			break;
		case 0:
			cout << "have a nice day";
			break;
		default:
			SetColor(12); cout << "your choice is incorrect\n"; SetColor(7);
			break;
		}

	} while (Menu != 0);
}

int main()
{
	srand(time(0));
	menu();
}
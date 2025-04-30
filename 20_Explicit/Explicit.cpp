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
	void SetNull()
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = 0;
		}
	}
	void SetByUser()
	{
		int temp;
		for (int i = 0; i < size; i++)
		{
			SetColor(6);
			cout << "enter the value of the item number: " << i + 1 << " "; cin >> temp;
			arr[i] = temp;
		}
		cout << "\n";
	}
	void print() const
	{
		SetColor(6);
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	void add()
	{
		int value;
		cout << "Enter the value: "; cin >> value;
		size++;
		int* temp = new int[size];
		for (int i = 0; i < size-1; i++)
		{
			temp[i] = arr[i];
		}
		temp[size - 1] = value;
		if (arr != nullptr)
		{
			delete[]arr;
		}
		arr = temp;
	}
	void Min()
	{
		int min = arr[0];
		for (int i = 0; i < size; i++)
		{
			if (arr[i] < min)
			{
				min = arr[i];
			}
		}
		SetColor(6);
		cout << "min of the Array is: " << min << "\n";
	}
	void Max()
	{
		int min = arr[0];
		for (int i = 0; i < size; i++)
		{
			if (arr[i] > min)
			{
				min = arr[i];
			}
		}
		SetColor(6);
		cout << "max of the Array is: " << min << "\n";
	}
	void average()
	{
		int temp =0;
		for (int i = 0; i < size; i++)
		{
			temp += arr[i];
		}
		SetColor(6);
		cout << "The average of the numbers is: " << temp/size <<"\n";
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
	Array v1(10);
	int Menu, Size;
	do
	{
		SetColor(11);
		cout << "\tMain menu: \n1 - to fill out the array by random numbers \n2 - to turn all numbers into '0' \n3 - to set up the numbers by user\n";
		cout << "4 - to add element \n5 - min of the numbers \6 -  maximum of the elements \n 7 - the average of the elements \n8 - print \n";  SetColor(7);
		cin >> Menu;
		switch (Menu)
		{
		case 1:
			v1.SetRandoms();
			break;
		case 2:
			v1.SetNull();
			break;
		case 3:
			v1.SetByUser();
			break;
		case 4:
			SetColor(12);
			v1.add();
			cout << "doesn't work\n";
			break;
		case 5:
			v1.Min();
			break;
		case 6:
			v1.Max();
			break;
		case 7:
			v1.average();
			break;
		case 9:
			v1.print();
			break;
		case 0:
			SetColor(6); cout << "have a nice day\n"; SetColor(7);
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
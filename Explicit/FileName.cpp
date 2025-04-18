#include <iostream>
using namespace std;

void doSomething(long number)
{
}
float doSomething()
{
	return 10.0;
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
	int getSize()const
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
};

void Display(const Array& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		arr.display(i);
	}
	cout << endl;
}
int main()
{
	//explicit - ????
	int g = (int)5.56;
	//implicit  - ??????
	int a = 3.33;//double ---> int


	double b(10);// int ---> double
	doSomething(5);
	int size = 5;
	Array arr(size);//default constructor
	Display(arr);
	for (int i = 0; i < arr.getSize(); i++)
	{
		arr.setValue(size - i, i);
	}
	Display(arr);
	cout << "!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
#include <iostream> // main function
#include <iomanip> // for resercation space
#include <Windows.h> // Colors
#include <string>

using namespace std;
void SetColor(int color)//0-15
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
template <typename T>
class Array
{
	T* arr;
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
		arr = new int[size] {};
	}
	Array(const initializer_list<T>& list)
	{
		this->size = list.size();
		arr = new T[size];
		///foreach
		int i = 0;
		for (T elem : list)
		{
			arr[i] = elem;
			i++;
		}
	}
	void Fill(const initializer_list<T>& list)
	{
		if (arr != nullptr)
			delete[]arr;
		this->size = list.size();//10 --> 3
		arr = new T[size];
		int i = 0;
		for (T elem : list)
		{
			arr[i] = elem;
			i++;
		}
	}
	void Print()
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	~Array()
	{
		if (arr != nullptr)
			delete[]arr;
	}
};

void main()
{
	Array <int> a1;
	a1.Print();
	Array <float> a2({ 10.45,20.3,30.2,40.7,50.5, });
	a2.Print();

    
}
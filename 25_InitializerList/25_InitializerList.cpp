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
		/*for (int i = 0; i < size; i++)
		{
			arr[i] = 0;
		}*/
	}
	Array(const initializer_list<int>& list)
	{
		this->size = list.size();
		arr = new int[size];
		/*for (int i = 0; i < size; i++)
		{
			arr[i] = list[i];
		}*/
		///foreach
		int i = 0;
		for (int elem : list)
		{
			arr[i] = elem;
			i++;
		}
	}
	void Fill(const initializer_list<int>& list)
	{
		if (arr != nullptr)
			delete[]arr;
		this->size = list.size();//10 --> 3
		arr = new int[size];
		int i = 0;
		for (int elem : list)
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
    
}
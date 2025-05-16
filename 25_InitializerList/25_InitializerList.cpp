#include <iostream> // main function
#include <iomanip> 
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
		arr = new T[size] {};
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
	void Max()
	{
		T maxV = arr[0];
		for (int i = 0; i < size; i++)
		{
			if (maxV < arr[i])
				maxV = arr[i];
		}
		cout << "Max of the values is: " << maxV << "\n";
	}
	void Min()
	{
		T minV = arr[0];
		for (int i = 0; i < size; i++)
		{
			if (minV > arr[i])
				minV = arr[i];
		}
		cout << "Min of the values is: " << minV << "\n";
	}
	void BubbleSort()
	{
		T temp;
		for (int i = 0; i < size; i++)//20
		{
			for (int j = size - 1; j > i; j--)//19
			{
				//3 5 12 4 7 6 9 8
				if (arr[j - 1] > arr[j])
				{
					temp = arr[j - 1];
					arr[j - 1] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
	void BinarySearch()
	{
		T key;
		cout << "Enter the value you wanna find: "; cin >> key; cout << "\n";
		T B = 0, E = size - 1;
		while (true)
		{
			int p = (B + E) / 2;
			if (key > arr[p])
			{
				B = p + 1;
			}
			else if (key < arr[p])
			{
				E = p - 1;
			}
			else if (key == arr[p])
			{
				cout << key << "\n";
				return;
			}
				

			if (B > E)
			{
				SetColor(12); cout << "not found!\n"; SetColor(7);
				return;
			}

		}
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
	a1.Fill({ 12,51,64,34,7,57,8,99,10,11 }); SetColor(11);
	cout << "------- Array a1 -------\n";
	a1.Print();
	cout << "------- Array a1 sorted -------\n";
	a1.BubbleSort();
	a1.Print();
	cout << "------- Array a1 binary searching -------\n";
	a1.BinarySearch();
	Array <float> a2({ 10.45,20.3,30.2,40.7,50.5, });
	cout << "------- Array a2 -------\n";
	a2.Print();
	cout << "------- max -------\n";
	a2.Max();
	cout << "------- min -------\n";
	a2.Min();
}
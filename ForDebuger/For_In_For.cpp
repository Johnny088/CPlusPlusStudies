//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int size;
//	cout << "Enter the size: ";
//	cin >> size;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (i <= j)
//				cout << " *";
//			else
//				cout << "  ";
//
//		}
//		cout << endl;
//	}
//	cout << endl;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (i >= j)
//				cout << " *";
//			else
//				cout << "  ";
//
//		}
//		cout << endl;
//	}
//	cout << endl;
//		
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (i <= j && i + j <= size-1)
//				cout << " *";
//			else
//				cout << "  ";
//
//		}
//		cout << endl;
//	}
//	cout << endl;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (i >= j && i + j >= size - 1)
//				cout << " *";
//			else
//				cout << "  ";
//
//		}
//		cout << endl;
//	}
//	cout << endl;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (i >= j && i + j >= size - 1 || i <= j && i + j <= size - 1)
//				cout << " *";
//			else
//				cout << "  ";
//
//		}
//		cout << endl;
//	}
//	cout << endl;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (i >= j && i + j <= size - 1 || i <= j && i + j >= size - 1)
//				cout << " *";
//			else
//				cout << "  ";
//
//		}
//		cout << endl;
//	}
//	cout << endl;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (i >= j && i + j <= size - 1)
//				cout << " *";
//			else
//				cout << "  ";
//
//		}
//		cout << endl;
//	}
//	cout << endl;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (i <= j && i + j >= size - 1)
//				cout << " *";
//			else
//				cout << "  ";
//
//		}
//		cout << endl;
//	}
//	cout << endl;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (i + j <= size - 1)
//				cout << " *";
//			else
//				cout << "  ";
//
//		}
//		cout << endl;
//	}
//	cout << endl;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (i + j >= size - 1)
//				cout << " *";
//			else
//				cout << "  ";
//
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//#include <iostream>
//#include <iomanip>
//using namespace std;
//template <typename T>
//T maxel(T a,T b)
//{
//	return (a > b) ? a : b;
//
//}
//template <typename T>
//T maxel(T a, T b, T c)
//{
//	if (a > b && a > c)
//	{
//		return a;
//
//	}
//	if (c > a && c > b)
//	{
//		return c;
//
//	}
//	if (b > a && b > c)
//	{
//		return b;
//
//	}
//
//
//}
//template <typename T>
//T minel(T a, T b)
//{
//	return (a < b) ? a : b;
//
//}
//template <typename T>
//T minel(T a, T b, T c)
//{
//	if (a < b && a < c)
//	{
//		return a;
//
//	}
//	if (c < a && c < b)
//	{
//		return c;
//
//	}
//	if (b < a && b < c)
//	{
//		return b;
//
//	}
//}
//template <typename T>
//T average(T a[], int size)
//{
//	T sum = 0;
//	for (int i =0; i<size; i++)
//	{
//		sum += a[i];
//	}
//	return  sum / size;
//}
//template <typename T>
//T MaxOfArr(T arr[], int size)
//{
//	T max = arr[0];
//		for (int i = 0; i < size; i++)
//		{
//			
//			cout << arr[i] << " ";
//			if (max < arr[i])
//			{
//				max = arr[i];
//			}
//		}
//		cout << endl;
//		return max;
//		
//
//}
//
//template <typename T>
//T MaxOfArr(T arr[3][3], int size)
//{
//	T max = arr[0][0];
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			cout << setw(5) << arr[i][j] << " ";
//			if (max < arr[i][j])
//			{
//				max = arr[i][j];
//			}
//		}
//		cout << endl;
//	}
//	return max;
//}
//
//
//int main()
//{
//	cout << "task1 Need to find min and max of numbers\n";
//	cout << "It's max of two numbers\n";
//	int a = maxel(11, 7);
//	cout << a << endl;
//	cout << "It's max of three numbers\n";
//	int b = maxel(11, 25, 15);
//	cout << b << endl;
//	cout << "It's min of two numbers\n";
//	int e = minel(11, 7);
//	cout << e << endl;
//	cout << "It's min of three numbers\n";
//	int f = minel(11, 25, 15);
//	cout << f << endl;
//	cout << "task2 Need to find the average  \n";
//	const int size = 6;
//	int arr1[size] = { 25,10,15,16,16,16 };
//	float arr2[size] = { 25.02,35.25,10.52,15.15,16.65,16.25 };
//	cout << "Average  is: " << average(arr1, size);
//	cout << endl;
//	cout << "Average  is: " << average(arr2, size);
//	cout << endl;
//	cout << "task3 Need to find the max of arrays  \n";
//	const int col = 3;
//	const int row = 3;
//
//	int arr3[size] = { 6,85,98,62,54,15 };
//	int MaxOfArr3 = MaxOfArr(arr3, size);
//	cout << "Max of Array is: " << MaxOfArr3 << endl;
//
//	float arr4[size] = {6.26,85.65,98.91,62.65,54.65,15.62};
//	float MaxOfArr4 = MaxOfArr(arr4, size);
//	cout << "Max of Array is: " << MaxOfArr4 << endl;
//	const int newsize = 3;
//	int arr5[col][row] = {5,9,6,9,6,5,61,68,65};
//	int arrmax5 = MaxOfArr(arr5, newsize);
//	cout << "Max of Array is: " << arrmax5 << endl;
//	float arr6[col][row] = {58.65,91.59,62.32,93.65,67.45,51.23,45.65,95.25,75.48};
//	float arrmax6 = MaxOfArr(arr6, newsize);
//	cout << "Max of Array is: " << arrmax6 << endl;
//	
//
//
//}
//

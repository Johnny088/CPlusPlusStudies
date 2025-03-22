//#include <iostream>
//using namespace std;
//#define SIZE 10
//int linearSearch(int arr[], int value)
//{
//    for (int i = 0; i < SIZE; i++)
//    {
//        if (arr[i] == value)
//        {
//            return i;
//        }
//    }
//    return -1;
//}
//void bubblesort(int arr[], int n)
//{
//    for (int i = 0; i, n - 1; i++)
//    {
//        for (int j = 0; j < n - i; j++)
//        {
//            if (arr[i] > arr[j + 1])
//            {
//
//            }
//        }
//    }
//
//}
//int main()
//{
//    int arr[] = { 1,2,3,5,4,7,7,8,4,7,9, };
//    int num;
//    cout << "enter the number " << endl;
//    cin >> num;
//    int index = linearSearch(arr; 9);
//}
#include <iostream>

#define SIZE 10
using namespace std;

int count1 = 0;
template <typename T>
T LinearSearch(T arr[], T value)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] == value)
		{
			//cout << "The number is found at index " << i << endl;
			return i;
		}
	}
	return -1;
}
template <typename T>
T bubbleSort(T arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				//swap(arr[j], arr[j + 1]);
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				count1++;
			}
		}
	}
}
template <typename T>
T insertionSort(T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (arr[j] > key && j >= 0)
		{
			arr[j + 1] = arr[j];
			j--;
			//count1++;
		}
		arr[j + 1] = key;
	}
}
template <typename T>
T partition(T arr[], int low, int high)
{
	int pivot = arr[high];
	int i = low - 1;
	for (int j = low; j < high; j++)
	{
		if (arr[j] < pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return i + 1;
}
template <typename T>
T quickSort(T arr[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}


template <typename T>
T PrintArr(T arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


//int Factorial(int num)
//{
//	if (num == 0)
//	{
//		cout << "Can`t fint factorial of 0" << endl;
//		return;
//	}
//	if (num == 1)
//	{
//		return 1;
//	}
//	else
//	{			//5*4   //3*2*1
//		return num * Factorial(num - 1);
//	}
//}
template <typename T>
T binarySearch(T arr[], int size, T key)
{
	int start = 0;
	int end = size - 1;
	while (start <= end)
	{
		int mid = start + (end - start) / 2;
		if (arr[mid] == key)
		{
			return mid;
		}
		else if (arr[mid] < key) {
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	return -1;
}



int main()
{

	int arr [SIZE] = {1,2,3,4,5,6,7,8,9,10};
	int arr1[]{ 12,4,2,6,4,8,0,12,34,56,34,2334,234,2,34,354,2334,2,64,56,455,3445,234,23,423,42,353,34564,56,456,345,523,423,423,4,2354,34,53,455,345,346,45756,756,7,567,35,32,423423,34,24,346,45,6545,5745 };
	int size = sizeof(arr1) / sizeof(arr1[0]);
	quickSort(arr1, 0, size - 1);
	cout << "Elem is on pos : " << binarySearch(arr1, size, 354) << endl;
	//PrintArr(arr1, size);
	////bubbleSort(arr1, size);
	////insertionSort(arr1, size);
	////cout << "Number of swaps : " << count1 << endl;
	//quickSort(arr1, 0, size - 1);
	//PrintArr(arr1, size);


	/*int num;
	cout << "Enter number you wanna know : " << endl;
	cin >> num;
	int index = LinearSearch(arr, num);
	if (index != -1)
	{
		cout << "The number found on index " << index + 1 << endl;
	}
	else
	{
		cout << "The number is not found" << endl;
	}*/



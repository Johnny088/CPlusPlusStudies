#include <iostream>
using namespace std;
int main()
{
	cout << "creating arrea for 10 elements\n";
	unsigned long long multy = 1;
	const int size = 10;
	int array1[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the" << i + 1 << "Element: \n";
		cin >> array1[i];
		multy *= array1[i];
	}
	
	cout << endl << array1 << endl;
	

	for (int i = 0; i < size; i++)
	{
		cout << array1[i] << " ";
	}
	cout << endl << "Multiply all nambers is: " << multy << endl;
	const int size2 = 7;
	int array2[size2];
	int sumplus = 0;
	int sumnegative = 0;
	cout << "task number 2\n";
	for (int i = 0; i < size2; i++)
	{
		cout << "Enter the" << i + 1 << "Element: \n";
		cin >> array2[i];
		if (array2[i] > 0)
		{
			sumplus += array2[i];
		}
		else
		{
			sumnegative += array2[i];

		}
	}
	cout << endl << "Sum positive numbers is: " << sumplus << endl;
	cout << endl << "Sum negative numbers is: " << sumnegative << endl;
	cout << "\ntask number 3\n";
	long array3[7] = {1512,54,5,412,8,74541,541};
	long sum = 0;
	for (int i = 0; i < 7; i++)
	{
		if (array3[i] % 2 == 0)
		{
			sum += array3[i];
		}
	}
	cout << "\nSum even elements is: " << sum << endl;
	cout << "\ntask number 4\n";
	long long array4[30] = {1};
	for (int i = 1; i < 30; i++)
	{
		array4[i] = 2 * (array4[i - 1]);
		
	}
	for (int i = 0; i < 30; i++)
	{
		cout << array4[i] << " ";

	}
	cout << "\n in the revers way this area is: \n";
	for (int i = 29; i >= 0; i--)
	{
		cout << array4[i] << " ";

	}
	cout << "\ntask number 5\n";
	int array5[10] = {-1,-5,-6,-9,-9,-9,-9,-9,-9,-9};
	for (int i = 0; i < 10; i++)
	{
		cout << array5[i] << " ";

	}
	cout << "\n positive arrayis:  \n";
	for (int i = 0; i < 10; i++)
	{
		array5[i] *= -1;
		cout << array5[i] << " ";

	}



	
		

}
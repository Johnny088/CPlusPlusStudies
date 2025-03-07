
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    srand(time(NULL));
    
    int a;

    //a = rand();//0...32767

    //cout << " a = " << a << endl;

    //a = rand();

    //cout << " a = " << a << endl;
    const int row = 4;
    const int col = 3;
    int array[row][col] = {};
    int count = 0;
    int count2 = 0;
    cout << "Task 1. Need to count numbers !=0\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = rand() % 10;
            cout << array[i][j] << " ";
            if (array[i][j] != 0)
                count++;
            /*if (array[i][j] == 0)
                count2++;*/
        }
        cout << endl;
        
    }
    cout << count << endl;
    cout << "task2. Need to count all numbers that equil 0\n";
    const int row2 = 3;
    const int col2 = 3;
    int array2[row2][col2] = {};
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            array2[i][j] = rand() % 10;
            cout << array2[i][j] << " ";
            if (array2[i][j] == 0)
                count2++;
        }
        cout << endl;

    }
    cout << count2 << endl;
    cout << "task3.(Matrix7x3) \n";
    const int row3 = 7;
    const int col3 = 3;
    count = 0;
    int array3[row3][col3] = {};
    for (int i = 0; i < row3; i++)
    {
        for (int j = 0; j < col3; j++)
        {
            array3[i][j] = rand() % 41 -20;

            cout << setw(4) << array3[i][j] << " ";
            if (array3[i][j] > (-12) && array3[i][j] < 12)
                count++;


        }
        cout << endl;
    }
    cout << count << endl;
    cout << "task4.(Matrix4x5) Need to determine positive numbers.\n";
    const int row4 = 5;
    const int col4 = 4;
    count = 0;
    int array4[row4][col4] = {};
    for (int i = 0; i < row4; i++)
    {
        for (int j = 0; j < col4; j++)
        {
            array4[i][j] = rand() % 41 - 20;

            cout << setw(4) << array4[i][j] << " ";
            if (array4[i][j] > 0)
                count++;


        }
        cout << endl;
    }
    cout << endl;
    cout << "the mount of positive numbers is: " << count << endl;
    cout << "\ntask5. Need to count the sum of positive ellements \n";
    const int row5 = 5;
    const int col5 = 4;
    count = 0;
    float sum = 0;
    float array5[row5][col5] = {};
    for (int i = 0; i < row5; i++)
    {
        for (int j = 0; j < col5; j++)
        {
            array5[i][j] = (rand() % 41)  - 20 +0.5;

            cout << setw(6) << array5[i][j] << " ";
            if (array5[i][j] > 0)
                sum += array5[i][j];
        }
        cout << endl;
    }
    cout << endl << " The sum of positive elements is: " << sum << endl;

}


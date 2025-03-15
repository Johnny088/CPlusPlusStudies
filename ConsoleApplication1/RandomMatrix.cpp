
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
    cout << "task4.(Matrix4x5) Need to determine the mount of positive numbers.\n";
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
    cout << "\ntask6. \n\tGiven array [5][4]. Need to determine the sum of  all negative numbers\n";
    const int row6 = 5;
    const int col6 = 4;
    int array6[row6][col6] = {};
    int sum2 = 0;
    for (int i = 0; i < row6; i++)
    {
        for (int j = 0; j < col6; j++)
        {
            array6[i][j] = (rand() % 41) - 20;
            cout << setw(4) << array6[i][j] << " ";
            if (array6[i][j] < 0)
            {
                sum2 += array6[i][j];
            }
        }
        cout << endl;
         
    }
    cout << endl << "The sum of negative numbers is: " << sum2 << endl;
    cout << "\ntask7. \n\tGiven array [4][4]. Need to determine the sum of  all numbers which (number%6=1)\n";
    const int row7 = 4;
    const int col7 = 4;
    int count7 = 0;
    int array7[row7][col7] = {};
    for (int i = 0; i < row7; i++)
    {
        for (int j = 0; j < col7; j++)
        {
            array7[i][j] = (rand() % 30);
            cout << setw(4) << array7[i][j] << " ";
            if (array7[i][j] % 6 == 1)
            {
                count7 += 1;
            }
        }
        cout << endl;

    }
    cout << endl << "The mount of (numbers % 6 = 1) is: " << count7 << endl;
    cout << "\ntask 8 && 9. \n\tGiven array [5][6]. Need to determine the min&max of the matrix\n";
    const int row8 = 5;
    const int col8 = 6;
    int array8[row8][col8] = {};
    int min8 = 2147483647;
    int minrow8;
    int max8 = -2147483647;
    int maxrow8;
    for (int i = 0; i < row8; i++)
    {
        minrow8 = array8[i][0];
        maxrow8 = array8[i][0];
        for (int j = 0; j < col8; j++)
        {
            array8[i][j] = (rand() % 60 - 30);
            
            
            cout << setw(4) << array8[i][j] << " ";
            
            if (array8[i][j] < minrow8)
            {
                minrow8 = array8[i][j];
            }
            if (array8[i][j] > maxrow8)
            {
                maxrow8 = array8[i][j];
            }
            
        }
        cout << endl;
        if (min8 > minrow8)
        {
            min8 = minrow8;
        }
        if (max8 < maxrow8)
        {
            max8 = maxrow8;
        }
        /*cout << endl;
        cout << minrow8 << "minrow" << endl;
        cout << maxrow8 << "maxrow" << endl;
        cout << max8 << "max" << endl;
        cout << min8 << "min" << endl;*/
        
    }
    cout << endl << "The min of the matrix is: " << min8 << "\nThe max of the matrix is: " << max8 << endl;
    cout << "task10.\n\t(Matrix5x4) Need to determine the sum of negative numbers.\n";
    const int row10 = 5;
    const int col10 = 4;
    int sum10 =0;
    int array10[row10][col10] = {};
    for (int i = 0; i < row10; i++)
    {
        for (int j = 0; j < col10; j++)
        {
            array10[i][j] = rand() % 41 - 20;
            cout << setw(4) << array10[i][j] << " ";
            if (array10[i][j] < 0)
            {
                sum10 += array10[i][j];

            }
            
                
        }
        cout << endl;
        
    }
    cout << endl;
    cout << endl << "The sum of the negative numbers is: " << sum10 << endl;
}


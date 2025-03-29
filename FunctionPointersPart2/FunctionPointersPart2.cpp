#include <iostream>
using namespace std;
void square(int &num)
{
    cout << num << " * " << num << " = " << num * num << "\n";
}
void doublevalue(int& num)
{
    cout << num << " * " << 2 << " = " << num * 2 << "\n";
}
void (*NumberOperation)(int&)
{

}
void negative(int& num)
{
    cout << num * (-1) << "\n";
}
int main()
{
    
}
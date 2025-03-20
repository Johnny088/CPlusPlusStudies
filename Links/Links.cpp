#include <iostream>
using namespace std;
void SumLinks(int& a, int& b, int& c)
{
    int sum = a + b + c;
    cout << " The sum is: " << sum << endl;


}
int main()
{
    cout << "Given three numbers, need to find sum,avarege and min of numbers by using the link of these numbers\n";
    int a, b, c;
    cout << "Enter the number one: ";
    cin >> a;
    cout << "Enter the number two: ";
    cin >> b;
    cout << "Enter the number three: ";
    cin >> c;
    cout << endl;
    SumLinks(a, b, c);
    int& la = a;
    int& lb = b;
    int& lc = c;
    int average = (la + lb + lc)/3;
    int multy = la * lb * lc;
    if (la < lb && la < lc)
    {
        cout << "The min of these numbers is: " << la << endl;
    }
    else if(lb<la && lb <lc)
    {
        cout << "The min of these numbers is: " << lb << endl;
    }
    else
    {
        cout << "The min of these numbers is: " << lc << endl;
    }
    cout << "The averege of these numbers is: " << average << endl;
    cout << "The multy of these numbers is: " << multy << endl;

}


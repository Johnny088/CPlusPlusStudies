

#include <iostream>
using namespace std;
void IntroduseMe()
{
    string name, city;
    int age;
    cout << "what's your name: ";
    cin >> name;
    cout << "what's your city: ";
    cin >> city;
    cout << "How old are you: ";
    cin >> age;
    cout << "I'm " << name << endl << "I'm from" << city << endl << "I'm " << age << "years old\n";
}
int main()
{
    IntroduseMe();
}


#include<iostream>
using namespace std;
int score;
struct Quiz {
    string question;
    int answer;
};
struct Options {
    string option1;
    string option2;
    string option3;
};
void results(Quiz* questions, Options* options) {
    for (unsigned int i = 0; i < 5; ++i) {
        cout << questions[i].question << endl;
        cout << "1. " << options[i].option1 << endl;
        cout << "2. " << options[i].option2 << endl;
        cout << "3. " << options[i].option3 << endl;
        int choice;
        cout << "Choose 1-3: ";
        cin >> choice;
        if (choice == questions[i].answer) {
            cout << "Correct!";
            ++score;
        }
        else {
            cout << "Incorrect!";
        }
        cout << endl;
        cout << endl;
    }
}
int main() {
    Options options[5] = {
    {"Africa","Asia","North America"},
    {"5","4","3"},
    {"Soccer","Volley Ball","Cricket"},
    {"Cobalt","Nickel","Iron"},
    {"Godzilla vs. Destoroyah","Dinosaur","Jurassic Park"}
    };
    Quiz questions[5] = {
    {"In which Continent is India located?",2},
    {"What is 2x2?",2},
    {"What sport does Cristiano Ronaldo play?",1},
    {"Fe is the chemical symbol for which element?",3},
    {"What is the name of the 1993 movie about dinosaurs?",3}
    };
    results(questions, options);
    cout << "Your score is : " << score << "/5";
}
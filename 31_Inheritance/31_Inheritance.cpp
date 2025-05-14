#include <iostream>
using namespace std;
class Student
{
protected:
	string name;
	string MiddleName;
	string surname;
	string group;
	float Average;
public:
	Student() : name("no name"), MiddleName("forgot"), surname("Last name"), group("None"), Average(0) {}
	Student(string n, string m, string s, string g, float A): name(n), MiddleName(m), surname(s), group(g), Average(A) {}
	void print()
	{
		cout << "name: " << name << endl;
		cout << "Middle Name: " << MiddleName << endl;
		cout << "surname: " << surname << endl;
		cout << "group: " << group << endl;
		cout << "Average: " << Average << endl;
	}
	
};
class Aspirant : public Student
{
	string topic;
	int CountPages;
public:
	Aspirant() :topic("none"), CountPages(0), Student() {}
	Aspirant(string n, string m, string s, string g, float A, string T, int C) :topic(T), CountPages(C), Student(n, m, s, g, A) {}
	void Print()
	{
		cout << "-------------------------------------\n";
		Student::print();
		cout << "Topic: " << topic << endl;
		cout << "Amount of pages: " << CountPages << endl;
	}
	void AddPage()
	{
		CountPages++;
	}
};
class Passport
{
protected:
	string Serie;
	string Number;
	string name;
	string MiddleName;
	string surname;
public:
	Passport() : Serie("none"), Number("None"), name("None"), MiddleName("None"), surname("None") {}
	Passport(string S, string N, string n, string M, string s) : Serie(S), Number(N), name(n), MiddleName(M), surname(s) {}
	void print()
	{
		cout << "Serie: " << Serie << endl;
		cout << "Number: " << Number << endl;
		cout << "name: " << name << endl;
		cout << "Middle name: " << MiddleName << endl;
		cout << "Surname: " << surname << endl;
	}
	
};
class ForeignPassport : public Passport
{
	string visa;
	int AmountOfVisas;
public:
	ForeignPassport():visa("None"),AmountOfVisas(0), Passport() {}
	ForeignPassport(string S, string N, string n, string M, string s, string V, int A): visa(V),AmountOfVisas(A), Passport(S,N,n,M,s){}
	void Print()
	{
		cout << "-------------------------------------\nForeign Passport\n";
		Passport::print();
		cout << "Visa: " << visa << endl;
		cout << "Amount of visas: " << visa << endl;
	}
	void AddVisa()
	{
		AmountOfVisas++;
	}

};
int main()
{
	Student s1("Johnny","Forgot", "Surname", "PV411", 11.5);
	s1.print();
	Aspirant a1("Johnny", "Forgot", "Surname", "PV411", 11.5, "Water Engineering", 0);
	a1.AddPage();
	a1.AddPage();
	a1.AddPage();
	a1.Print();
	cout << "---------------------------------\n\t\nPassport\n";
	Passport p1("AH", "3569825", "Johnny", "Douglas", "Stone");
	p1.print();
	ForeignPassport i1("AH", "3569825", "Johnny", "Douglas", "Stone", "Schengen", 1);
	i1.Print(); 
  
}


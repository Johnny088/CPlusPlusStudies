
//#include <iostream>
//#include <windows.h>
//using namespace std;
//void SetColor(int color)//0-15
//{
//    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
//}
//int main()
//{
//	for (int i = 0; i < 16; i++)
//	{
//		SetColor(i); cout << "Hello World " << i << "\n";
//	}
//}
//
#include <iostream>
using namespace std;

struct PIB
{
	string name;
	string surname;
	string lastname;
};
struct Birthday
{
	int day;
	int month;
	int year;
};
struct University
{
	string name;
	string city;
	string country;
};

class Student
{
private:
	PIB fullname;
	Birthday birthday;
	string phone;
	string city;
	string country;
	University university;
	string group;
	int* marks;// pointer --> empty
	int markCount;
	float average;
public:
	//ctor + TAB 
	Student()
	{
		cout << "Default constructor" << endl;
		fullname.name = "no name";
		fullname.surname = "no surname";
		fullname.lastname = "no lastname";
		birthday.day = 0;
		birthday.month = 0;
		birthday.year = 0;
		phone = "no phone";
		city = "no city";
		country = "no country";
		university.name = "no university_name";
		university.city = "no university_city";
		university.country = "no university_country";
		group = "no group";
		marks = nullptr;
		markCount = 0;
		average = 0;
	}
	Student(string name, string surname, string lastname)
	{
		cout << "Parametrized constructor" << endl;
		fullname.name = name;
		fullname.surname = surname;
		fullname.lastname = lastname;
		birthday.day = 0;
		birthday.month = 0;
		birthday.year = 0;
		phone = "no phone";
		city = "no city";
		country = "no country";
		university.name = "no university_name";
		university.city = "no university_city";
		university.country = "no university_country";
		group = "no group";
		marks = nullptr;
		markCount = 0;
		average = 0;

	}
	void Print() {
		cout << fullname.name << endl;
		cout << fullname.surname << endl;
		cout << fullname.lastname << endl;
		cout << birthday.day << endl;
		cout << birthday.month << endl;
		cout << birthday.year << endl;
		cout << phone << endl;
		cout << city << endl;
		cout << country << endl;
		cout << university.name << endl;
		cout << university.city << endl;
		cout << university.country << endl;
		cout << group << endl;
		cout << "Marks : ";
		for (int i = 0; i < markCount; i++)
		{
			cout << marks[i] << " ";
		}
		cout << endl << markCount << endl;
		cout << average << endl;

	}
	/*void Initialize()
	{
		fullname.name = "no name";
		fullname.surname = "no surname";
		fullname.lastname = "no lastname";
		birthday.day = 0;
		birthday.month = 0;
		birthday.year = 0;
		phone = "no phone";
		city = "no city";
		country = "no country";
		university.name = "no university_name";
		university.city = "no university_city";
		university.country = "no university_country";
		group = "no group";
		marks = nullptr;
		markCount = 0;
		average = 0;
	}*/
	void SetName(string name)
	{
		fullname.name = name;
	}
	void SetSurName(string surname)
	{
		fullname.surname = surname;
	}
	void SetLastName(string lastname)
	{
		fullname.lastname = lastname;
	}
	void AddMark(int mark)
	{
		markCount++;
		int* temp = new int[markCount];
		for (int i = 0; i < markCount - 1; i++)
		{
			temp[i] = marks[i];
		}
		temp[markCount - 1] = mark;


		if (marks != nullptr)
			delete[] marks;

		marks = temp;
		setAverageMark();
	}
	void setAverageMark()
	{
		float sum = 0;
		for (int i = 0; i < markCount; i++)
		{
			sum += marks[i];
		}
		average = (float)sum / markCount;
	}
	void Delete()
	{
		if (marks != nullptr)
			delete[] marks;
	}
	// ~ + Tab --> tulda
	~Student()
	{
		cout << "Destructor" << fullname.name << endl;
		if (marks != nullptr)
			delete[] marks;
	}
};

int main()
{

	Student student;//default constructor 
	student.Print();
	//student.Initialize();
	student.SetName("Petro");
	student.SetSurName("Lukashchuk");
	student.SetLastName("Mukolayovuch");
	student.AddMark(12);
	student.AddMark(11);
	student.AddMark(2);
	student.AddMark(3);
	student.Print();
	//student.Delete();


	Student st("Nick", "Tomson", "Ivanovich");//parametrixed constructor 
	st.Print();
}
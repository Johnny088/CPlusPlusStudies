#include <iostream>
#include <string>
using namespace std;

struct Vagon {
	int number;
	int places;
	int passanger;
};
class Train
{
	string model;
	int countVagons;
	Vagon* vagons;
public:
	Train()
	{
		model = "defalt";
		countVagons = 0;
		vagons = nullptr;
	}
	Train(string model)
	{
		this->model = model;
		countVagons = 0;
		vagons = nullptr;
	}
	void Show()
	{
		cout << "The model is: " << model << "\n";
		cout << "Amount of the vagons is: " << countVagons << "\n";
		for (int i = 0; i < countVagons; i++)
		{
			cout << vagons[i].number << endl;
			cout << vagons[i].places << endl;
			cout << vagons[i].passanger << endl;
		}

		cout << "\n";
	}
	void Add( )
	{
		int number, places, passangers;
		cout << "Enter the number of the vagon: "; cin >> number;
		cout << "Enter the number of the vagon: "; cin >> places;
		cout << "Enter the number of the vagon: "; cin >> passangers;
		
		countVagons++;
		int* temp = new int[countVagons];
		for (int i = 0; i < countVagons; i++)
		{
			temp[i] = vagon[i]
		}
	}
};

int main()
{
    
}


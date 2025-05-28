#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
#include <fstream>
using namespace std;
void SetColor(int color)//0-15
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
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
	void Setmodel(string model)
	{
		this->model = model;
		SetColor(10); cout << "The model was added\n"; SetColor(7);
	}
	string GetModel()
	{
		return model;
	}
	void Show()
	{
		SetColor(14);
		cout << "The model is: " << model << "\n";
		cout << "Amount of the vagons is: " << countVagons << "\n";
		SetColor(11);
		for (int i = 0; i < countVagons; i++)
		{
			cout << "\n\tthe vagon " << i+1 << left << setw(13) <<"\nNumber " << setw(3) << vagons[i].number << endl;
			cout << left << setw(12) << "Places: " << setw(3) << vagons[i].places << endl;
			cout << left << setw(12) <<"passengers " <<setw(3) << vagons[i].passanger << endl;
		}
		SetColor(7);
		cout << "\n";
	}
	void Add()
	{
		int number, places, passangers;
		cout << "Enter the number of the vagon: "; cin >> number;
		cout << "Enter the number of the places: "; cin >> places;
		cout << "Enter the number of the passengers: "; cin >> passangers;
		Vagon newVagon = { number,places,passangers };
		countVagons++;
		Vagon* temp = new Vagon[countVagons];
		for (int i = 0; i < countVagons-1; i++)
		{
			temp[i] = vagons[i];
		}
		temp[countVagons - 1] = newVagon;
		if (vagons != nullptr)
		{
			delete[]vagons;
		}
		vagons = temp;
		SetColor(10); cout << "The vagon was added\n"; SetColor(7);
	}


	void BinarySave()
	{
		ofstream out("Train.bin", ios_base::out | ios_base::binary);
		out.write((char*)&model, sizeof(model));
		out.write((char*)&countVagons, sizeof(countVagons));
		for (int i = 0; i < countVagons; i++)
		{
			out.write((char*)&vagons[i], sizeof(vagons[i]));
		}
		SetColor(10); cout << "The date was added"; SetColor(7);
		out.close();
	}

	void BinaryOut()
	{
		ifstream in("Train.bin", ios_base::in | ios_base::binary);
		in.read((char*)&model, sizeof(model));
		in.read((char*)&countVagons, sizeof(countVagons));
		vagons = new Vagon[countVagons];
		for (int i = 0; i < countVagons; i++)
		{
			in.read((char*)&vagons[i], sizeof(vagons[i]));
		}

		in.close();
		
		
	}

	~Train()
	{
		if (vagons != nullptr)
		{
			delete[]vagons;
		}
	}
};


int main()
{
	Train train1;
	int menu;
	
	do 
	{
		SetColor(3);
		cout << "1 - show the information of the train\n2 - add one vagon\n0 - exit\n3 - set up the model of the train\n4 - get the model of the train \n5 - add to file \n6 - read from file \nEnter your choice: "; 
		SetColor(7);
		cin >> menu;
		switch (menu)
		{
		case 1:
			train1.Show();
			break;
		case 2:
			train1.Add();
			break;
		case 3:
			cout << "Enter the model of the train: "; cin >> model;
			train1.Setmodel(model);
			break;
		case 4:
			cout << train1.GetModel() <<"\n";
			break;
		case 5:
			train1.BinarySave();
			break;
		case 6:
			train1.BinaryOut();
			break;
		case 0:
			SetColor(6);
			cout << "Have a nice day\n"; SetColor(7);
			break;
		default:
			SetColor(12); cout << "your choice is incorrect\n"; SetColor(7);
			break;
		}
	} while (menu != 0);
	

}


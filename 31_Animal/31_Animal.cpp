#include <iostream>
using namespace std;
#include <windows.h>
void SetColor(int color)//0-15
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
enum Type{none,amphibians,aquatic,terrestrial,birds};
class Animal
{
protected:
    Type type;
    string species;
    string name;
    float weight;
    float speed;
    string habitat;
public:
    Animal():type(none),species("none"),name("none"),weight(0),speed(0),habitat("Nowhere"){}
    Animal(Type type,string species,string name, float weight, float speed, string habitat): type(type),species(species),name(name),weight(weight), speed(speed),habitat(habitat){}
    void print()
    {
        switch (type)
        {
        case none:
            break;
        case amphibians:
            break;
        case aquatic:
            break;
        case terrestrial:
            cout << "The type: ---> Terrestrial.\n";
            break;
        case birds:
            break;
        default:
            break;
        }
        cout <<"\nThe specie: " << species << "\nName: " << name << "\nWeight: " << weight << "\nspeed: " << speed << "\nHabitat: " << habitat;
    }
};
class Carnivores :public Animal
{
public:
    Carnivores(Type type, string species, string name, float weight, float speed, string habitat):Animal(type,species,name,weight,speed,habitat){}
    void print()
    {
        SetColor(12);  cout << "I love eating meat\nI can run: "<<speed<< " km\h\n"; SetColor(6);
        Animal::print();
    }
};
class Herbivore :public Animal
{

};

int main()
{
    Carnivores v1(Type::terrestrial,"Lion","Simba",70.5,300,"Africa");
    v1.print();
    SetColor(7);
}

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
            cout << "The type: ---> None.\n";
            break;
        case amphibians:
            cout << "The type: ---> amphibians.\n";
            break;
        case aquatic:
            cout << "The type: ---> Aquatic.\n";
            break;
        case terrestrial:
            cout << "The type: ---> Terrestrial.\n";
            break;
        case birds:
            cout << "The type: ---> Birds.\n";
            break;
        default:
            break;
        }
        cout <<"The specie: " << species << "\nName: " << name << "\nWeight: " << weight << "\nspeed: " << speed << "\nHabitat: " << habitat <<"\n\n";
    }
};
class Carnivores :public Animal
{
public:
    Carnivores(Type type, string species, string name, float weight, float speed, string habitat):Animal(type,species,name,weight,speed,habitat){}
    void print()
    {
        SetColor(12);  cout << "I love eating meat\nI can run: "<<speed<< " km/h\n"; SetColor(6);
        Animal::print();
    }
};
class Herbivore :public Animal
{
public:
    Herbivore(Type type, string species, string name, float weight, float speed, string habitat) :Animal(type, species, name, weight, speed, habitat) {}
    void print()
    {

        SetColor(10), cout << "I'm herbivore\nI can run: " << speed << " km/h\n"; SetColor(6);
        Animal::print();
    }

};
//class Mammals :public Carnivores
//{
//    int AverageDeep;
//public:
//    Mammals(int deep): AverageDeep(deep){}
//};
class Dolphins :public Carnivores
{
    int AverageDeep;
public:
    Dolphins(Type type, string species, string name, float weight, float speed, string habitat, int deep) :Carnivores(type, species, name, weight, speed, habitat) {}
    void print()
    {
        SetColor(10); cout << "I'm a dolphin\nMy speed under the water is: " << speed << " km/h\n"; SetColor(6);
        Animal::print();
    }
};

int main()
{
    Carnivores v1(Type::terrestrial,"Lion","Simba",70.5,300,"Africa");
    v1.print();
    SetColor(7);
    Herbivore v2(Type::terrestrial, "Elephant", "Hercules", 5000, 40, "Savanna");
    v2.print();
    SetColor(7);
    Dolphins d1(Type::aquatic, "Spinner Dolphin", "Oscar", 150, 25, "Pacific Ocean, Indian Ocean, Atlantic Ocean", 250);
    d1.print();
    SetColor(7);

}

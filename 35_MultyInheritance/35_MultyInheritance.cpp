#include <iostream>
using namespace std;
class Pizza
{
public:
    virtual void MakePizza() = 0;
};
class MilanPizza: public Pizza
{
public:
    void MakePizza() override
    {
        cout << "I'm making Milan pizza\n";
    }
};
class GreekPizza : public Pizza
{
public:
    void MakePizza() override
    {
        cout << "I'm making Greek pizza\n";
    }
};
class Sause
{
public:
    virtual void MakeSause() = 0;
};
class MilanSause: public Sause
{
public:
    void MakeSause() override
    {
        cout << "I'm cooking Milan Sause.\n";
    }
};
class GreekSause: public Sause
{
public:
    void MakeSause() override
    {
        cout << "I'm cooking Greek Sause.\n";
    }
};

class Fabric
{
public:
    virtual Pizza* MakePizza() = 0;
    virtual Sause* MakeSause() = 0;
};
class MilanFabric: public Fabric
{
    Pizza* MakePizza() override { return new MilanPizza(); }
    Sause* MakeSause() override { return new MilanSause(); }
};
class GreekFabric : public Fabric
{
    Pizza* MakePizza() override { return new GreekPizza(); }
    Sause* MakeSause() override { return new GreekSause(); }
};


int main()
{
    Fabric* fabric = nullptr;
    Pizza* pizza = nullptr;
    Sause* sause = nullptr;
    fabric = new MilanFabric();
    pizza = fabric->MakePizza();
    sause = fabric->MakeSause();
    pizza->MakePizza();
    sause->MakeSause();
    delete fabric;
    delete pizza;
    delete sause;
    fabric = new GreekFabric();
    pizza = fabric->MakePizza();
    sause = fabric->MakeSause();
    pizza->MakePizza();
    sause->MakeSause();
    delete fabric;
    delete pizza;
    delete sause;
}


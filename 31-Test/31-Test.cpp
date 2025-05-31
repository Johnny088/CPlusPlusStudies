#include <iostream>
#include <windows.h> // WinApi header 
using namespace std;

#define C3 262
#define C3sus 278
#define D3 294
#define D3sus 312
#define E3 330
#define F3 350
#define F3sus 370
#define G3 392
#define G3sus 416
#define A3 440
#define A3sus 466
#define B3 494
#define C4 524
#define C4sus 554
#define D4 588
#define D4sus 622
#define E4 660
#define F4 698
#define F4sus 740
#define G4 784
#define G4sus 830
#define A4 880
#define A4sus 932
#define B4 988
#define C5 1046

int c = 0;
void playsound() {
    while (1) {
        Beep(A3, 800);
        Sleep(3);
        Beep(A3, 800);
        Sleep(3);
        Beep(A3, 800);
        Sleep(10);
        Beep(F3, 300);
        Beep(C4, 272);
        Beep(A3, 800);
        Beep(F3, 300);
        Beep(C4, 272);
        Beep(A3, 1272);
        Sleep(10);
        Beep(E4, 700);
        Beep(E4, 700);
        Beep(E4, 700);
        Sleep(10);
        Beep(F4, 350);
        Beep(D4, 300);
        Beep(A3, 700);
        Beep(F3, 300);
        Beep(C4, 300);
        Beep(A3, 1272);
        Sleep(10);
        Beep(A4, 300);
        Sleep(1);
        Beep(D4, 800);
        Sleep(1);
        Beep(A4, 300);
        Beep(A4sus, 800);
        Sleep(1);
        Beep(A4, 800);
        Sleep(1);
        Beep(F4, 300);
        Beep(C5, 272);
        Beep(A4, 800);
        Beep(F4, 300);
        Beep(C5, 272);
        Beep(A4, 1272);
        Sleep(10);
    }
}

class Car
{
    //private public protected
private:
    string model;
    int year;
    string engine_type;
    float volume;
    int power;
    string transmision;
protected:
    int maxSpeed;
public:
    Car() :model("no model"), year(0), engine_type("none"), volume(0),
        power(0), transmision("none"), maxSpeed(0) {
    }
    Car(string m, int y, string e, float v, int p, string t) :model(m),
        year(y), engine_type(e), volume(v),
        power(p), transmision(t), maxSpeed(0) {
    }
    void setSpeed(int maxSpeed)
    {
        if (maxSpeed > 0)
            this->maxSpeed = maxSpeed;
    }
    virtual void Drive()const
    {
        cout << "I am a Car ! I can drive with speed " << maxSpeed << " km/h" << endl;
    }
    void GetFuel()const
    {
        cout << "I fill up the tank with fuel. " << endl;
    }
    virtual void Print()const
    {
        cout << "-----------Car-------------------" << endl;
        cout << "Model : " << model << endl;
        cout << "Year : " << year << endl;
        cout << "Engine type  : " << engine_type << endl;
        cout << "Volume : " << volume << endl;
        cout << "Power : " << power << endl;
        cout << "Transmision : " << transmision << endl;
        cout << "Max speed : " << maxSpeed << endl;
    }
};
//private public protected
class PoliceCar : public Car
{
    float soundVolume;
public:
    PoliceCar() :soundVolume(0), Car() {}
    PoliceCar(string m, int y, string e, float v, int p, string t, float vl) :
        soundVolume(vl), Car(m, y, e, v, p, t) {
    }
    void Drive()const override
    {
        cout << "I am a Police Car ! I can drive with speed " << maxSpeed << " km/h" << endl;
    }
    void Print()const
    {
        cout << "----------- Police Car-------------------" << endl;
        Car::Print();
        cout << "Sound Volume : " << soundVolume << endl;
    }
    void BeepBeep()
    {
        /*cout << "Viyviyviy............." << endl;
        Beep(523, 500);
        Beep(1000, 500);
        Beep(523, 500);
        Beep(1000, 500);
        Beep(523, 500);*/
        //playsound();
        Beep(330, 100); Sleep(100);
        Beep(330, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(330, 100); Sleep(300);
        Beep(392, 100); Sleep(700);
        Beep(196, 100); Sleep(700);
        Beep(262, 300); Sleep(300);
        Beep(196, 300); Sleep(300);
        Beep(164, 300); Sleep(300);
        Beep(220, 300); Sleep(100);
        Beep(246, 100); Sleep(300);
        Beep(233, 200);
        Beep(220, 100); Sleep(300);
        Beep(196, 100); Sleep(150);
        Beep(330, 100); Sleep(150);
        Beep(392, 100); Sleep(150);
        Beep(440, 100); Sleep(300);
        Beep(349, 100); Sleep(100);
        Beep(392, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(100);
        Beep(247, 100); Sleep(500);
        Beep(262, 300); Sleep(300);
        Beep(196, 300); Sleep(300);
        Beep(164, 300); Sleep(300);
        Beep(220, 300); Sleep(100);
        Beep(246, 100); Sleep(300);
        Beep(233, 200);
        Beep(220, 100); Sleep(300);
        Beep(196, 100); Sleep(150);
        Beep(330, 100); Sleep(150);
        Beep(392, 100); Sleep(150);
        Beep(440, 100); Sleep(300);
        Beep(349, 100); Sleep(100);
        Beep(392, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(100);
        Beep(247, 100); Sleep(900);
        Beep(392, 100); Sleep(100);
        Beep(370, 100); Sleep(100);
        Beep(349, 100); Sleep(100);
        Beep(311, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(207, 100); Sleep(100);
        Beep(220, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(220, 100); Sleep(100);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(500);
        Beep(392, 100); Sleep(100);
        Beep(370, 100); Sleep(100);
        Beep(349, 100); Sleep(100);
        Beep(311, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(523, 100); Sleep(300);
        Beep(523, 100); Sleep(100);
        Beep(523, 100); Sleep(1100);
        Beep(392, 100); Sleep(100);
        Beep(370, 100); Sleep(100);
        Beep(349, 100); Sleep(100);
        Beep(311, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(207, 100); Sleep(100);
        Beep(220, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(220, 100); Sleep(100);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(500);
        Beep(311, 300); Sleep(300);
        Beep(296, 300); Sleep(300);
        Beep(262, 300); Sleep(1300);
        Beep(262, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(300);
        Beep(330, 200); Sleep(50);
        Beep(262, 200); Sleep(50);
        Beep(220, 200); Sleep(50);
        Beep(196, 100); Sleep(700);
        Beep(262, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(100);
        Beep(330, 100); Sleep(700);
        Beep(440, 100); Sleep(300);
        Beep(392, 100); Sleep(500);
        Beep(262, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(300);
        Beep(330, 200); Sleep(50);
        Beep(262, 200); Sleep(50);
        Beep(220, 200); Sleep(50);
        Beep(196, 100); Sleep(700);
        /*Intro*/
        Beep(330, 100); Sleep(100);
        Beep(330, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(330, 100); Sleep(300);
        Beep(392, 100); Sleep(700);
        Beep(196, 100); Sleep(700);
        Beep(196, 100); Sleep(125);
        Beep(262, 100); Sleep(125);
        Beep(330, 100); Sleep(125);
        Beep(392, 100); Sleep(125);
        Beep(523, 100); Sleep(125);
        Beep(660, 100); Sleep(125);
        Beep(784, 100); Sleep(575);
        Beep(660, 100); Sleep(575);
        Beep(207, 100); Sleep(125);
        Beep(262, 100); Sleep(125);
        Beep(311, 100); Sleep(125);
        Beep(415, 100); Sleep(125);
        Beep(523, 100); Sleep(125);
        Beep(622, 100); Sleep(125);
        Beep(830, 100); Sleep(575);
        Beep(622, 100); Sleep(575);
        Beep(233, 100); Sleep(125);
        Beep(294, 100); Sleep(125);
        Beep(349, 100); Sleep(125);
        Beep(466, 100); Sleep(125);
        Beep(587, 100); Sleep(125);
        Beep(698, 100); Sleep(125);
        Beep(932, 100); Sleep(575);
        Beep(932, 100); Sleep(125);
        Beep(932, 100); Sleep(125);
        Beep(932, 100); Sleep(125);
        Beep(1046, 675);
    }
};
class SportCar : public Car
{
    float turbo;
public:
    SportCar() :turbo(0), Car() {}
    SportCar(string m, int y, string e, float v, int p, string t, float vl) :
        turbo(vl), Car(m, y, e, v, p, t) {
    }
    void Drive()const
    {
        cout << "I am a Sport Car ! I can drive with speed " << maxSpeed << " km/h" << endl;
    }
    void Print()const
    {
        cout << "-----------Sport Car-------------------" << endl;
        Car::Print();
        cout << "Turbo speed : " << turbo << endl;
    }
    void Nitro()
    {
        maxSpeed += turbo;
        cout << "Nitro speed : " << maxSpeed << "km/h" << endl;
    }

};

void TestDrive(Car& car)
{
    car.setSpeed(70);
    car.Drive();

}

int main()
{
    //Car car("Nissan", 2010, "diesel", 1.6, 150, "mexanic");
    //car.setSpeed(180);
    //car.Drive();

    //PoliceCar police("Toyota", 2020, "gibrid", 2.0, 170, "automat", 500);
    //police.setSpeed(200);
    //police.Drive();

    //SportCar sport("Formula 1", 2022, "gasoline", 2.0, 200, "mexanic", 50);
    //sport.setSpeed(180);
    //sport.Drive();
    ///*police.BeepBeep();*/
    //cout << "-----------------------------------" << endl;
    //TestDrive(car);
    //TestDrive(police);
    //TestDrive(sport);

    //Car* carSalon[3]
    //{
    //    new Car("Nissan", 2010, "diesel", 1.6, 150, "mexanic"),
    //    new PoliceCar("Toyota",2020, "gibrid",2.0,170,"automat",500),
    //    new SportCar("Formula 1", 2022, "gasoline", 2.0, 200, "mexanic", 50)
    //};
    //for (int i = 0; i < 3; i++)
    //{
    //    carSalon[i]->Drive();
    //    carSalon[i]->Print();
    //}
    //for (int i = 0; i < 3; i++)
    //{
    //    delete carSalon[i];
    //}

    /*PoliceCar p1;
    p1.BeepBeep();*/
    Playground();
}
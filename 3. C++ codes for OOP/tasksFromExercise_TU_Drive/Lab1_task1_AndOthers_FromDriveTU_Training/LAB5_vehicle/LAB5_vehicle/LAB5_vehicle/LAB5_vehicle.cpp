#include<iostream>
using namespace std;

class vehicle {
private:
    int speed;
public:
    vehicle(int sp)
    {
        speed = sp;
    }
    void showv()
    {
        cout << "Speed: " << speed << endl;
    }
};
enum motor { Gas, Diesel };

class motorised :virtual public vehicle {
private:
    enum motor fuelOfMotor;
public:
    motorised(enum motor fOM, int sp) :vehicle(sp)
    {
        fuelOfMotor = fOM;
    }
    void show()
    {
        //showv();
        switch (fuelOfMotor)
        {
        case Gas: cout << "Fuel: Gas" << endl; break;
        case Diesel: cout << "Fuel: Diesel" << endl; break;
        }
    }
};

class coupe :virtual public vehicle
{
private:
    int passengers;
public:
    coupe(int pass, int sp) :vehicle(sp)
    {
        passengers = pass;
    }
    void show()
    {
        showv();
        cout << "Passengers: " << passengers << endl;
    }
};

class car : public motorised, public coupe
{
private:
    int fuelTankSize;
public:
    car(int fTS, int pass, enum motor fOM, int sp) : coupe(pass, sp), motorised(fOM, sp), vehicle(sp)
    {
        fuelTankSize = fTS;
    }
    void show()
    {
        //showv();
        motorised::show();
        coupe::show();
        cout << "fuel tank size: " << fuelTankSize << endl;
    }
};

int main()
{
    car c(60, 5, Gas, 200);
    c.show();
    return 0;
}

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

class car :vehicle {
private:
    int numOfPass;
public:
    car(int sp, int num) :vehicle(sp)
    {
        numOfPass = num;
    }
    void show()
    {
        showv();
        cout << "Passengers: " << numOfPass << endl;
    }
};

class truck :vehicle {
private:
    int loadLimit;
public:
    truck(int sp, int ll) :vehicle(sp)
    {
        loadLimit = ll;
    }
    void show()
    {
        showv();
        cout << "Load limit: " << loadLimit << endl;
    }
};

int main()
{
    car c(100, 5);
    truck t(80, 15000);
    c.show();
    t.show();
    return 0;
}

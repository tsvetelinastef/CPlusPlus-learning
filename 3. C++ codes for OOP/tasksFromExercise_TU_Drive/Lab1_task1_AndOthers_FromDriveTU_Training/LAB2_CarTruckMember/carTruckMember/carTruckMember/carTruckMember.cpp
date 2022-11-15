#include<iostream>
using namespace std;
 
class car;
class truck {
private:
    int speed;
public:
    truck(int sp)
    {
        speed = sp;
    }
    ~truck()
    {
        cout << "Destructed" << endl;
    }
    int spGreater(car c);
};

class car {
private:
    int speed;
public:
    car(int sp)
    {
        speed = sp;
    }
    ~car() {
        cout << "Destructed" << endl;
    }
    friend int truck::spGreater(car c);
};
int truck::spGreater(car c)
{
    return c.speed - speed;
}
int main()
{
    car c(100);
    truck t(80);
    cout << t.spGreater(c) << endl;
    return 0;
}


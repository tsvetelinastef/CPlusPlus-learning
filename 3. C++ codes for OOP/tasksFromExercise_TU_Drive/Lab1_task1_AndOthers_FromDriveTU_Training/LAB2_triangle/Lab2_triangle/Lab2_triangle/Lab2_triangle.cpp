#include<iostream>
#include<math.h>
using namespace std;

class triangle {
private:
    double a, b, c;
public:
    triangle();
    void show();
    double s();
    double s(double* p);
    ~triangle()
    {
        cout << "Destructed";
    }
};
triangle::triangle()
{
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << "c= ";
    cin >> c;
}
void triangle::show()
{
    cout << "a= " << a << " b= " << b << " c= " << c << endl;
}
double triangle::s()
{
    double p, s;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}
double triangle::s(double* p)
{
    double perimeter, s;
    perimeter = (a + b + c) / 2;
    *p = perimeter * 2;
    s = sqrt(perimeter * (perimeter - a) * (perimeter - b) * (perimeter - c));
    return s;
}


int main()
{
    double p;
    triangle t1;
    t1.s(&p);
    cout << p;
    return 0;
}

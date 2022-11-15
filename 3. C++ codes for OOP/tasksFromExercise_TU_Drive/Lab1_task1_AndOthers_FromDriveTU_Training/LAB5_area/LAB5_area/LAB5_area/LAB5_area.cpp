#include<iostream>
using namespace std;

class area
{
private:
    double a, b;
public:
    area(double x, double y)
    {
        a = x; b = y;
    }
    void getDim(double& c, double& d)
    {
        c = a;
        d = b;
    }
    virtual double getarea() = 0;
};


class rectangle : public area
{
public:
    rectangle(double x, double y) :area(x, y)
    {
        ;
    }

    double getarea()
    {
        double s, c, d;
        getDim(c, d);
        s = c * d;
        return s;

    }
};

class rectangleTriangle : public area
{
public:
    rectangleTriangle(double x, double y) :area(x, y)
    {
        ;
    }
    double getarea()
    {
        double s, x, y;
        getDim(x, y);
        s = (x * y) / 2;
        return s;

    }
};
int main()
{
    rectangle r(3, 4);
    rectangleTriangle rT(3, 4);
    cout << "Rectangle area: " << r.getarea() << endl;
    cout << "Rectangle Triangle area: " << rT.getarea() << endl;
    return 0;
}

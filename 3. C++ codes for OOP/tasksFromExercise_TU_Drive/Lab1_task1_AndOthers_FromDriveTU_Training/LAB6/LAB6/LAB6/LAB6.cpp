#include<iostream>
using namespace std;

class Point
{
private:
    double x, y;
public:
    Point()
    {
        x = 0; y = 0;
    }
    Point(double a, double b)
    {
        x = a;
        y = b;
    }
    double getX()
    {
        return x;
    }
    double getY()
    {
        return y;
    }
    Point operator+(Point& p)
    {
        Point res(x + p.getX(), y + p.getY());
        return res;

    }
    Point operator-()
    {
        Point result(-getX(), -getY());
        return result;
    }
    Point operator++(int)
    {
        Point result(getX(), getY());
        x++; y++;
        return result;
    }
    Point operator=(Point& p)
    {
        x = p.getX(); y = p.getY();
        return *this;
    }
    int operator==(Point& p)
    {
        if (x == p.getX() && y == p.getY())
            return 1;
        else return 0;
    }
};

ostream& operator<<(ostream& out, Point& p)
{
    out << p.getX() << " " << p.getY() << endl;
    return out;
}

int main()
{
    Point p1(1, 3), p2(2, 4);
    Point p3 = p2 + p1;
    cout << p3;
    Point p4 = -p1;
    cout << p4;
    p4++;
    cout << p4;
    // p3=p4++;
    // cout<<p3<<p4;
    Point p5 = p1;
    p2 = p5;
    cout << "Ravnite: " << p1 << p5 << p2;
    if (p1 == p5)
        cout << "p1=p5";
    return 0;
}

#include<iostream>
#include<math.h>
using namespace std;

class point
{
private:
    double x;
    double y;
public:
    point(double xcoord, double ycoord)
    {
        x = xcoord;
        y = ycoord;
    }
    void print()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
    double dist(const point& p1, const point& p2)
    {
        return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
    }
    ~point()
    {
        cout << "Destructed" << endl;
    }
};

int main()
{
    point a(0, 0);
    point b(2, 2);
    cout << a.dist(a, b) << endl;
    return 0;
}

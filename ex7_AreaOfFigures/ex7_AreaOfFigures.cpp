#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

int main()
{
    string type;
    cin >> type;

    if (type == "square") {
        double number = 0.0;
        cin >> number;
        double area = number * number;
        //cout << area;
        cout.setf(ios::fixed);
        cout.precision(3);
        cout << area;

    }
    else if (type == "rectangle") {
        double firstNumber = 0.0;
        cin >> firstNumber;
        double secondNumber = 0.0;
        cin >> secondNumber;
        double area = firstNumber * secondNumber;
       // cout << area;
        cout.setf(ios::fixed);
        cout.precision(3);
        cout << area;

    }
    else if (type == "circle") {
        double radius = 0.0;
        cin >> radius;
        //double pi = 2 * acos(0.0);
        double area = radius * radius * 2 * acos(0.0);
        //cout << area;
        cout.setf(ios::fixed);
        cout.precision(3);
        cout << area;

    }
    else if (type == "triangle") {
        double length = 0.0;
        cin >> length;
        double height = 0.0;
        cin >> height;
        double area = (length * height) / 2;
       // cout << area;
        cout.setf(ios::fixed);
        cout.precision(3);
        cout << area;
    }

    return 0;
}

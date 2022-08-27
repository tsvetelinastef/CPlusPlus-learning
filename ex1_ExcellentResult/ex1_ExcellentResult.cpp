#include <iostream>
using namespace std;

int main()
{
    // 1. оценка (реално число - double)
    // 2.  проверка дали оценката >= 5.50 -> "Excellent!"

    double grade; //  променлива, която ми държи оценката 
    cin >> grade;

    if (grade >= 5.50) 
    {
        // изразът в скобите държи стойност true или false
        cout << "Excellent!";
    }

    return 0;
}


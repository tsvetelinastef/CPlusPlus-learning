#include <iostream>
using namespace std;

int main()
{
    // 1. ������ (������ ����� - double)
    // 2.  �������� ���� �������� >= 5.50 -> "Excellent!"

    double grade; //  ����������, ����� �� ����� �������� 
    cin >> grade;

    if (grade >= 5.50) 
    {
        // ������� � ������� ����� �������� true ��� false
        cout << "Excellent!";
    }

    return 0;
}


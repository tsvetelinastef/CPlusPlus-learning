#include <iostream>
using namespace std;

int main()
{
    // 1. ���� �����
    // 2. �������� �� �������
        // ��� � ����� - even
        // ��� � ������� - odd

    int number;
    cin >> number;

    if (number % 2 == 0) {
        cout << "even";
    } else {
        cout << "odd";
    }

    return 0;

}

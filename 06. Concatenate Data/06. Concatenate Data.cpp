#include <iostream>
using namespace std;

// �������� ��������, ����� ������� �� ��������� ���, �������, ������� � ���� � ������ ��������� �� 
// n������� ��� : "You are <firstName> <lastName>, a <age>-years old person from <town>."
int main()
{
    string name;
    cin >> name;

    string surname;
    cin >> surname;

    int age;
    cin >> age;

    string town;
    cin >> town;

    cout << "You are " << name << " " << surname << ", a " << age << "-years old person from " << town << ".";

    return 0;
}

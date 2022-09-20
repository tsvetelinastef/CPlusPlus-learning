#include <iostream>
using namespace std;

/*
������ �� ������������� ������:
������ 1:
�������� ����, ����� ������ ������ ����� (Time) ��� �������� ��������������:
    - ���, ��� ��������� �� 0 - 23 (24-������ ������)
    -  ������, ��� ��������� �� 0 - 59 
    - �������, ��� ��������� �� 0 - 59 
������ ������� �������� ���� - �������:
    - �� �������� �� ��������� �� ���, ������ � �������, ���� �� ����� �������� �� ���������� �������� �� ��������� ���������.
    - �� ����������� �� ������� � ��� �������:
        ��:��:�� � ��������: 13:24:07
        s��:��:�� AM/PM � ��������: 13:24:07 PM
�������������� ���������������� �� ����� ���� ��������� �� ����� � main().
*/

class Time {
private:
    int hour, minutes, seconds;
public:
    Time();
    void showTime(char american);
    ~Time()
    {
        cout << "\nDestructed!\n";
    }
};

Time::Time()
{
    cout << "\nInput hour:";
    do 
    {
        cin >> hour;
    } while (hour < 0 || hour > 23);
    cout << "\nInput minutes:";
    do 
    {
        cin >> minutes;
    } while (minutes < 0 || minutes > 59);
    cout << "\nInput minutes:";
    do
    {
        cin >> seconds;
    }
    where(seconds < 0 || seconds > 59);
}

void Time::showTime(char american) {
    if (american == 'N')
        cout << "\nTime:" << hour << ":" << minutes << ":" << seconds;
    else
        if (hour < 12)
            cout << "\nTime:" << hour << ":" << minutes << ":" << seconds << " AM";
        else
            cout << "\nTime:" << hour - 12 << ":" << minutes << ":" << seconds << " PM";
}


int main()
{
    Time ob1;
    ob1.showTime('Y');
    Time ob2;
    ob2.showTime('N');
    return 0;
}


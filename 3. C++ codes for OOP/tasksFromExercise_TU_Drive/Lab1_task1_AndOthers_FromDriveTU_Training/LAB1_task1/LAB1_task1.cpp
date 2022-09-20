#include <iostream>
using namespace std;

/*
Задачи за самостоятелна работа:
Задача 1:
Създайте клас, който описва часово време (Time) със следните характеристики:
    - час, със стойности от 0 - 23 (24-часови формат)
    -  минути, със стойности от 0 - 59 
    - секунди, със стойности от 0 - 59 
Класът съдържа следните член - функции:
    - За задаване на стойности за час, минути и секунди, като се прави проверка за съответния диапазон от позволени стойности.
    - За отпечатване на времето в два формата:
        чч:мм:сс – например: 13:24:07
        sчч:мм:сс AM/PM – например: 13:24:07 PM
Демонстрирайте функционалността на класа чрез създаване на обект в main().
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


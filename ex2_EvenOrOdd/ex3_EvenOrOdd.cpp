#include <iostream>
using namespace std;

int main()
{
    // 1. цяло число
    // 2. проверка на числото
        // ако е четно - even
        // ако е нечетно - odd

    int number;
    cin >> number;

    if (number % 2 == 0) {
        cout << "even";
    } else {
        cout << "odd";
    }

    return 0;

}

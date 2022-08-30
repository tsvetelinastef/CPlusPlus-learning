#include <iostream>
using namespace std;

int main()
{
   // 1. две цели числа
   // 2. проверка за числата
	// ако първото >= второто - отпечатвам първото
	// ако първото < второто - отпечатвам второто
	int firstNumber, secondNumber;
	cin >> firstNumber >> secondNumber;

	if (firstNumber >= secondNumber) {
		cout << firstNumber;
	} else {
		cout << secondNumber;
	}

	return 0;
}

#include <iostream>
using namespace std;

int main()
{
   // 1. скорост/ реално число
   // 2. проверка за скоростта
		// ако <= 10 - "slow"
		// ако <= 50 - "average"
		// ако <= 150 - "fast"
		// ако <= 1000 - "ultra fast"
		// ако > 1000 - "extremely fast"
	
	double speed;
	cin >> speed;

	if (speed <= 10) {
		cout << "slow";
	}
	else if (speed <= 50) {
		cout << "average";
	}
	else if (speed <= 150) {
		cout << "fast";
	}
	else if (speed <= 1000) {
		cout << "ultra fast";
	}
	else if (speed > 1000) {
		cout << "extremely fast";
	}

	return 0;
}

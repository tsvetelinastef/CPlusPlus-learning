#include <iostream>
using namespace std;

int main()
{
   // 1. �������/ ������ �����
   // 2. �������� �� ���������
		// ��� <= 10 - "slow"
		// ��� <= 50 - "average"
		// ��� <= 150 - "fast"
		// ��� <= 1000 - "ultra fast"
		// ��� > 1000 - "extremely fast"
	
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

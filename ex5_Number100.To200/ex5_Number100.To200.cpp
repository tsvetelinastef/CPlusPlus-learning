#include <iostream>
using namespace std;

int main()
{
   // 1. ���� �����
   // 2. �������� �� �������
		// ��� < 100 - "Less than 100" 
		// ��� <= 200 - "Between 100 and 200"
		// ��� > 200 - "Greater than 200"

	int number;
	cin >> number;

	if (number < 100) {
		cout << "Less than 100";
	}
	else if (number <= 200) {
		cout << "Between 100 and 200";
	}
	else if (number > 200) {
		cout << "Greater than 200";
	}

	return 0;
}

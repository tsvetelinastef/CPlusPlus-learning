#include <iostream>
using namespace std;

int main()
{
   // 1. ��� ���� �����
   // 2. �������� �� �������
	// ��� ������� >= ������� - ���������� �������
	// ��� ������� < ������� - ���������� �������
	int firstNumber, secondNumber;
	cin >> firstNumber >> secondNumber;

	if (firstNumber >= secondNumber) {
		cout << firstNumber;
	} else {
		cout << secondNumber;
	}

	return 0;
}

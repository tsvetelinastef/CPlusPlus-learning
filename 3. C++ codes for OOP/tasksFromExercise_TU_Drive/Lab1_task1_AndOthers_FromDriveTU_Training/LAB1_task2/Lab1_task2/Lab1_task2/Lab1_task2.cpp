#include <iostream>
#include <string.h>
using namespace std;

/*
* 
�������� ����, ����� ������ ������ �������� ��� �������� ��������������: �������� �����, ���, ������ ������ ����,
������ �������� � ������ �� ������� ������� (��� ����� - �����).
���������: ������ �� ������ �� ���� - ������������ �� � private.
������ ��� ��� ������������:
	- ������������ ���������� ����� � �������� ������ ���� � ������ ��������.
	- �������������� �� ������ �������� �� �� ������ �� ������������.
������ ������� �������� ���� - �������:
	- �������� � ���������� �� ��������� �� ����-������������.
	- �� ���������� �� ������ ������������� �������� �� ���������.
	- �� �������� �� ��������� �������.
�������������� ���������������� �� ����� ���� ��������� �� ����� � main().
*/

class worker {
private:
	int num, years, salaries[5];
	char *name;
	char *position;
public:
	worker(int allsalaries[], int n, char* workername, char* positionofworker)
	{
		num = 0;
		years = 0;
		for (int i = 0; i < n; i++)
			salaries[i] = allsalaries[i];
		strcpy(name, workername);
		strcpy(position, positionofworker);
	}

	worker(int socnum, int workyears, int allsalaries[], int n, char* workername)
	{
		num = socnum;
		years = workyears;
		for (int i = 0; i < n; i++)
		{
			salaries[i] = allsalaries[i];
			// cout << salaries[i];
		}
		strcpy(name, workername);
		cout << "Position: ";
		cin >> position;
	}

	// positions position;

	char* getName()
	{
		return name;
	}

	void averageSalary(int n)
	{
		int average = 0;
		for (int i = 0; i < n; i++)
		{
			cout << salaries[i] << endl;
			average = average + salaries[i];
		}
		average = average / n;
		cout << "Average is: " << average << endl;
	}

	void minSalary(int n)
	{
		int min = salaries[0];
		for (int i = 1; i < n; i++)
			if (min < salaries[i])
				min = salaries[i];
		cout << "Min is: " << min << endl;
	}

	void show()
	{
		cout << "Worker: " << name << "Position: " << position << " social number: " << num << endl;
	}

	~worker()
	{
		cout << "Destructed" << endl;
		delete name;
		delete position;
	}

};

int main()
{
	int sal[5] = { 300, 400, 500, 600, 700 };
	char person[10];
	char* test;
	strcpy(person, "Pesho");
	worker w1(123, 5, sal, 5, person);
	w1.show();
	w1.averageSalary(5);
	w1.averageSalary(5);
	test = w1.getName();
	cout << test << endl;
	return 0;
}



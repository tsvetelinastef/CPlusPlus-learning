#include <iostream>
#include <string.h>
using namespace std;

/*
* 
Създайте клас, който описва обекта работник със следните характеристики: социален номер, име, години трудов стаж,
текуща длъжност и списък от взимани заплати (тип данни - масив).
Забележка: Нивото на достъп до член - променливите да е private.
Класът има два конструктора:
	- Инициализира социалният номер и годините трудов стаж с нулева стойност.
	- Инициализиране на текуща длъжност да се въведе от клавиатурата.
Класът съдържа следните член - функции:
	- Задаване и получаване на стойности за член-променливите.
	- За пресмятане на средно аритметичната стойност от заплатите.
	- За намиране на минимална заплата.
Демонстрирайте функционалността на класа чрез създаване на обект в main().
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



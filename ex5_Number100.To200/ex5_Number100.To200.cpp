#include <iostream>
using namespace std;

int main()
{
   // 1. ц€ло число
   // 2. проверка за числото
		// ако < 100 - "Less than 100" 
		// ако <= 200 - "Between 100 and 200"
		// ако > 200 - "Greater than 200"

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

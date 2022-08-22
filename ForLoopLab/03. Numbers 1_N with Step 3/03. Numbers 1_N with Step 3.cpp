#include <iostream>
using namespace std;
// Напишете програма, която чете число n, въведено от потребителя и отпечатва числата от 1 до n през 3.


int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i+= 3)
	{
		cout << i << endl;
	}
	
	
	return 0;
}


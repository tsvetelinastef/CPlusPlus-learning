// Да се напише програма, която чете от конзолата текст (име на човек) и отпечатва "Hello, <name>!", където 
// <name> е въведеното име от конзолата.

#include <iostream>
using namespace std;

int main()
{
	string name;
    cin >> name;

	cout << "Hello, " << name << "!";
	
	return 0; 
}
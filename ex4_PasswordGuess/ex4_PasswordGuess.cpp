#include <iostream>
using namespace std;

int main()
{
    // 1. ������/ �����
    // 2. �������� �� �������� 
        // ��� �������� ������� � "s3cr3t!P@ssword" - print "Welcome"
        // If it don't  - print "Wrong password!"

    string password;
    cin >> password;

    if (password == "s3cr3t!P@ssw0rd") {
        cout << "Welcome";
    } else {
        cout << "Wrong password!";
    }
    
    return 0;
}


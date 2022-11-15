#include<iostream>
using namespace std;

class Stack {
private:
    char alphabet[26];
public:
    void loadStack()
    {
        for (int i = 0; i < 26; i++) {
            alphabet[i] = 97 + i;
            cout << alphabet[i];
        }
        cout << endl;
    }
    void loadStack(int upper)
    {
        int sum = 97;
        if (upper == 1)
            sum = sum - 32;
        for (int i = 0; i < 26; i++) {
            alphabet[i] = sum + i;
            cout << alphabet[i];
        }
        cout << endl;
    }
};

int main()
{
    Stack s, s2;
    s.loadStack();
    s2.loadStack(1);
    return 0;
}

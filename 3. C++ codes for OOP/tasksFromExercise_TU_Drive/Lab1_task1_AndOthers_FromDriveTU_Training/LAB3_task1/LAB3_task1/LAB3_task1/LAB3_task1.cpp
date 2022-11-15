#include<iostream>
using namespace std;

class Stack {
private:
    char* alphabet;
public:
    Stack() {
        alphabet = new char[26];
        if (!alphabet)
            cout << "Problem with allocation";
    }
    ~Stack()
    {
        delete alphabet;
        cout << "Destructed";
    }
    void loadstack(int upper)
    {
        int sum = 97;
        if (upper == 1)
            sum = sum - 32;
        for (int i = 0; i < 26; i++)//{
            alphabet[i] = sum + i;
        //   cout<<alphabet[i];}
         //  cout<<endl;
    }
    char& put(int n)
    {
        if (n < 0 || n>26)
            cout << "Out of bounds" << endl;
        else
            return alphabet[n];
    }
    void show()
    {
        for (int i = 0; i < 26; i++)
            cout << alphabet[i];
        cout << endl;
    }
};
int main()
{
    Stack s;
    s.loadstack(1);
    s.show();
    s.put(5) = 'A';
    s.show();
    return 0;
}

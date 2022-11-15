 #include<iostream>
#include<string.h>
using namespace std;

class name {
public:
    char* fname, * lname;
    name(char* f, char* l)
    {
        fname = new char[strlen(f) + 1];
        lname = new char[strlen(l) + 1];
        strcpy(fname, f);
        strcpy(lname, l);
    }
    ~name()
    {
        delete fname;
        delete lname;
        cout << "Destructed";
    }
};

class person
{
private:
    name imena;
    int age;
public:
    person(int a, char* f, char* l) :imena(f, l)
    {
        age = a;
    }
    void show()
    {
        cout << "Chovek: " << imena.fname << " " << imena.lname << " e na: " << age << " godini" << endl;
    }
};

int main()
{
    person p(30, "Ivan", "Ivanov"), p1(3, "Iva", "Ivanova");
    p.show();
    p1.show();
    p1 = p;       //uj shte preebe vsichko, ama realno raboti :D
    p1.show();
    return 0;
}


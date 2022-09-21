#include <iostream>
#include <math.h>
using namespace std;

/* Задача 1. Да се дефинира отново клас triangle, като се добави още една
член - функция, съименник на член - функция face(), която се отличава по
наличието на аргумент и по действие – освен лицето, тя връща и периметъра
на триъгълника. */

class triangle {
private:
    double a, b, c;
public:
    triangle();
    double face();      // член - функ face() без аргумент 
    double face(double *);  // член - функция face() с 1 аргумент
    void show(char *);
    ~triangle() {
        cout << "\n\nDestructing object triangle!\n";
    }
};
  
triangle::triangle()
{
    do {
        cout << "\n\nEnter three values for the sides of triangle:\n";
        cin >> a >> b >> c;
    } while (!((a > 0) && (b > 0) && (c > 0) && ((a + b > c) && ((a + c) > b) && ((b + c) > a))));
}

double triangle::face()
{
    double p, s;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}

double triangle::face(double *p)
{
    double pp = a + b + c;
    *p = pp;
    pp /= 2;
    double s;
    s = sqrt(pp * (pp - a) * (pp - b) * (pp - c));
    return s;
}

void triangle::show(char *name) {
    cout << "Sides of the triangle " << name << ":\n";
    cout << "a=" << a << ",b=" << b << ",c=" << c;
}

int main()
{
    triangle tr1;   // обект tr1, извиква се конструктор на класа
    double p, s;  
    tr1.show("tr1");
    cout << "\nThe face of triangle1 is=" << tr1.face(); // зарежда се член – функция  
         // face() без аргумент...
    triangle tr2;           //Обект tr2; извиква се конструкторът на класа
    tr2.show("tr2");  
    s = tr2.face(&p);    //Зарежда се член-функция face() с аргумент
    cout << "\nThe face of triangle2 is s=" << s << ", and the perimeter is p=" << p;
}

// Резултати:
// Въведете три стойности за страните на триъгълник : 30 40 50
// Страни на триъгълника tr1 :
// а = 30, b = 40, c = 50
// Лицето на триъгълник1 е s = 600
// Въведете три стойности за страните на триъгълник : 10 10 5
// Страни на триъгълника tr2 :
// а = 10, b = 10, c = 5
// Лицето на триъгълник2 е s = 24.206, а периметъра е p = 25
#include <iostream>  // iostream.h
#include <math.h>
using namespace std;

/*
Да се дефинира клас за фигура триъгълник. Член - променливите на класа са дълж. на 3те стр. на триъгълника: a, b, c.
Въвеждането на 3те страни на триъгълника да става чрез конструктор без параметри. Член-функциите включват функции за: 
– изчисляване на лицето на тръгълника face(); 
– Извеждане на информация за страните на триъгълника show().
Да се състави главна функция main(), която тества класа triangle като създава обект от този клас, указател към обект
от същия клас извиква член–функ на класа, веднъж посредством името на обекта и втори път посредством указателя към обекта.*/

class triangle {   // Декларация на клас triangle
private:
    double a, b, c;  // Член – променливите на класа/ член – данни
public:
    triangle();   // Декларация на конструктор
    double face();  // Декларация на член - функция
    void show(char*);       //  Декларация на член - функция
    ~triangle()    // Дефиниция на деструктор
    {  
        cout << "\nDestructing object triangle!\n";
    }
};

triangle::triangle()   // Дефиниция на конструктора
{
    do
    {
        cout << "\n\nEnter three values for the sides of triangle:\n";
        cin >> a >> b >> c;
    }

    while (!((a > 0) && (b > 0) && (c > 0) && ((a + b > c) && ((a + c) > b) && ((b + c) > a))));
}

    double triangle::face()     // Дефиниция на член - функцията
    {  
        double p, s;
        p = (a + b + c) / 2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        return s;
    }
   

    void triangle::show(char* name)   //  Дефиниция на член - функцията  
{
    cout << "Sides of the triangle " << name << ":\n";
    cout << "a=" << a << ",b=" << b << ",c =" << c;
}


void main()
{
    triangle ob1;
    double s;
    s = ob1.face();
    ob1.show("triangle1");
    cout << "\nThe face of triangle1 is s=" << s;

    triangle ob2;
    triangle* p;
    p = &ob2;
    s = p->face();
    p->show("triangle2");
    cout << "\nThe face of triangle2 is s=" << s;
}



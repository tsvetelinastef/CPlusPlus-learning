#include <iostream>  // iostream.h
#include <math.h>
using namespace std;

/*
�� �� �������� ���� �� ������ ����������. ���� - ������������ �� ����� �� ����. �� 3�� ���. �� �����������: a, b, c.
����������� �� 3�� ������ �� ����������� �� ����� ���� ����������� ��� ���������. ����-��������� �������� ������� ��: 
� ����������� �� ������ �� ���������� face(); 
� ��������� �� ���������� �� �������� �� ����������� show().
�� �� ������� ������ ������� main(), ����� ������ ����� triangle ���� ������� ����� �� ���� ����, �������� ��� �����
�� ����� ���� ������� �������� �� �����, ������ ����������� ����� �� ������ � ����� ��� ����������� ��������� ��� ������.*/

class triangle {   // ���������� �� ���� triangle
private:
    double a, b, c;  // ���� � ������������ �� �����/ ���� � �����
public:
    triangle();   // ���������� �� �����������
    double face();  // ���������� �� ���� - �������
    void show(char*);       //  ���������� �� ���� - �������
    ~triangle()    // ��������� �� ����������
    {  
        cout << "\nDestructing object triangle!\n";
    }
};

triangle::triangle()   // ��������� �� ������������
{
    do
    {
        cout << "\n\nEnter three values for the sides of triangle:\n";
        cin >> a >> b >> c;
    }

    while (!((a > 0) && (b > 0) && (c > 0) && ((a + b > c) && ((a + c) > b) && ((b + c) > a))));
}

    double triangle::face()     // ��������� �� ���� - ���������
    {  
        double p, s;
        p = (a + b + c) / 2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        return s;
    }
   

    void triangle::show(char* name)   //  ��������� �� ���� - ���������  
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



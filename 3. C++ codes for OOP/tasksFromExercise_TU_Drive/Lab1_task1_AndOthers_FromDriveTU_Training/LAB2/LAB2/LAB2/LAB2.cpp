#include <iostream>
#include <math.h>
using namespace std;

/* ������ 1. �� �� �������� ������ ���� triangle, ���� �� ������ ��� ����
���� - �������, ��������� �� ���� - ������� face(), ����� �� �������� ��
��������� �� �������� � �� �������� � ����� ������, �� ����� � ����������
�� �����������. */

class triangle {
private:
    double a, b, c;
public:
    triangle();
    double face();      // ���� - ���� face() ��� �������� 
    double face(double *);  // ���� - ������� face() � 1 ��������
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
    triangle tr1;   // ����� tr1, ������� �� ����������� �� �����
    double p, s;  
    tr1.show("tr1");
    cout << "\nThe face of triangle1 is=" << tr1.face(); // ������� �� ���� � �������  
         // face() ��� ��������...
    triangle tr2;           //����� tr2; ������� �� ������������� �� �����
    tr2.show("tr2");  
    s = tr2.face(&p);    //������� �� ����-������� face() � ��������
    cout << "\nThe face of triangle2 is s=" << s << ", and the perimeter is p=" << p;
}

// ���������:
// �������� ��� ��������� �� �������� �� ���������� : 30 40 50
// ������ �� ����������� tr1 :
// � = 30, b = 40, c = 50
// ������ �� ����������1 � s = 600
// �������� ��� ��������� �� �������� �� ���������� : 10 10 5
// ������ �� ����������� tr2 :
// � = 10, b = 10, c = 5
// ������ �� ����������2 � s = 24.206, � ���������� � p = 25
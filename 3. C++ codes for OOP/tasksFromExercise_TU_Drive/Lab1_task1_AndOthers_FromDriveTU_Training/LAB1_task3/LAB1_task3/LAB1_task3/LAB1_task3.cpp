#include <iostream>
using namespace std;

/* �������� ���� Line, ����� ������ ����� �� ������, ���� ������������ �� ������� �
������� �� *. ��������� ��������� �� ������� � private ���������� Len �� ���
Integer. ���� ������������� �� Line ������ ���� ���������: ��������� �� �������.
���� ������������� �� ��������� ������� � �� ��������� ������� �������. ��������
����������, ����� �� ������� �������. */

class Line {
private:
	int length;
public:
	Line(int num);
	~Line();
};

Line::Line(int num)
{
	length = num;
	for (int i = 0; i < num; i++)
		cout << "*";
}

Line::~Line()
{
	cout << "\nDestructed!";
}

int main()
{
	Line ob1(40);
	return 0;
}


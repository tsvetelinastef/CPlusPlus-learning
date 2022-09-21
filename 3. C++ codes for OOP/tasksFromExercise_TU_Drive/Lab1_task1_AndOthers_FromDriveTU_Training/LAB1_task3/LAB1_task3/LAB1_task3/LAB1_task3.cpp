#include <iostream>
using namespace std;

/* Създайте клас Line, който чертае линия на екрана, чрез изобразяване на линията с
помощта на *. Съхранете дължината на линията в private променлива Len от тип
Integer. Нека конструкторът на Line приема един параметър: дължината на линията.
Нека конструкторът да изчертава линията и да съхранява нейната дължина. Създайте
деструктор, който да изтрива линията. */

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


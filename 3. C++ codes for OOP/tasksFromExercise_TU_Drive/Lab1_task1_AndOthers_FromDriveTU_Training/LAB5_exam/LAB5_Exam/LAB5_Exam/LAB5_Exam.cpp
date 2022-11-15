#include <string.h>
#include <iostream>
using namespace std;

enum ZooLocs { ZOOANIMAL, BEAR, PANDA };
static char* locTable[] = {
"Whole zoo area",
"North B1: brown area",
"East B1,P area" };
class ZooAnimal {
	friend void print(ZooAnimal*);
public:
	ZooAnimal(char* s = "ZooAnimal");
	virtual ~ZooAnimal() { delete name; }
	void link(ZooAnimal*);
	virtual void print();
	virtual void isA();
protected:
	char* name;
	ZooAnimal* next;
};
class Bear :public ZooAnimal {
public:
	Bear(char* s = "Bear", ZooLocs loc = BEAR, char* sci = "Ursidae");
	~Bear() { delete sciName; }
	void print();
	void isA();
protected:
	char* sciName;
	ZooLocs ZooArea;
};
class Panda :public Bear {
public:
	Panda(char*, int, char* s = "Panda", char* sci = "Ailuropoda Melaoleuca",
		ZooLocs loc = PANDA);
	~Panda() { delete indName; }
	void print();
	void isA();
protected:
	char* indName;
	int cell;
};
ZooAnimal::ZooAnimal(char* s) :next(0) {
	name = new char[strlen(s) + 1];
	strcpy(name, s);
}
void ZooAnimal::link(ZooAnimal* za)
{
	za->next = next;
	next = za;
}
void ZooAnimal::isA()
{
	cout << "Animal name: " << name << '\n';
}
void ZooAnimal::print()
{
	isA();
}
Bear::Bear(char* s, ZooLocs loc, char* sci) :ZooAnimal(s), ZooArea(loc)
{
	sciName = new char[strlen(sci) + 1];
	strcpy(sciName, sci);
}
void Bear::isA()
{
	ZooAnimal::isA();
	cout << "\tSname: \t" << sciName << '\n';
}
void Bear::print()
{
	ZooAnimal::print();
	cout << "\tAdress: \t" << locTable[ZooArea] << '\n';
}
Panda::Panda(char* nm, int room, char* s, char* sci, ZooLocs loc) :
	Bear(s, loc, sci), cell(room) {
	indName = new char[strlen(nm) + 1];
	strcpy(indName, nm);
};
void Panda::isA()
{
	Bear::isA();
	cout << "\tCall our friend: \t" << indName << '\n';
}
void Panda::print()
{
	Bear::print();
	cout << "\tCell No: \t" << cell << '\n';
}
void print(ZooAnimal* pz)
{
	while (pz)
	{
		pz->print();
		cout << '\n';
		pz = pz->next;
	}
}

ZooAnimal* headPtr = 0, circus("Circus animal");
Bear yogi("Little bear", BEAR, "ursus cartoonus");
Panda yinYang("Yin Yang", 1001, "Big Panda"),
rocky("Rocky", 943, "Red Panda", "Ailurus fulgena");

ZooAnimal* makelist(ZooAnimal* ptr)
{
	ptr = &yinYang;
	ptr->link(&circus);
	ptr->link(&yogi);
	ptr->link(&rocky);
	return ptr;
}

int main()
{
	cout << "Virtual Function Example\n";
	headPtr = makelist(headPtr);
	print(headPtr);
	return 0;
}

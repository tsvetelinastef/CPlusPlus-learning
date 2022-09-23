#include <iostream>  // #include <iostream.h>

/* we create class car and class truck, every of which contains private varible that defines the speed of the vehicle.
This program contains the sp_greater() function, which is friendly function of both car and truck. */

class truck;  // Предварителна декларация
class car
{
	int passengers;
	int speed;
public:
	car(int p, int s) {
		passengers = p;
		speed = s;
	}

	friend int sp_greater(car c, truck  t);
};

class truck {
	int weight;
	int speed;
public:
	truck(int w, int s) {
		weight = w;
		speed = s;
	}

	friend int sp_greater(car c, truck  t);
};

int sp_greater(car c, truck  t)
{
	return c.speed-t.speed;
}

int main()
{
	int t;
	char c1(6, 55), c2(2, 120);
	truck t1(10000, 55), t2(20000, 72);
	cout << "Comparing c1 and t1:\n";
	t = sp_greater(c1, t1);
	if (t < 0) cout << "Truck is faster.\n";
	else if (t == 0) cout << "Car amd truck speed is the same.\n";
	else cout << "Car is faster.\n";

	cout << "\nComparing c2 and t2:\n";
	t = sp_greater(c2, t2);
	if (t < 0) cout << "Truck is faster.\n";
	else if (t == 0) cout << "Car and truck speed is the same.\n";
	else cout << "Car is faster.\n";

	return 0;
}


#include <iostream>
using namespace std;


    // The way you structure a program C++ is:
    //Split it up into a set of tasksand subtasks .
    //Make functions for the tasks .
    //Instruct the computer to perform them in sequence.

    /*
    Write a program that defines a shape class with a constructor 
    that gives value to width and height. The define two sub-classes 
    triangle and rectangle, that calculate the area of the shape area ().
    In the main, define two variables a triangle and a rectangle and then 
    call the area() function in this two varibles.*/

// Exercises: OOP#include <iostream>
// Exercise 1


	class Shape
	{
	protected:
		float width, height;
	public:
		void set_data(float a, float b)
		{
			width = a;
			height = b;
		}
	};

	class Rectangle : public Shape
	{
	public:
		float area()
		{
			return (width * height);
		}
	};

	class Triangle : public Shape
	{
	public:
		float area()
		{
			return (width * height / 2);
		}
	};

	int main() {

		Rectangle rect;
		Triangle tri;
		rect.set_data(5, 3);
		tri.set_data(2, 5);
		cout << rect.area() << endl;
		cout << tri.area() << endl;
		return 0;
	}

   

//=======================================================================================================================
/*
With large amounts of data and/or large numbers of tasks, 
this makes for complex and unmaintainable programs.
To manage this complexity, it’s nicer to package up self-sufficient,
modular pieces of code.OOP allows programmers to pack away 
details into neat, self-contained boxes (objects) so that they can
think of the objects more abstractly and focus on the interactions
between them.
There are lots of definitions for OOP, but 3 primary features of it are:
Encapsulation: grouping related data and functions together as 
objects and defining an interface to those objects.
Inheritance: allowing code to be reused between related types .
Polymorphism: allowing a value to be one of several types, and 
determining at runtime which functions to call on it based on its type .
*/

/*
Encapsulation just refers to packaging related stuff together.
We’ve already seen how to package up data and the operations it 
supports in C++: with classes.
Inheritance allows us to define hierarchies of related classes.
Polymorphism means “many shapes.” It refers to the ability of 
one object to have many types. If we have a function that 
expects a Vehicle object, we can safely pass it a Car object, 
because every Car is also a Vehicle. Likewise for references
and pointers: anywhere you can use a Vehicle , you can use a Car .
*/

/*
===========================================================================================================================
A virtual function or virtual method is a function or method 
whose behavior can be  overridden within an inheriting
class by a function with the same signature. This concept is an 
important part of the polymorphism.
Car c(" VANITY ", 2003) ;
 Vehicle * vPtr = &c;
 cout << vPtr -> getDesc ();// is the same as cout << *vPtr.getDesc ();

 (The -> notation on line 3 just dereferences and gets a member.
 ptr->member is equivalent to (ptr).member.) In the first line,
 we define an instance of class Car. Because vPtr is declared as
 a Vehicle , this will call the Vehicle version of getDesc, 
 even though the object pointed to is actually a Car, as Car inherits
 from Vehicle.
Note: *vPtr.getDesc () == vPtr->getDesc () In other words the ->is 
equivalent to do an indirection(*) and add the dot (.) to access a 
class member. Usually we’d want the program to select the correct
function at runtime based on which kind of object is pointed to.
We can get this behavior by adding the keyword virtual before
the method definition:
 class Vehicle {
 ...
 virtual const string getDesc () {...}
 };

With this definition, the code above would correctly select the 
Car version of getDesc.Selecting the correct function at runtime is 
called dynamic dispatch.
This matches the whole OOP idea – we’re sending a message to the object
and letting it figure out for itself what actions that message actually
means it should take. Because references are implicitly using pointers, 
the same issues apply to references:
Car c(" VANITY ", 2003) ;
Vehicle &v = c;
cout << v. getDesc ();

This will only call the Car version of getDesc if getDesc is 
declared as virtual.
Once a method is declared virtual in some class C, it is virtual
in every derived class of C, even if not explicitly declared as such.
However, it is a good idea to declare it as virtual in the derived 
classes anyway for clarity.Arguably, there is no reasonable way to 
define getDesc for a generic Vehicle – only derived classes really 
need a definition of it, since there is no such thing as a generic 
vehicle that isn’t also a car, truck, or the like. Still, we do want 
to require every derived class of Vehicle to have this function.
We can omit the definition of getDesc from Vehicle by making the 
function pure virtual via the following odd syntax:
class Vehicle {
 ...
 virtual const string getDesc () = 0; // Pure virtual
 };

The = 0 indicates that no definition will be given. This implies
that one can no longer create an instance of Vehicle; one can 
only create instances of Cars, Trucks, and other derived classes
which do implement the getDesc method. Vehicle is then an abstract
class – one which defines only an interface, but doesn’t actually 
implement it, and therefore cannot be instantiated.
*/
// ==============================================================================================================================

/*
C++ allows a class to have multiple based classes.
class Car : public Vehicle , public InsuredItem {
 ...
 };
This specifies that Car should have all the members 
of both the Vehicle and the InsuredItem classes.
Multiple inheritance is tricky and potentially dangerous:
==> If both Vehicle and InsuredItem define a member x this can cause problems.
==>If both Vehicle and InsuredItem inherited from the same base class, 
  you’d end up with two instances of the base class within each Car.
*/
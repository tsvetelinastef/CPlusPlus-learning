#include <iostream>
using std::string;

class Employee {
private:
	string Name;
	string Company;
	int Age;
	
//private:        // can add it or can remove it 
//protected:  // if here is protected I can't access no one of these down... outside of the class 
	// and when I try to write for example Name in the main I have an error!!
public:              // here I don't have some errors and even in the main are listed and the others components in the class 
	void setName(string name) {  // setter 
		Name = name; 
	}
	string getName() {  // getter 
		return Name; 
	}
	void setCompany(string company) {
		Company = company;
	}
	string getCompany() {
		return Company;
	}
	void setAge(int age) {
		if(age >= 18)
		Age = age;
	}
	int getAge() {
		return Age;
	}
	// class method is a function 
	void IntroduceYourself() {
		//std::cout << "Name - " << Name << std::endl;
		//std::cout << "Company - " << Company << std::endl;
		//std::cout << "Age - " << Age << std::endl;
	}

	Employee(string name, string company, int age) {
		//Name = name;
		//Company = company;
		//Age = age;
	}
};

int main()
{
	Employee employee1 = Employee("Tsvetelina", "Random", 21 );
	//Employee employee1; // variable of type Employee // // and here constructor is invoked 
	//employee1.Name = "Tsvetelina"; // can't add "Name" here if I have "protected:" in the class 
	// If it's public I can have "Name" here, even "Company" and "Age", just all the properties in the class Employee 
	//employee1.Company = "Random";
	//employee1.Age = 21;
	employee1.IntroduceYourself(); // here I invoke the function , that I have created in the begining 

	// Access modifiers: private, public, protected 
	// private ---> hidden, not accessible outside the class
	// public ---> I can access that outside of my class,  everybody outside of the class can accesss it ->  public members of my class
	// protected ---> inheritance 

	// everything inside my class is private by default 

	Employee employee2 = Employee("John", "Amazon", 35); // here constructor is invoked 
	// employee2.Name = "John";
	//employee2.Company = "Amazon";
	//employee2.Age = 35;
	employee2.IntroduceYourself();

	// if we want to repeat Name,Company and Age for example for 10 users or 100 users this is not optimal
	// Constructor is a special type of method that is invoked each time that an object of a class is created
	// whenever I create an object of a class , constructor is invoked 


	//Rules:
	// we have to following, constructor doesn't have return type ... constructor don't have void 
	// constructor have the same name as the class it belongs to 
	// constructor must be public

	// all of the constructors at now should be public 


	///================================================================================================

	//  4 most important principles:
	// encapsulation -> tying togetger data and methods that operate some data so they are grouped together within a class 
	// I do this with the purpose of preventing anyone or anything outside the class to be able directly access our data and to 
	// interact with it and to modify it 
	// I don't want that to other class directly modify and change and interact with my data 
	
	//employee1.IntroduceYourself
	employee1.setAge(21);
	std::cout << employee1.getName() << " is " << employee1.getAge() << " years old" << std::endl;

}
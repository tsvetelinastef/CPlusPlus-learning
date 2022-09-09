#include <iostream>
using std::string;

class AbstractEmployee{  // contract 
    // obligatory 
   virtual void AskForPromotion() = 0; // pure virtual function, abstraction 
  // abstract class and the function is abstract 
   //whichever class decides to sign this contract that classs will need to provide
   // implementation for a method called AskForPromotion 
};

class Employee:AbstractEmployee {
private:
    //string Name;
    string Company;
    int Age;
protected:
    string Name;
public:
    void setName(string name) {

    }
    string getName() {
        return Name;
    }

    void setCompany(string company) {

    }

    string getCompany() {
        return Company;
    }

    void setAge(int age) {

    }

    int getAge() {
        return Age;
    }


    void IntroduceYourself() {

    }
    Employee(string name, string company, int age) {
        // again the same as the previous folder 
    }
    void AskForPromotion() {
        if (Age > 30)
            std::cout << Name << " got promoted!" << std::endl;
        else
            std::cout << Name << ", sorry NO promotion for you!" << std::endl;
    }
   virtual void Work() {
        std::cout << Name << " is checking email, task backlog, performimg tasks..." << std::endl;

    }
};

class Developer:public Employee { // child class , subclass 
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage)
        :Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void FixBug() {
        std::cout << Name << " fixed bug using " << FavProgrammingLanguage << std::endl;
        // can't be just Name here insted of getName
    }

    
    void Work() {
        std::cout << Name << " is writting " << FavProgrammingLanguage << " code" << std::endl;

    }

};

class Teacher:public Employee {
public: 
    string Subject;
    void PrepareLesson() {
        std::cout << Name << " is preparing " << Subject << " lesson" << std::endl;

    }

    Teacher(string name, string company, int age, string subject)
        :Employee(name, company, age)
    {
        Subject = subject;
    }
    void Work() {
        std::cout << Name << " is teaching " << Subject  << std::endl;
    }
};

int main()  // The most common use of polymorphism is when a
        // parent class reference is used to refer to a child class object 
{
    // abstraction --> is hiding complex things behind a procedure that makes those things look simple 
    //Employee employee1 = Employee("Tsvety", "Amazon", 21);
    //employee1.IntroduceYourself();

    //Employee employee2 = Employee("John", "Bosh", 35);
   // employee2.IntroduceYourself();

    Developer d = Developer("Saldina", "YT-CodeBeauty", 25, "C++");
    Teacher t = Teacher("Jack", "Cool School", 35, "History");
   // t.PrepareLesson();
    //t.AskForPromotion();

   // d.Work();
    //t.Work();

    Employee* e1 = &d;
    Employee* e2 = &t; 

    e1->Work();
    e2->Work();


   // d.FixBug();
   // d.FixBug();
   // d.AskForPromotion();
    //employee1.setAge(15);
    //std::cout << employee1.getName() << " is " << employee1.getAge() << " years old." << std::endl;
   // employee1.AskForPromotion();
    //employee2.AskForPromotion();

}

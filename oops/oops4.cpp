/// inheritance
// the capability of a class to derive property & charcterstic from another class

#include <bits\stdc++.h>
using namespace std;

// class Human
// {
// public:
//     string name;
//     int age, weight;
// };

// class student : public Human
// {
// public:
//     int roll_number, fees;

// public:
//     void fun(string name, int age, int weight, int roll_number, int fees)
//     {
//         this->name = name;
//         this->age = age;
//         this->weight = weight;
//         this->roll_number = roll_number;
//         this->fees = fees;
//     }
//     void display()
//     {
//         cout << name << " " << age << " " << weight << " " << roll_number << " " << fees;
//     }
// };

// int main()
// {
//     student A;
//     A.name = "rohit";
//     A.age = 34;
//     A.weight = 40;
//     A.roll_number = 12;
//     A.fees = 2000;
//     A.display();
//     return 0;
// }

// single inheritance
//   a class can inherit from only one baseclass or ek derived class used the properties from parent class

// first parent class constructor is called then child class is called
// but it is opposite in case of destructor

// class Human
// {
// protected:
//     string name;
//     int age;

// public:
//     Human(string name, int age)
//     {
//         this->name = name;
//         this->age = age;
//     }

//     // Human()
//     // {
//     //     cout << " papa \n";
//     // }

//     void work()
//     {
//         cout << " I am working \n";
//     }
// };

// class student : public Human
// {
//     int roll_number, fees;

// public:
//     student(string name, int age, int roll_number, int fees) : Human(name, age)
//     {
//         this->roll_number = roll_number;
//         this->fees = fees;
//     }
// student()
// {
//     cout << "beta\n";
// }
//     void display()
//     {
//         cout << name << " " << age << " " << roll_number << " " << fees;
//     }
// };
// int main()
//{

// student A1("neetu", 23, 34, 5000);
//  A1.work();
// A1.display();
// return 0;
//}

// multilevel inheritance
// In multilevel inheritance, a class can inherit from another class, and then a third class can inherit from the second class,
// forming a chain of inheritance.

// class Person
// {
// protected:
//     string name;

// public:
//     void introduce()
//     {
//         cout << "hello my name is: " << name << endl;
//     }
// };
// class Employee : public Person
// {
// protected:
//     int salary;

// public:
//     void Monthly_salary()
//     {
//         cout << "My monthy salary is :" << salary << endl;
//     }
// };

// class Manager : public Employee
// {
// public:
//     string department;

//     Manager(string name, int salary, string department)
//     {
//         this->name = name;
//         this->salary = salary;
//         this->department = department;
//     }

//     void work()
//     {
//         cout << " I am leading the department " << department << endl;
//     }
//     //    void display()
//     //    {
//     //     cout<<name<<" "<<salary<<" "<<department<<endl;
//     //    }
// };

// int main()
// {
//     Manager A1("rohit", 200, "Finance");
//     A1.Monthly_salary();
// }

// class Engineer
// {
//     void money()
//     {
//         cout << "hello Money\n";
//     }

// public:
//     string specialization;

//     Engineer()
//     {
//         cout << "hello engineer\n";
//     }

//     void work()
//     {
//         cout << " I have specialization in " << specialization << endl;
//     }
// };

// class Youtuber
// {
// public:
//     int subscribers;
//     Youtuber()
//     {
//         cout << "hello Youtuber\n";
//     }

//     void contentcreator()
//     {
//         cout << " I have a subcribe base of " << subscribers << endl;
//     }
// };

// class codeTeacher : public Engineer, public Youtuber
// {
// public:
//     string name;

//     codeTeacher()
//     {
//         cout << "hello coder\n";
//     }

//     codeTeacher(string name, string specialization, int subscribers)
//     {
//         this->name = name;
//         this->specialization = specialization;
//         this->subscribers = subscribers;
//     }
//     void Showcase()
//     {
//         cout << "My name is " << name << endl;
//         work();
//         contentcreator();
//     }
// };
// int main()
//{
// codeTeacher a1("Rohit", "CSE", 49000);
// a1.Showcase();
// codeTeacher a1();
//}

// hierarchical inheritence
// ek parent aur uske multiple child present hote hai
// In hierarchical inheritance, one base class is inherited by multiple derived classes.
// This forms a tree-like structure where a single base class serves as the common ancestor for multiple derived classes.

// class Human
// {
// protected:
//     string name;
//     int age;

// public:
//     Human(){

//     };
//     Human(string name, int age)
//     {
//         this->name = name;
//         this->age = age;
//     }

//     void display()
//     {
//         cout << name << " " << age << "\n";
//     }

//     void work()
//     {
//         cout << " I am working \n";
//     }
// };

// class Teacher : public Human
// {
//     int salary;

// public:
//     Teacher(int salary, string name, int age)
//     {
//         this->salary = salary;
//         this->name = name;
//         this->age = age;
//     }
//     void display()
//     {
//         cout << name << " " << age << " " << salary << endl;
//     }
// };

// int main()
// {
//     Teacher a1(3000, "adhikari", 34);
//     a1.display();
// }

// hybrid inheritance
// Hybrid inheritance is a combination of multiple types of inheritance within a single program. It can include a mix of single inheritance, multiple inheritance, and hierarchical inheritance.

// base class
class animal
{
public:
    void eat()
    {
        cout << "animal is eating \n";
    }
};

class Mammal : public animal
{
public:
    void breath()
    {
        cout << "Animal is breathing \n";
    }
};

// another base class
class Bird
{
public:
    void fly()
    {
        cout << " bird is flying\n";
    }
};

// Derived class inheriting from both Mammal and Bird
class Bat : public Mammal, public Bird
{
public:
    void navigate()
    {
        cout << "Bat is navigating" << endl;
    }
};

int main()
{
    Bat myBat;
    myBat.eat();      // Inherited from Animal
    myBat.fly();      // Inherited from Bird
    myBat.navigate(); // Defined in Bat

    Bird mySparrow;
    mySparrow.fly(); // Inherited from Bird
}

// In Java, two types of inheritance are not supported:

// Multiple Inheritance (through classes):

// Java does not support inheriting from more than one class. In other words, a class in Java cannot extend multiple classes simultaneously.
// This limitation is in contrast to some other programming languages like C++, where a class can inherit from multiple classes.

// To overcome this limitation, Java supports multiple inheritance through interfaces, allowing a class to implement multiple interfaces.

// Multilevel Inheritance with Diamond Problem:

// Java also avoids the "diamond problem" associated with multiple inheritance. The diamond problem occurs when a class inherits from two classes that have a common ancestor. If there are conflicting methods or fields in the common ancestor, it can create ambiguity.
// To avoid the diamond problem, Java uses interfaces to achieve multiple inheritance. An interface can extend multiple interfaces, and a class can implement multiple interfaces.
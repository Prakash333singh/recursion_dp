
// Inheritance is a fundamental concept in object-oriented programming where one class (called the child or derived class) inherits the properties and behaviors (methods and attributes) of another class (called the parent or base class).

// A base class (also known as a parent class or superclass) is the original class from which other classes (called derived classes or child classes) inherit properties and methods.

/// inheritance
// the capability of a class to derive property & charcterstic from another class

// single inheritance
//   a class can inherit from only one baseclass or one derived class used the properties from parent class

// first parent class constructor is called then child class is called

// but it is opposite in case of destructor

#include <bits\stdc++.h>
using namespace std;

// class Human
// {
//     // public:
// protected:
//     string name;
//     int age, weight;
// };

// // class student : public Human
// class student : private Human
// {
// public:
//     int roll_number, fees;
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
//     // A.name = "rohit";
//     // A.age = 34;
//     // A.weight = 40;
//     // A.roll_number = 12;
//     // A.fees = 2000;
//     A.fun("Mohit", 34, 40, 12, 2000);
//     A.display();
//     return 0;
// }

// multiple inheritance
// In multiple inheritance, a class can inherit from more than one base class.

// base class 1

// class Animal
// {
// public:
//     void eat()
//     {
//         cout << "Eating..." << endl;
//     }
// };

// // Base class 2
// class Bird
// {
// public:
//     void fly()
//     {
//         cout << "Flying..." << endl;
//     }
// };

// // Derived class
// class Bat : public Animal, public Bird
// {
// public:
//     void sleep()
//     {
//         cout << "Sleeping..." << endl;
//     }
// };

// int main()
// {
//     Bat b;
//     b.eat();   // Inherited from Animal
//     b.fly();   // Inherited from Bird
//     b.sleep(); // Method in Bat
//     return 0;
// }

// Multilevel inheritance is when a class is derived from another derived class, forming a chain of inheritance.
// Base class 1
class Animal
{
public:
    void eat()
    {
        cout << "Eating..." << endl;
    }
};

// Intermediate derived class
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking..." << endl;
    }
};

// Derived class from Dog
class Puppy : public Dog
{
public:
    void play()
    {
        cout << "Playing..." << endl;
    }
};

int main()
{
    Puppy p;
    p.eat();  // Inherited from Animal
    p.bark(); // Inherited from Dog
    p.play(); // Method in Puppy
    return 0;
}

// hierarchical inheritence
// In hierarchical inheritance, multiple derived classes inherit from a single base class.
// ek parent aur uske multiple child present hote hai
// In hierarchical inheritance, one base class is inherited by multiple derived classes.
// This forms a tree-like structure where a single base class serves as the common ancestor for multiple derived classes.

// Base class
// class Animal
// {
// public:
//     void eat()
//     {
//         cout << "Eating..." << endl;
//     }
// };

// // Derived class 1
// class Dog : public Animal
// {
// public:
//     void bark()
//     {
//         cout << "Barking..." << endl;
//     }
// };

// // Derived class 2
// class Cat : public Animal
// {
// public:
//     void meow()
//     {
//         cout << "Meowing..." << endl;
//     }
// };

// int main()
// {
//     Dog d;
//     d.eat();  // Inherited from Animal
//     d.bark(); // Method in Dog

//     Cat c;
//     c.eat();  // Inherited from Animal
//     c.meow(); // Method in Cat
//     return 0;
// }

// hybrid inheritance
// Hybrid inheritance is a combination of multiple types of inheritance within a single program. It can include a mix of single inheritance, multiple inheritance, and hierarchical inheritance.

// Hybrid inheritance is a combination of two or more types of inheritance. Often, multiple inheritance and multilevel inheritance are mixed. Diamond Problem occurs when two base classes have a common base, and the derived class inherits from both, leading to ambiguity. To solve this, we use virtual inheritance.
// Base class
// class Animal
// {
// public:
//     void eat()
//     {
//         cout << "Eating..." << endl;
//     }
// };

// // Base class 1
// class Mammal : virtual public Animal
// {
// };

// // Base class 2
// class Bird : virtual public Animal
// {
// };

// // Derived class
// class Bat : public Mammal, public Bird
// {
// public:
//     void fly()
//     {
//         cout << "Flying..." << endl;
//     }
// };

// int main()
// {
//     Bat b;
//     b.eat(); // Inherited from Animal
//     b.fly(); // Method in Bat
//     return 0;
// }

// In Java, two types of inheritance are not supported:

// Multiple Inheritance (through classes):

// Java does not support inheriting from more than one class. In other words, a class in Java cannot extend multiple classes simultaneously.
// This limitation is in contrast to some other programming languages like C++, where a class can inherit from multiple classes.

// To overcome this limitation, Java supports multiple inheritance through interfaces, allowing a class to implement multiple interfaces.

// Multilevel Inheritance with Diamond Problem:

// Java also avoids the "diamond problem" associated with multiple inheritance. The diamond problem occurs when a class inherits from two classes that have a common ancestor. If there are conflicting methods or fields in the common ancestor, it can create ambiguity.
// To avoid the diamond problem, Java uses interfaces to achieve multiple inheritance. An interface can extend multiple interfaces, and a class can implement multiple interfaces.
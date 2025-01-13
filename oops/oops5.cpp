// polymorphism
// Polymorphism is a concept in object-oriented programming that allows one function/ method to work differently in different ways depending on the object it is acting upon. In simple terms, it means "one name, different forms."

// For example, a function called sound() can behave differently based on whether it's used in a Dog class (where it might bark) or in a Cat class (where it might meow). It allows flexibility and reusability in your code by using the same interface to handle different types of objects.

// The word “polymorphism” means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form.

//  it is of two type
//  1.copiletime polymorphism  2.runtime polymorphism

// compileTime ->Compile time polymorphism is a type of polymorphism occurring when the method call gets resolved during compile time.
// This type of polymorphism is achieved by function overloading and  operator overloading.
// 1.function/method overloading  2.operator overloading

#include <bits\stdc++.h>
using namespace std;

// Method or function overloading allows a class to have multiple methods with the same name but different parameter lists

// class funOverloading
// {
// public:
//     int area(int r)
//     {
//         return 3.14 * r * r;
//     }
//     int area(int l, int b)
//     {
//         return l * b;
//     }
// };

// int main()
// {
//     funOverloading a1;
//     cout << a1.area(5);
//     cout << a1.area(5, 4);
// }

// Operator Overloading:
// Operator overloading allows you to define the behavior of operators for user-defined data types.
// The choice of the overloaded function is determined at compile-time based on the operand types.
// .    (dot operator)
// ::   (scope operator)
// ?:  (ternary operator)
// size of

class Complex
{
    int real;
    int img;

public:
    Complex() {

    };

    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    };
    void display()
    {
        cout << real << " +i" << img << endl;
    }
    Complex operator+(Complex &c)
    {
        Complex ans;
        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;
    }
};

// int main()
// {
//     Complex c1(3, 4);
//     Complex c2(4, 6);
//     Complex c3 = c1 + c2;
//     c3.display();
// }

// class operatorOverlaodingExample

// {

// private:
//     int myVar;

// public:
//     operatorOverlaodingExample(int number)
//     {
//         this->myVar = number;
//     }

//     void operator++()
//     {

//         myVar = myVar + 20;
//     }

//     void display()
//     {

//         cout << "The updated value is: " << myVar;

//         cout << "\n\n";
//     }
// };

// int main()

// {

//     operatorOverlaodingExample obj(8);
//     // call the function "viod operator +++()"
//     ++obj;
//     obj.display();

//     return 0;
// }

// runtime polymorphism
// Run time polymorphism is a type of polymorphism in OOPS which is resolved during runtime.
// In C++, you can implement run-time polymorphism in two ways.
// 1.function overridding  2.virtual function

// Runtime polymorphism occurs when functions are resolved at runtime rather than compile time when a call to an overridden method is resolved dynamically at runtime rather than compile time.It's also known as late binding or dynamic binding.

// Runtime polymorphism is achieved through virtual functions and is resolved during runtime.
// It involves the use of base classes, pointers, and virtual functions.
// Method overriding is an application of run time polymorphism where two or more functions with the same name, arguments,
// and return type accompany different classes of the same structure.

// virtual function is the function in a base class that is marked with virtual keyword and can be overridden by derived classes

// class A
// {
// public:
//     virtual void f1()
//     {
//         cout << "baap hu bsdk \n";
//     }
// };
// class B : public A
// {
// public:
//     void f1()
//     {
//         cout << "beta hu papa\n";
//     }
//     void f2() {}
// };

// int main()
// {
//     A *p, o1;
//     B o2;
//     p = &o2;
//     p->f1();
// }

// virtual function working concept
// They enable dynamic (runtime) polymorphism, allowing derived classes to override base class methods. This capability is important for designing systems where the exact type of an object is not known until runtime.

//  The primary benefit of using virtual functions is the ability to use a base class pointer or reference to call derived class methods, enabling polymorphic behavior.

// #include <iostream>
// using namespace std;

// // Base class
// class Animal {
// public:
//     // Virtual function for sound, allowing for polymorphism
//     virtual void sound() {
//         cout << "Animal makes a sound" << endl;
//     }
// };

// // Derived class
// class Dog : public Animal {
// public:
//     // Overriding the sound function
//     void sound() override {
//         cout << "Dog barks" << endl;
//     }
// };

// int main() {
//     Animal* animalPtr;   // Pointer to base class
//     Dog dog;             // Create a Dog object

//     animalPtr = &dog;    // Point to the Dog object
//     animalPtr->sound();  // Calls the overridden method in Dog class

//     return 0;
// }

// . This means that when you call this function through a pointer or reference to the base class, the overridden version in the derived class will be executed instead of the base class version.

class A
{
    //*vptr  which is pointing to the vtable   vtable 1
    //                     will store the address of functions
    //               f2 f3 f4
public:
    void f1() { cout << "this is f1 of class A\n"; }
    virtual void f2() { cout << "this is f2 of class A\n"; }
    virtual void f3() { cout << "this is f3 of class A\n"; }
    virtual void f4() { cout << "this is f4 of class A\n"; }
};

// early binding mai we will the type of pointer to which it is pointing
//*vptr  which is pointing to the vtable   vtable 1
//                      will store the address of functions
//                    f2 f3 f4
class B : public A
{
public:
    void f1() { cout << "this is f1 of class B\n"; }
    void f2() { cout << "this is f2 of class B\n"; }
    void f4(int x) { cout << "this is f4 of class B\n"; }
};

// int main()
// {
//     A *p;
//     B o2;
//     p = &o2;
//     p->f1(); // early binding we will see the object to which p is pointing
//     p->f2(); // late binding
//     p->f3(); // late binding
//     p->f4(); // late binding
//     // p->f4(5);//error
// }
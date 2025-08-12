// Use Call by Value ==> if you want to protect the original data from modifications.
// Use Call by Reference ==> if you need to modify the original data directly within the function.

// types of variables
// int x = 5; // ordinary variable         x
//    | 5 |
//    1000

// int *p; // pointer variable          p
// p = &x; // read as address of      |1000|

// int &y = x; // referce operator
// y++;
//  x->6;

// reference variable
// rf variable means address
// reference variable is an internal pointer
// refernce variable must be initialized during decleartion

// object pointer
// a pointer contains address of an object is called object pointer

// this pointer
// this is a keyword
// this is a local object pointer in every instance member function containing address of the object
// this pointer can not be modified
// it is used to refer caller object in member function

// #include <bits\stdc++.h>
// using namespace std;
// class Box
// {
// private:
//     int l, b, h;

// public:
//     void setDimensions(int l, int b, int h)
//     {
//         this->b = b;
//         this->l = l;
//         this->h = h;
//     }
//     void display()
//     {
//         cout << l << " " << b << " " << h;
//     }
// };
// int main()
// {
//     Box *p, s1;
//     p = &s1;
//     p->setDimensions(12, 10, 5);
//     p->display();
//     return 0;
// }

// Overriding and overloading are two important concepts of object-oriented programming (OOP). Both overriding and overloading play a crucial role in OOP as they enable code reusability, flexibility, and modularity.

// overriding refers to the ability of a derived class to provide its own implementation of a method that is already defined in its parent class.

// overriding enables polymorphism ,where different objects of the same class hierarchy can behave differently based on their specific implementations.

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void Draw()
    {
        cout << "Drawing a shape..." << endl;
    }
};

class Circle : public Shape
{
public:
    void Draw() override
    {
        cout << "Drawing a circle..." << endl;
    }
};

class Rectangle : public Shape
{
public:
    void Draw() override
    {
        cout << "Drawing a rectangle..." << endl;
    }
};

int main()
{
    Shape *shape1 = new Circle();
    Shape *shape2 = new Rectangle();

    shape1->Draw(); // Outputs "Drawing a circle..."
    shape2->Draw(); // Outputs "Drawing a rectangle..."

    delete shape1;
    delete shape2;

    return 0;
}

// we have a class shape with a virtual method with a virtual method draw(),which is overridden in derived classes circle and rectangle when we create instances of the derived classes and call the draw() method, the respective  overridden implementation are executed.this showcases the power of method overriding in achieving polymorphism.

// overloading refers to the ability to define multiple methods with the same name but different parameter lists within a class.these methods can have differnt types,different no of parameters or parameters with different types.

// #include <iostream>
// using namespace std;
// class Calculator
// {
// public:
//     int Add(int a, int b)
//     {
//         return a + b;
//     }

//     double Add(double a, double b)
//     {
//         return a + b;
//     }
// };

// int main()
// {
//     Calculator c1;

//     int sum1 = c1.Add(2, 3);
//     double sum2 = c1.Add(2.4, 3.7);
//     cout << sum1 << " " << sum2;

//     return 0;
// }
// In this example, we have a Calculator class with two methods named Add, but with different parameter types. The first overload accepts two integers and returns their sum, while the second overload accepts two doubles and returns their sum. By overloading the Add method, we can handle both integer and floating-point arithmetic using a single method name, promoting code reuse and readability.
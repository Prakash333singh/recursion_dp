// constructor

// it is a special function that is invoked automatically at the time of object creation
// Name of the constructor have same name as class it doesn't have any return type it is used to initialize the objects

// constructor overloading
// if the name of the function is same but it takes different number of arguments

// copy constructor
// A copy constructor is a special member function in C++ that is used to create a new object as a copy of an existing object

#include <bits\stdc++.h>
using namespace std;

class customer
{
    string name;
    int acc_number;
    int balance;
    // A pointer to an integer array that will store the rate of interest (ROI).
    int *roi;

public:
    // default constructor
    customer()
    {
        cout << "constructor is called" << endl;
        name = "rohit";
        acc_number = 5;
        balance = 1000;
        roi = new int[100];
    }

    // parameterised constructor
    // customer(string name, int acc_number, int balance)
    // {
    //     // jis object ne es constructor ko call karta hai uske address ko this pointer store karke rakhta hai
    //     this->name = name;
    //     this->acc_number = acc_number;
    //     this->balance = balance;
    // }

    // constructor overloading
    // ability to define multiple constructors with different parameter lists in the same class. Each constructor performs different initialization tasks, depending on the number and type of parameters passed during object creation.
    customer(string a, int b)
    {
        name = a;
        acc_number = b;
        balance = 50;
    }

    // inline constructor

    inline customer(string a, int b, int c) : name(a), acc_number(b), balance(b)
    {
    }

    void display()
    {
        cout << name << " " << acc_number << " " << balance << endl;
    }

    // copy constructor
    customer(customer &b)
    // Using a reference allows the constructor to directly access and copy the values from the original object,
    // rather than creating a new copy of the object
    {
        name = b.name;
        acc_number = b.acc_number;
        balance = b.balance;
    }
};
int main()
{
    // customer c1;
    // c1.display();

    /// parameterised constructor
    customer c2("neha", 4, 738);
    // c2.display();

    /// constructor overloading
    customer c3("rubi", 4);
    c3.display();

    // copy constructor
    customer c4(c2);
    c4.display();

    // default constructor
    customer a5;
    a5 = c3;
    a5.display();
}

// destructor
// it is an instance member function that is invoked automatically whenever an object is going to be destroyed
// it is a last fun that is going to be called before an object is destroyed it is used to free memory dynamically
// Destructors do not have a return type, and they don't take any parameters. They are declared with the class name preceded by a tilde (~).

// why destructor are called in reverse order
//  this is because the objects are created in a stack which follows the lifo order so when one object gets out of the stac its destructor gets called

// #include <bits\stdc++.h>
// using namespace std;

// class customer
// {
//     // stores customer name
//     string name;
//     // A pointer to an integer that will store the customer's balance.
//     int *balance;

// public:
//     customer(string name, int bal)
//     {
//         // The this pointer is used to refer to the current object, so the name passed in the constructor is assigned to the class member name.
//         this->name = name;
//         // dynamically allocating memory for balance
//         this->balance = new int;
//         // integer value bal is assigned to balance(memory location)
//         *balance = bal;
//         cout << "constructor is called \n";
//     }

//     // destructor
//     ~customer()
//     {
//         cout << "destructor is called\n";
//         delete balance;
//     }
// };
// int main()
// {
//     // customer a1;
//     customer a1("prakash", 1000);
// }
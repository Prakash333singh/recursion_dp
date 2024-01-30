// constructor
// it is a special function that is invoked automatically at the time of object creation
// Name of the constructor have same name as class
// it doesn't have any return type
// it is used to initialize the objects

// constructor overloading
// if the name of the is same but it takes different number of arguments

#include <bits\stdc++.h>
using namespace std;

class customer
{
    string name;
    int acc_number;
    int balance;
    int *roi;

public:
    // default constructor
    customer()
    {
        // cout << "constructor is called";
        name = "rohit";
        acc_number = 5;
        balance = 1000;
        roi = new int[100];
    }
    // parameterised constructor

    customer(string name, int acc_number, int balance)
    {
        // jis object ne es constructor ko call karta hai uske address ko this pointer store karke rakhta hai
        this->name = name;
        this->acc_number = acc_number;
        this->balance = balance;
    }

    // constructor overloading
    customer(string a, int b)
    {
        name = a;
        acc_number = b;
        // balance = 50;
    }

    // inline constructor

    inline customer(string a, int b, int c) : name(a), acc_number(b), balance(b)
    {
    }
    void display()
    {
        cout << name << " " << acc_number << " " << balance << endl;
    }
};
int main()
{
    customer c1;
    c1.display();
    customer c2("neha", 4, 738);
    c2.display();
    customer c3("rubi", 4);
    c3.display();

    return 0;
}
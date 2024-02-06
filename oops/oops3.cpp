// static members in cpp
// 1.static local variables
// 2.static member variables
// 3.static members functions

// staic local variable
// they are by default initialized to zero
// thier lifetime is throughout the program
// void fun()
// {
//     static int x; //default value will 0 its liftime is throughout the program
//     int y;//initialized with the garbage value its liftime is throughout the function
// }

// staic member variable or class member variable
// declared inside the class body
// they must defined outside the class
// smv does not belong to any object but to the whole class
// there will only one copy of static member variable for the whole class
// any object can use the same copy of class variable

// static member function
//  they are qualified with the keyword static
//  they are also called member function
//  they can be invoked with or without is_object
//  they can only access static members of the class

#include <bits\stdc++.h>
using namespace std;
class Account
{
private:
    int balance;      // instance member variable
    static float roi; // static member variable/class variable
public:
    void setBalance(int b)
    {
        balance = b;
    }
    static void setrio(float r) // static member function/class function
    {
        roi = r;
    }
};
float Account::roi = 3.5; // by default value is 0
// memory is allocated after declearation of this static member variable
// does not depend on no of objects

int main()
{
    Account a1, a2;
    a1.setrio(4.5);
    // we can call satic member function without creating objects
    Account::setrio(3.4);
    // we can call static member function without creating any object simply we have to write static key word before
    // function decleartion
}

// static data member and function
// how to count the total number of objects
// they are attribute of classes or class member
// it is declared using static keyword
// only one copy of that member is created for the entire class and is
// shared by all the object
// it is initialized before any object of this class is created
// for example total balance is present in any bank

// static member function for accessing static member variables
// aur static usse he banana hai jo sbke liye common rahe
#include <bits\stdc++.h>
using namespace std;
// class customer
// {
//     string name;
//     int acc_number, balance;
//     static int total_customer;
//     static int total_balance;

// public:
//     customer(string name, int acc_number, int balance)
//     {
//         this->name = name;
//         this->acc_number = acc_number;
//         this->balance = balance;
//         total_customer++;
//         total_balance += balance;
//     }

//     // now this is the part of class
//     static void acceStatic()
//     {
//         cout << total_customer << endl;
//         cout << total_balance << endl;
//     }
//     void deposit(int amount)
//     {
//         if (amount > 0)
//         {
//             balance += amount;
//             total_balance += amount;
//         }
//     }
//     void withdraw(int amount)
//     {
//         if (amount <= balance && amount > 0)
//         {
//             balance -= amount;
//             total_balance -= amount;
//         }
//     }

//     void display()
//     {
//         cout << name << " " << acc_number << " " << balance << " " << total_customer << endl;
//     }
//     void display_total()
//     {
//         cout << total_customer << endl;
//     }
// };
// /// how to initailze the static member
// int customer::total_customer = 0;
// int customer::total_balance = 0;

// int main()
// {
//     customer a1("rohit", 1, 1000);
//     customer a2("mohit", 2, 2000);
//     // a1.display();
//     // a2.display();
//     customer a3("sonia", 3, 2000);
//     a1.deposit(400);
//     customer::acceStatic();
//     a1.withdraw(100);
//     customer::acceStatic();
//     // a3.display();
//     return 0;
// }

// Encapsulation
// wrapping up of data and information in a single unit ,while controlling access to them
// it is also called data hiding
// which we keep our variables private and control them with the help of functions
// it is used to fill a right imformation or galat data feed na hojaye

// for eg: if any user fill age -5 which does make any sense
// so we can control this age variable with the help of functions
// #include <bits\stdc++.h>
// using namespace std;
// class customer
// {
//     string name;
//     int balance;
//     int age;

// public:
//     customer(string a, int b, int c)
//     {
//         name = a;
//         balance = b;
//         age = c;
//     }
//     void deposit(int amount)
//     {
//         if (amount > 0)
//         {
//             balance += amount;
//         }
//         else
//         {
//             cout << "invalid amount" << endl;
//         }
//     }
// };
// int main()
// {
//     customer a1("rohit", 1000, 20);
//     a1.deposit(100);
//     // a1.deposit(-100);
// }

// abstraction
// display only essential information & hiding the details
// for eg we all are using instgram so when we send message to anyone we do dont know whole mechanism behind this message transfer user only need to pass its message to its friend so hiding all logic behind msg traversal this property is called abstraction
// sort function in cpp sort(a.begin(),a.end())

// friend function
// friend function is not a member function of a class to which it is a friend
// ff is decleared in the class with friend keyword
// it must be defined outside the class to which it is friend
// ff can access any member of the class to which it is friend
// ff cannot access members of the class directly it can access with of objects

// class Complex
// {
// private:
//     int a, b;

// public:
//     void setData(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     void showData()
//     {
//         cout << a << b << endl;
//     }
//     // declear within a class

//     friend void fun(Complex);
// };

// // define
// void fun(Complex c)
// {
//     cout << "sum is" << c.a + c.b;
// }
// int main()
// {
//     Complex c1;
//     c1.setData(4, 6);
//     fun(c1);
// }

// friend function can become friend to more than one class
// agar mai 2 classes ke member variables ko use krna chahta hu ek sath
// tuo with the help of member function we can do this
// class B;
// class A
// {
//     int a;

//     friend void fun(A, B);

// public:
//     void setData(int x)
//     {
//         a = x;
//     }
// };
// class B
// {
//     int b;
//     friend void fun(A, B);

// public:
//     void setData(int x)
//     {
//         b = x;
//     }
// };
// void fun(A a1, B b1)
// {
//     cout << a1.a + b1.b << endl;
// }
// int main()
// {
//     A a1;
//     a1.setData(4);
//     B b1;
//     b1.setData(5);
//     fun(a1, b1);
// }

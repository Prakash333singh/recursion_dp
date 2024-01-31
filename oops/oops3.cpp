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
// #include <bits\stdc++.h>
// using namespace std;
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
// /// hoe to initailze the static member
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

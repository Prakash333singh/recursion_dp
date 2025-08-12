// oops
//  it is an approach or programming pattern where the programs are structure throught class and object rather than function and logic

// why we needs oops
// to acheive modular programming -> it is simply  a approach in which we divide a large complex program into smaller independent and reuseble components
// benefits
// 1.code resusability
// 2.readability
// 3.scalability- adding new feature often becomes easier as new modules can be added without distrubing existing ones
// 4.testing
// 5.ease of maintence when there is any bug or change is required ,so the developer can focus on specific module without
// distrubing the actual code base

// pillars of oops
// there are 4 pillars of oops
// 1.inheritence 2.polymorphism 3.abstraction 4.encapsulation

// class->it is userdefined data type or it is factory of producing objects or blueprint for creating objects
// objects have state and behaviour or these are real entity or anything that exist in physical world

// object c1    class->object
// userdefinedDatatype->varible

// function inside class are called methods
#include <bits\stdc++.h>
using namespace std;

// // class student
// {
// private:
//     string name;
//     int age;
//     int roll_number;
//     string grade;

// public:
//     void setName(string s)
//     {
//         // test case
//         if (s.size() == 0)
//         {
//             cout << "invalid name :" << endl;
//             return;
//         }

//         name = s;
//     }
//     void setGrade(string g)
//     {
//         grade = g;
//     }
//     void setAge(int a)
//     {
//         if (age < 0 || age > 100)
//         {
//             cout << "invalid age" << endl;
//         }
//         age = a;
//     }
//     void setRollno(int r)
//     {
//         roll_number = r;
//     }

//     void getName()
//     {
//         cout << name << endl;
//     }
//     void getGrade()
//     {
//         cout << grade << endl;
//     }

//     void getAge()
//     {
//         cout << age << endl;
//     }

//     void getRollno()
//     {
//         cout << roll_number << endl;
//     }
// };

// // int main()
// {
//     student s1;
//     s1.setName("adhiakri");
//     s1.setAge(20);
//     s1.setGrade("A+");
//     s1.setRollno(34);
//     s1.getName();
//     s1.getAge();
//     s1.getGrade();
//     s1.getRollno();

//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// concept of padding
// why an empty class has size 1??

//  compilers typically ensure that an empty class has a size of at least 1 byte, allowing each object to have a distinct address.
// class a
// {
// };

// int main()
// {
//     a obj;
//     cout << sizeof(obj) << " ";
// }

// what is 32bit or 64bit system;
// a 32 bit system can process 32 bits of data at a time
// an integer variable in c for a 32 bit system -> int num32
// an integer variable in c for a 62 bit system -> long long num64

// aaxxbbbb  x-padding
// padding is used by complier to optimize memory alignment and access speed
// it involves adding extra bits to the memory layout of classes to ensure that each member is aligned
// at a memory address that's multiple of its size.
// this optimization is crucial for efficient memory usage and access speed
// especially in performance-critical application.

// Compilers often align data members to improve memory access speed. For example, on many architectures, accessing a 4-byte int may be more efficient if it starts at an address that is a multiple of 4. This is known as data alignment.
// To align the int b properly, the compiler may insert padding after the char a. The amount of padding added depends on the compiler and the architecture.

// class a
// {
//     char a; // 2byte
//     int b;  // 4 byte
// };

// int main()
// {
//     a obj;
//     cout << sizeof(obj) << " ";
/// output 8 aaxxbbbb
// }

// static vs dynamic memory allocation
// In static memory allocation, memory is allocated at compile-time and is fixed throughout the program's execution.
// static memory allocation mai memory stack(which is limit) mai allot hoti whereas in dynamic memory allocation memory is alloted in heap memory
//  In dynamic memory allocation, memory is allocated at runtime and can change in size during the program's execution.

// class student
// {
// public:
//     string name;
//     int age, roll_number;
//     string grade;
// };

// int main()
// {
// Static memory allocation for an array of 5 integers
// int arr[5] = {10, 20, 30, 40, 50};

/// dynamic memory allocation use new keyword
//     student *s = new student;
//     s->name = "lofiya";
//     s->age = 21;
//     s->roll_number = 34;
//     s->grade = "A+";

//     cout << s->name << endl;
//     cout << s->age << endl;
//     cout << s->roll_number << endl;
//     cout << s->grade << endl;
//     return 0;
// }

// oops

class ShoppingCart
{
private:
    double total;                     // Total cost of items in the cart
    unordered_map<string, int> items; // Stores item name and quantity

public:
    // Constructor to initialize total and items
    ShoppingCart()
    {
        total = 0;
    }

    // Method to add an item to the cart
    void add_item(const string &item_name, int quantity, double price)
    {
        total += (quantity * price);
        items[item_name] += quantity; // Increment quantity if item already exists
    }

    // Method to remove an item from the cart
    void remove_item(const std::string &item_name, int quantity, double price)
    {
        total -= (quantity * price);

        if (items[item_name] <= quantity)
        {
            items.erase(item_name); // Remove the item completely if quantity is exceeded
        }
        else
        {
            items[item_name] -= quantity; // Decrease the quantity
        }
    }

    // Method to perform checkout and return balance or an error message
    std::string checkout(double cash_paid)
    {
        if (cash_paid < total)
        {
            return "You paid " + std::to_string(cash_paid) + " but cart amount is " + std::to_string(total);
        }
        else
        {
            double balance = cash_paid - total;
            return "Exchange amount: " + std::to_string(balance);
        }
    }
};

int main()
{
    ShoppingCart cart;

    cart.add_item("Apple", 5, 10.0); // Adding 5 Apples at price 10
    cart.add_item("Banana", 2, 5.0); // Adding 2 Bananas at price 5

    std::cout << cart.checkout(100.0) << std::endl; // Checkout with 100

    cart.remove_item("Apple", 2, 10.0);            // Removing 2 Apples
    std::cout << cart.checkout(50.0) << std::endl; // Checkout with 50

    return 0;
}

// The four principles of object-oriented programming are encapsulation, abstraction, inheritance, and polymorphism.

// Encapsulation: Encapsulation is the mechanism of binding the data together and hiding it from the outside world. Encapsulation is achieved when each object keeps its state private so that other objects don’t have direct access to its state. Instead, they can access this state only through a set of public functions.

class Product
{
private:
    int maxprice; // Private member variable to store maximum price

public:
    // Constructor to initialize maxprice
    Product()
    {
        maxprice = 900;
    }

    // Method to display the selling price
    void sell() const
    {
        std::cout << "Selling Price: " << maxprice << std::endl;
    }

    // Setter method to update maxprice
    void set_max_price(int price)
    {
        maxprice = price;
    }
};

// int main()
// {
//     Product product;

//     // Selling the product at the initial price
//     product.sell();

//     // Attempting to change the maxprice directly (wouldn't work due to  private variables)
//     // product.maxprice = 1000;  // This line will cause a compile-time error because maxprice is private

//     // Using the setter method to change the price
//     product.set_max_price(1000);
//     product.sell();

//     return 0;
// }

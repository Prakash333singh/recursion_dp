// oops
//  it is an approach or programming pattern where the programs are structure throught class and object rather than function and logic

// why we needs oops
// to acheive modular programming it is simply  a approach in which we divide a large complex program into smaller
// independent and reuseble components
// benefits
// 1.code resusability
// 2readability
// 3.scalability- adding new feature often becomes easier as new modules can be added without distrubing existing ones
// 4.testing
// 5.ease of maintence when there is any bug or change is required ,so the developer can focus on specific module without
// distrubing the actual code base
// pillars of oops
// 1.inheritence 2.polymorphism 3.abstraction 4.encapsulation

// class->it is userdefined data type or it is factory of producing objects
// blueprint for creating objects

// objects have state and behaviour or these are real entity or anything that exist in physical world

// object c1    class->object
// userdefinedDatatype->varible

// function inside class are called methods

#include <bits\stdc++.h>
using namespace std;

// class student
// {
//     string name;
//     int age, roll_number;
//     string grade;

// public:
//     void setname(string s)
//     {
//         if (s.size() == 0)
//         {
//             cout << "invalid name :" << endl;
//             return;
//         }
//         name = s;
//     }
//     void setgrade(string g)
//     {
//         grade = g;
//     }
//     void setage(int a)
//     {
//         if (age < 0 || age > 100)
//         {
//             cout << "invalid age" << endl;
//         }
//         age = a;
//     }
//     void setrollno(int r)
//     {
//         roll_number = r;
//     }

//     void getname()
//     {
//         cout << name << endl;
//     }
//     void getgrade()
//     {
//         cout << grade << endl;
//     }

//     void getage()
//     {
//         cout << age << endl;
//     }

//     void getrollno()
//     {
//         cout << roll_number << endl;
//     }
// };

// int main()
// {
//     student s1;
//     s1.setname("adhiakri");
//     s1.setage(20);
//     s1.setgrade("A+");
//     s1.setrollno(34);
//     s1.getname();
//     s1.getage();
//     s1.getgrade();
//     s1.getrollno();

//     return 0;
// }

// concept of padding

// empty class why size of empty is 1
//  compilers typically ensure that an empty class has a size of at least 1 byte, allowing each object to have a distinct address.
//  class a
//  {
//  };

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
// at a memory address that's multiple of its size
// this optimization is crucial for efficient memory usage and access speed
// especially in performance-critical application

// Compilers often align data members to improve memory access speed. For example, on many architectures, accessing a 4-byte int may be more efficient if it starts at an address that is a multiple of 4. This is known as data alignment.
// To align the int b properly, the compiler may insert padding after the char a. The amount of padding added depends on the compiler and the architecture.

// class a
// {
//     char a; // 1byte
//     int b;  // 4 byte
// };

// int main()
// {
//     a obj;
//     cout << sizeof(obj) << " ";
// }

// static vs dynamic memory allocation
// In static memory allocation, memory is allocated at compile-time and is fixed throughout the program's execution.
// static memory allocation mai memory stack(which is limit) mai allot hoti whereas in dynamic memory allocation memory is alloted in heap memory
//  In dynamic memory allocation, memory is allocated at runtime and can change in size during the program's execution.

class student
{
public:
    string name;
    int age, roll_number;
    string grade;
};

int main()
{
    student *s = new student;
    s->name = "lofiya";
    s->age = 21;
    s->roll_number = 34;
    s->grade = "A+";

    cout << s->name;
    cout << s->age;
    cout << s->roll_number;
    cout << s->grade;
    return 0;
}
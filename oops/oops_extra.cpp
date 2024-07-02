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

#include <bits\stdc++.h>
using namespace std;
class Box
{
private:
    int l, b, h;

public:
    void setDimensions(int l, int b, int h)
    {
        this->b = b;
        this->l = l;
        this->h = h;
    }
    void display()
    {
        cout << l << " " << b << " " << h;
    }
};
int main()
{
    Box *p, s1;
    p = &s1;
    p->setDimensions(12, 10, 5);
    p->display();
    return 0;
}

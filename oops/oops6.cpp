// exception handling
//  conditions responsible for creating errors during
// the execution of program are known as exceptions
//  Conditions responsible for creating errors during the execution of a program are known as Exceptions. Handling these exceptions by either removing these conditions or by using some other operations than normal operations is known as exception handling
//  Synchronous: Exceptions that happen when something goes wrong because of a mistake in the input data or when the program is not equipped to handle the current type of data it’s working with, such as dividing a number by zero.
//  Asynchronous: Exceptions that are beyond the program’s control, such as disc failure, keyboard interrupts, etc.

// Separate Error code from Normal code to help us understand errors easily.
// and easiy to debug the error easily

// It is implemented by try{ } and catch( ){ } statements.

// The try statement allows you to define a block of code to be tested for errors while it is being executed.
// The throw keyword throws an exception when a problem is detected, which lets us create a custom error.
// The catch statement allows you to define a block of code to be executed if an error occurs in the try block.
// There can be multiple catch( ) but only a single try.
// C++ program to demonstate the use of try,catch and throw
// in exception handling.

#include <iostream>
using namespace std;

int main()
{
    int x = -1;

    // Some code
    cout << "Before try \n";

    // try block
    try
    {
        cout << "Inside try \n";
        if (x < 0)
        {
            // throwing an exception
            throw x;
            cout << "After throw (Never executed) \n";
        }
    }

    // catch block
    catch (int x)
    {
        cout << "Exception Caught \n";
    }

    cout << "After catch (Will be executed) \n";

    return 0;
}
// The "diamond problem" is a term used in object-oriented programming languages that support multiple inheritance. It arises when a class inherits from two classes that have a common ancestor. This situation forms a diamond shape in the class hierarchy, and it can lead to ambiguities and challenges in the design and behavior of the program.
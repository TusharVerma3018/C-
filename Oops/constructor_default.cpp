#include <iostream>
#include <string>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    /* <----- creating a constructor ----->

    1.Constructor is a special member function with the same name as the class
    2.It is used to initialize the objects of its class
    3.It is automatically invoked(called) whenever an object is created

    */

    Complex(void); //constructor decleration
    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) //....>  This is a default constructor as it takes no parameters
{
    a = 0;
    b = 0;
}

int main()
{
    Complex C;
    C.printnumber();
    C.printnumber();
    C.printnumber();

    return 0;
}

/* <----- Characteristics of constructor -----> 

1. It should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
3. They can't return values and do not have return type
4. It can have default arguement 
5. We can't refer to their address

*/
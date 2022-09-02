#include <iostream>
#include <string>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }

    Complex(int x)
    {
        a = x;
        b = 0;
    }

    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    void PrintNumber()
    {
        cout << "The Complex Number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c;
    c.PrintNumber();

    Complex c1(3);
    c1.PrintNumber();

    Complex c2(2, 5);
    c2.PrintNumber();
    return 0;
}
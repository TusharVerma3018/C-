#include <iostream>
#include <string>
using namespace std;

class Complex
{
private:
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void getSumbyData(Complex o1, Complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void print()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setData(1, 2);
    c1.print();

    c2.setData(3, 4);
    c2.print();

    c3.getSumbyData(c1, c2);
    c3.print();

    return 0;
}
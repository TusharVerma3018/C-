#include <iostream>
#include <string>
using namespace std;

class Complex
{
private:
    int a;
    int b;
    friend Complex Sum(Complex o1, Complex o2);

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void print()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

Complex Sum(Complex o1, Complex o2)
{
    Complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, c3;
    c1.setData(1, 2);
    c1.print();

    c2.setData(3, 4);
    c2.print();

    c3 = Sum(c1, c2);
    c3.print();

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Base1
{
protected:
    int Base1;

public:
    void setBase1(int a)
    {
        Base1 = a;
    }
};

class Base2
{
protected:
    int Base2;

public:
    void setBase2(int b)
    {
        Base2 = b;
    }
};

class Base3
{
protected:
    int Base3;

public:
    void setBase3(int c)
    {
        Base3 = c;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The Value of Base 1 is " << Base1 << endl;
        cout << "The Value of Base 2 is " << Base2 << endl;
        cout << "The Value of Base 3 is " << Base3 << endl;
        cout << "The Sum of Base 1, Base2 And Base3 is " << Base1 + Base2 + Base3 << endl;
    }
};

int main()
{
    Derived Tushar;
    Tushar.setBase1(5);
    Tushar.setBase2(10);
    Tushar.setBase3(15);
    Tushar.show();

    return 0;
}
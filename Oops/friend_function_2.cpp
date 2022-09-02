#include <iostream>
#include <string>
using namespace std;

class Y;

class X
{
private:
    int num1;
    friend void add(X, Y);

public:
    void setnum1(int value)
    {
        num1 = value;
    }
};

class Y
{
private:
    int num2;
    friend void add(X, Y);

public:
    void setnum2(int value)
    {
        num2 = value;
    }
};

void add(X o1, Y o2)
{
    cout << "The Sum of class X and class Y objects is " << o1.num1 + o2.num2 << endl;
}

int main()
{
    X c1;
    c1.setnum1(2);

    Y c2;
    c2.setnum2(5);

    add(c1, c2);

    return 0;
}
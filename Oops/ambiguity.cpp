#include <iostream>
#include <string>
using namespace std;

class Base1
{
public:
    void display()
    {
        cout << "Good Morning" << endl;
    }
};

class Base2
{
public:
    void display()
    {
        cout << "Good Afternoon" << endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    void display()
    {
        Base2 ::display();
    }
};

int main()
{
    Derived d;
    d.display();
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Base
{
protected:
    string name1;
    int id;

public:
    Base()
    {
        name1 = "Tushar";
        id = 1001;
    }
    void get_data()
    {
        cout << "Details of Base Class " << endl;
        cout << "Name : " << name1 << endl
             << "ID No : " << id << endl;
    }
};

class Derived : public Base
{
private:
    string name2;
    int roll;

public:
    Derived()
    {
        name2 = "Keshav";
        roll = 1002;
    }
    void get_data()
    {
        cout << "Details of Derived Class " << endl;
        cout << "Name : " << name2 << endl
             << "ID No : " << roll << endl;
    }
};

int main()
{
    Derived obj;
    obj.Base::get_data();
    obj.Derived::get_data();
    return 0;
}
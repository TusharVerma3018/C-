#include <iostream>
#include <string>
using namespace std;

class Base
{
private:
    int data1;

public:
    int data2;
    void setData();
    int getdata1();
    int getdata2();
};

void Base::setData()
{
    data1 = 10;
    data2 = 20;
}
int Base ::getdata1()
{
    return data1;
}
int Base ::getdata2()
{
    return data2;
}

class Derived : public Base
{
private:
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    data3 = data2 * getdata1();
}
void Derived ::display()
{
    cout << "The value of data 1 is " << getdata1() << endl;
    cout << "The value of data 2 is " << data2 << endl;
    cout << "The value of data 3 is " << data3 << endl;
}

int main()
{
    Derived b;
    b.setData();
    // b.getdata1();
    // b.getdata2();
    b.process();
    b.display();

    return 0;
}
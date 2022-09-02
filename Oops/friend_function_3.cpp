#include <iostream>
#include <string>
using namespace std;

class Y;

class X
{
private:
    int num1;
    friend void swap(X &, Y &);

public:
    void setnum1(int value)
    {
        num1 = value;
    }
    void display(void)
    {
        cout << num1 << endl;
    }
};

class Y
{
private:
    int num2;
    friend void swap(X &, Y &);

public:
    void setnum2(int value)
    {
        num2 = value;
    }
    void display()
    {
        cout << num2 << endl;
    }
};

void swap(X &o1, Y &o2)
{
    int temp = o1.num1;
    o1.num1 = o2.num2;
    o2.num2 = temp;
}

int main()
{
    X c1;
    c1.setnum1(2);
    cout << "The Value of c1 before swaping is : ";
    c1.display();

    Y c2;
    c2.setnum2(5);
    cout << "The Value of c2 before swaping is : ";
    c2.display();

    swap(c1, c2);

    cout << "The Value of c1 after swaping is : ";
    c1.display();
    cout << "The Value of c2 after swaping is : ";
    c2.display();

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1); //decleration
    void getdata()
    {
        cout << "The Value of a is " << a << endl;
        cout << "The Value of b is " << b << endl;
        cout << "The Value of c is " << c << endl;
        cout << "The Value of d is " << d << endl;
        cout << "The Value of e is " << e << endl;
    }
};
void Employee ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee Tushar;
    Tushar.d = 34;
    Tushar.e = 89;
    Tushar.setdata(1, 2, 3);
    Tushar.getdata();
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Bank
{
private:
    int principal;
    int years;
    float rate;
    float returnvalue;

public:
    Bank() {}
    Bank(int p, int y, int r);
    Bank(int p, int y, float r);
    void display();
};

Bank ::Bank(int p, int y, int r)
{
    principal = p;
    years = y;
    rate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + rate);
    }
}

Bank::Bank(int p, int y, float r)
{
    principal = p;
    years = y;
    rate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + rate);
    }
}

void Bank::display()
{
    cout << "Principal Amount was " << principal << " Return Value after " << years << " Years will be " << returnvalue << endl;
}

int main()
{
    Bank b1, b2, b3;
    int p, y, r;
    float R;

    cout << "Enter the Value of p,y,r" << endl;
    cin >> p >> y >> r;
    b1 = Bank(p, y, r);
    b1.display();

    cout << "Enter the Value of p,y,R" << endl;
    cin >> p >> y >> R;
    b2 = Bank(p, y, R);
    b2.display();

    return 0;
}
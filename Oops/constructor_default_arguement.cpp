#include <iostream>
#include <string>
using namespace std;

class DATA
{
private:
    int a, b, c;

public:
    DATA(int x = 1, int y = 2, int z = 3)
    {
        a = x;
        b = y;
        c = z;
    }
    void PrintNumber()
    {
        cout << "The Number is " << a << " , " << b << " and " << c << endl;
    }
};

int main()
{
    DATA Tushar(3, 4, 5);
    Tushar.PrintNumber();

    DATA Tushar1(3, 4);
    Tushar1.PrintNumber();

    DATA Tushar2(3);
    Tushar2.PrintNumber();
    return 0;
}
#include <iostream>
using namespace std;

class Larger
{
    int a, b;

public:
    void print_larger_Number(int a, int b)
    {
        if (a > b)
        {
            cout << "The Value of a is Greater than b";
        }
        else if (b > a)
        {
            cout << "The Value of b is Greater than a";
        }
        else
        {
            cout << "Both are Equal";
        }
    }
};

int main()
{
    int a, b;
    cout << "Enter the Value of a : ";
    cin >> a;
    cout << "Enter the Value of b : ";
    cin >> b;
    Larger obj;
    obj.print_larger_Number(a, b);
    return 0;
}
#include <iostream>
using namespace std;

int fac(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return (n * fac(n - 1));
    }
}

int main()
{
    int x;
    cout << "Enter the Number : ";
    cin >> x;
    cout << "Factorial of " << x << " is " << fac(x);
    return 0;
}
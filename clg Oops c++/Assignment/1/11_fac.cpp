#include <iostream>
#include <string>
using namespace std;

int fac(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return (n * fac(n - 1));
}

int main()
{
    int x;
    cout << "Enter the Number of factorial you want : ";
    cin >> x;
    cout << "The Factorial of " << x << " is " << fac(x) << endl;
    return 0;
}
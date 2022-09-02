#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, x = 0, y = 1, fib;
    cout << "Enter the nth Term : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << x;
        fib = x + y;
        x = y;
        y = fib;
    }
    cout << endl;

    return 0;
}
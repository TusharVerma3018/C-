#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the Number : ";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        cout << n << " is a Perfect Number";
    }
    else
    {
        cout << n << " is not a Perfect Number";
    }

    return 0;
}
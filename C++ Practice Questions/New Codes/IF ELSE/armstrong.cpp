#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
    int a, n, num = 0, temp, sum = 0;
    cout << "Enter the number : ";
    cin >> a;
    n = a;
    while (n != 0)
    {
        n /= 10;
        num++;
    }
    n = a;
    while (n != 0)
    {
        temp = n % 10;
        sum = sum + round(pow(temp, num));
        n /= 10;
    }
    if (sum == a)
        cout << a << " is an Armstrong number.";
    else
        cout << a << " is not an Armstrong number.";

    return 0;
}
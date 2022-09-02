#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int n, no, i = 0, rem, number = 0;
    cout << "Enter the Number : ";
    cin >> n;
    no = n;
    while (no != 0)
    {
        no /= 10;
        i++;
    }
    no = n;
    while (no != 0)
    {
        rem = no % 10;
        number = number + pow(rem, i);
        no /= 10;
    }
    if (number == n)
    {
        cout << n << " is a armstrong Number" << endl;
    }
    else
    {
        cout << n << " is not a armstrong Number" << endl;
    }

    return 0;
}
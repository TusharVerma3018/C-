#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    bool isprime = true;
    cout << "Enter the Number : ";
    cin >> n;
    if (n == 0 || n == 1)
    {
        isprime = false;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isprime = false;
                break;
            }
        }
    }
    if (isprime)
    {
        cout << "This is a prime Number" << endl;
    }
    else
    {
        cout << "This is not a prime Number" << endl;
    }
    return 0;
}

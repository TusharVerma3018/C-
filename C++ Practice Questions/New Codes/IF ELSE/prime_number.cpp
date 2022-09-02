// Prime Number

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a, isprime = true;
    cout << "Enter the number : ";
    cin >> a;
    if (a == 0 || a == 1)
    {
        isprime = false;
    }
    else
    {
        for (int i = 2; i <= a / 2; i++)
        {
            if (a % i == 0)
            {
                isprime = false;
                break;
            }
        }
    }
    if (isprime)
    {
        cout << a << " is a prime number";
    }
    else
    {
        cout << a << " is not a prime number";
    }

    return 0;
}


// Prime Number between 2 intervals

#include <iostream>
using namespace std;
int main()
{
    int low, high, i;
    bool isPrime = true;
    cout << "Enter two numbers: ";
    cin >> low >> high;
    cout << "\nPrime numbers between " << low << " and " << high << " are: " << endl;
    while (low < high)
    {
        isPrime = true;
        if (low == 0 || low == 1)
        {
            isPrime = false;
        }
        else
        {
            for (i = 2; i <= low / 2; ++i)
            {
                if (low % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime)
            cout << low << " ";
        ++low;
    }
    return 0;
}

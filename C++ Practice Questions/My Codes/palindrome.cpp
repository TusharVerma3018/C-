#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n1, n, rem, rev = 0;
    cout << "Enter the Number you want to check Palindrome : ";
    cin >> n1;
    n = n1;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (rev == n1)
    {
        cout << "The Number is palindrome" << endl;
    }
    else
    {
        cout << "The Number is not palindrome" << endl;
    }

    return 0;
}
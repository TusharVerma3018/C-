#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, no, rem, rev = 0;
    cout << "Enter the Number : ";
    cin >> n;
    no = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    cout << "Reverse Number : " << rev << endl;
    return 0;
}
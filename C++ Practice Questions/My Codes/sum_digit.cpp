#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, no, sum = 0, rem;
    cout << "Enter the Number : ";
    cin >> n;
    no = n;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n /= 10;
    }
    cout << "Sum : " << sum << endl;

    return 0;
}
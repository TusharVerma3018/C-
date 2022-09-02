#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, temp, no = 0;
    cout << "Enter the Number : ";
    cin >> n;
    while (n != 0)
    {
        temp = n % 10;
        no = no * 10 + temp;
        n /= 10;
    }
    cout << "Reverse Number : " << no << endl;
    return 0;
}
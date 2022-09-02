#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, fac = 1;
    cout << "Enter the number of factorial you want : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    cout << fac << endl;
    return 0;
}
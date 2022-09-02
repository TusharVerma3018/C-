#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number of factor You want : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << ", ";
        }
    }
    cout << "\b\b " << endl;

    return 0;
}
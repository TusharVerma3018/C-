//Using pow() function
/*
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
    int n1, n2, power;
    cout << "Enter the First Number : ";
    cin >> n1;
    cout << "Enter the Second Number : ";
    cin >> n2;
    power = pow(n1, n2);
    cout << power << endl;

    return 0;
}
*/

//without pow() function
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
    int n1, n2, power = 1;
    cout << "Enter the First Number : ";
    cin >> n1;
    cout << "Enter the Second Number : ";
    cin >> n2;
    cout << n1 << " ^ " << n2 << " = ";
    for (int i = 1; i <= n2; i++)
    {
        power = power * n1;
    }
    cout << power << endl;
    return 0;
}
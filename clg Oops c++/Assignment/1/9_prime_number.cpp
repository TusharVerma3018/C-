/*
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n1 = 1, n2 = 300, flag;
    cout << "Prime Number Between " << n1 << " and " << n2 << " : ";
    while (n1 < n2)
    {
        flag = 0;
        for (int i = 2; i <= (n1) / 2; i++)
        {
            if (n1 % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << n1 << ", "
                 << "\b";
        }
        n1++;
    }
    cout << "\b " << endl;
    return 0;
}
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n1 = 1, n2 = 300, i, j;
    cout << "Prime Number Between " << n1 << " and " << n2 << " : ";
    for (i = n1 + 1; i <= n2 - 1; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            cout << i << ", "
                 << "\b";
        }
    }
    cout << "\b " << endl;
    return 0;
}

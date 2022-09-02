// * * * * *
// * * * * *
// * * * * *
/*
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
*/
/*
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2 * n) - 1; j++)
        {
            if (i == 1 || i == 3 || j == 1 || j == 5)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
*/
/*
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
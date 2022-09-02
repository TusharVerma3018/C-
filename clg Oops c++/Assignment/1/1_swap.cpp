#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x = 2, y = 3;
    cout << "Value of X is : " << x << endl
         << "Value of Y is : " << y << endl;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "After Swaping" << endl;
    cout << "Value of X is : " << x << endl
         << "Value of Y is : " << y << endl;
    return 0;
}
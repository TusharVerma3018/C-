#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int x, y;
    cout << "Enter the value of x" << endl;
    cin >> x;
    cout << "Enter the value of y" << endl;
    cin >> y;
    cout << "The sum of " << x << " and " << y << " is " << sum(x, y) << endl;
    return 0;
}
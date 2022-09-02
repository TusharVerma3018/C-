#include <iostream>
using namespace std;

void swap_pointer(int *x, int *y) //Call by pointer . It will swap the Number
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swap_reference(int &x, int &y) //Call by reference . It will swap the Number
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 3;
    int y = 4;

    cout << "The value of x and y is " << x << " and " << y << endl;
    swap_pointer(&x, &y);
    cout << "The value of x and y is " << x << " and " << y << endl;

    cout << "The value of x and y is " << x << " and " << y << endl;
    swap_reference(x, y);
    cout << "The value of x and y is " << x << " and " << y << endl;

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 3, 3, 4};
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "The value at " << i << " is " << arr[i] << endl;
    // }

    int *p = arr;
    cout << "The value of *p is " << *p << endl;
    cout << "The value of *p+1 is " << *(p + 1) << endl;
    cout << "The value of *p+2 is " << *(p + 2) << endl;
    cout << "The value of *p+3 is " << *(p + 3) << endl;
    return 0;
}
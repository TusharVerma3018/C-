// WAP to find the maximum element in an array A of size n.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int size;
    cout << "Enter the Size of the array" << endl;
    cin >> size;
    int arr[size];
    int max;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of the Element " << i << " : ";
        cin >> arr[i];
    }
    max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        else
        {
        }
    }
    cout << "Maximum value of the matrix : " << max << endl;
    return 0;
}

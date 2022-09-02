//WAP to insert an element into an array.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int arr[5], index, val;
    cout << "Before insertion :" << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Enter the index number : ";
    cin >> index;
    cout << "Enter the number : ";
    cin >> val;

    for (int i = 4; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[index] = val;
    cout << "After insertion :" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int l;
    cout << "Enter the Array Size : ";
    cin >> l;
    int arr[l], item;
    cout << "Enter the Array :" << endl;
    for (int i = 0; i < l; i++)
    {
        cout << "Enter the  element at index : " << i << endl;
        cin >> arr[i];
    }
    for (int i = 0; i < l; i++)
    {
        cout << "The Element at " << i << " is " << arr[i] << endl;
    }

    cout << "Enter the Element to find : ";
    cin >> item;

    int lb = 0;
    int ub = l - 1;
    int beg = lb;
    int end = ub;
    int mid = (lb + ub) / 2;

    while (beg <= end && arr[mid] != item)
    {
        if (item < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
        mid = (beg + end) / 2;
    }

    if (arr[mid] == item)
    {
        cout << "Item found at : " << mid;
    }
    else
    {
        cout << "Item not found !....";
    }

    return 0;
}
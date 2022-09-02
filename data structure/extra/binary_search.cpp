#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Size of the array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the Element " << i << " : ";
        cin >> arr[i];
    }
    int item;
    cout << "Enter the element you want to Found : ";
    cin >> item;
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (item == arr[mid])
        {
            cout << "Item Found at " << mid << " Index";
            break;
        }
        else if (item > arr[mid])
        {
            low = mid + 1;
        }
        else if (item < arr[mid])
        {
            high = mid - 1;
        }
    }
    if (low > high)
    {
        cout << "Item Not Found!.....";
    }

    return 0;
}
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
    int j;
    for (j = 0; j < n; j++)
    {
        if (item == arr[j])
        {
            cout << "Element Found at : " << j << "Index";
            break;
        }
    }
    if (j == n)
    {
        cout << "Item not Found !......";
    }

    return 0;
}
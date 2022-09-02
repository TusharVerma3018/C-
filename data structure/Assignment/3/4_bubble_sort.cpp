#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Array Size : ";
    cin >> n;
    int arr[n], item;
    cout << "Enter the Array " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the  element at index : " << i << endl;
        cin >> arr[i];
    }
    cout << "Entered Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << endl;
    cout << "Soretd Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
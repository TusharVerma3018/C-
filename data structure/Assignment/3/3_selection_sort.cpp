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

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
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
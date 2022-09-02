//WAP to delete an element from an array.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int arr[5], val, index = 4;
    cout << "Before insertion :" << endl;
    for (int i = 0; i <= index; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= index; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Enter the number you want to remove : ";
    cin >> val;

    for (int i = 0; i <= index; i++)
    {
        if (arr[i] == val)
        {
            for (int j = i + 1; j <= index; j++)
            {
                arr[j - 1] = arr[j];
            }
            i--;
            index--;
        }
    }

    cout << "After deletion :" << endl;

    for (int i = 0; i <= index; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
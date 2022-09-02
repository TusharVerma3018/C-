#include <iostream>
#include <string>
using namespace std;
int main()
{
    int item;
    int arr[5];
    int index = 4;
    cout << "Enter The Array " << endl;
    for (int i = 0; i <= index; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= index; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter the Number you want to insert : ";
    cin >> item;
    for (int i = 0; i <= index; i++)
    {
        if (arr[i] == item)
        {
            for (int j = i + 1; j <= index; j++)
            {
                arr[j - 1] = arr[j];
            }
            i--;
            index--;
        }
    }
    for (int i = 0; i <= index; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
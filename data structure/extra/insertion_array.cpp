#include <iostream>
using namespace std;
int main()
{
    int item, index;
    int arr[6];
    cout << "Enter The Array " << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter the Number you want to insert : ";
    cin >> item;
    cout << "Enter the Index Number : ";
    cin >> index;
    for (int i = 4; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = item;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
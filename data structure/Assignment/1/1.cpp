// WAP for finding sum and average of numbers using array

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int size, sum = 0;
    float average;
    cout << "Enter the Size of the array" << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of the Element " << i << " : ";
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of the array : " << sum << endl;
    average = sum / size;
    cout << "Average of the array : " << average << endl;

    return 0;
}
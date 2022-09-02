// WAP to calculate sum of the element of two square matrix.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, j;
    int arr1[2][2];
    int arr2[2][2];
    int sum[2][2];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "The value of the Element arr[" << i << "] [" << j << "] :";
            cin >> arr1[i][j];
        }
    }

    cout << "1st Matrix is " << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << arr1[i][j] << "\t";
        }
        cout << endl;
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "The value of the Element arr[" << i << "] [" << j << "] :";
            cin >> arr2[i][j];
        }
    }

    cout << "2nd Matrix is " << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << arr2[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Sum of the 2 Matrix is" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
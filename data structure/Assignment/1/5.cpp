// WAP to print the sum of the diagonal element of the N *N square matrix.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int m, i, j, sum = 0;
    int arr[2][2];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "The value of the Element arr[" << i << "] [" << j << "] :";
            cin >> arr[i][j];
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
            else
            {
            }
        }
    }
    cout << "Sum of the diagonal element : " << sum << endl;
    return 0;
}
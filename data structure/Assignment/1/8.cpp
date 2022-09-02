// WAP to calculate product of the element of two square matrix

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, j, k, sum = 0;
    int arr1[2][2];
    int arr2[2][2];
    int product[2][2];

    cout << "1st Matrix is " << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "The value of the Element arr[" << i << "] [" << j << "] :";
            cin >> arr1[i][j];
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << arr1[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "2nd Matrix is " << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "The value of the Element arr[" << i << "] [" << j << "] :";
            cin >> arr2[i][j];
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << arr2[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Product of the 2 Matrix is" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                sum += arr1[i][k] * arr2[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << product[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

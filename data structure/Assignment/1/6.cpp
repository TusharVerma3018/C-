// WAP to print the transpose of m*n matrix.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, j, sum = 0;
    int arr[2][3];
    int trans[3][2];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "The value of the Element arr[" << i << "] [" << j << "] :";
            cin >> arr[i][j];
        }
    }

    cout << "Matrix is " << endl;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Transpose Matrix is " << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            trans[i][j] = arr[j][i];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << trans[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
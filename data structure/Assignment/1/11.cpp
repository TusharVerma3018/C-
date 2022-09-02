//WAP for comparison of two string without using strcmp() function.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int f;
    cout << "Enter the first string : ";
    string str1;
    cin >> str1;
    int n1 = str1.length();
    cout << "Enter the Second string : ";
    string str2;
    cin >> str2;
    int n2 = str2.length();

    for (int i = 0; i < n1 - 1; i++)
    {
        if (str1[i] != str2[i])
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
    {
        cout << "String are not same" << endl;
    }
    else
    {
        cout << "String is same" << endl;
    }

    return 0;
}
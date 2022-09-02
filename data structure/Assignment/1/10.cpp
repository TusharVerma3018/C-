//WAP a program to check a given string is palindrome or not .

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int n = str.length();
    int i;
    for (i = 0; i < n / 2; i++)
    {
        if (str[i] == str[n - i - 1])
        {
            continue;
        }
        else
        {
            cout << "This is not a palindrome string" << endl;
            break;
        }
    }
    if (i == n / 2)
    {
        cout << "This is a palindrome string" << endl;
    }

    return 0;
}
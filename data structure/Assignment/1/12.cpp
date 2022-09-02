//WAP to calculate the length of string without using library functions.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str[10];
    cout << "Enter the string : ";
    cin >> str;
    int sum = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        sum++;
    }
    cout << "The length of a string : " << sum << endl;

    return 0;
}
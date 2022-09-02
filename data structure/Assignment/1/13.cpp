//WAP to copy one string into another without using library function.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i;
    char str1[10];
    cout << "Enter the 1st String : ";
    cin >> str1;
    char str2[10];
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    cout << "Copied String :";
    cout << str2 << endl;

    return 0;
}

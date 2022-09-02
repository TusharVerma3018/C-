//WAP to concatenate two given string into one string without using library function.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str1[10], str2[10], str3[20];
    cout << "Enter the First String : ";
    cin >> str1;
    cout << "Enter the Second String : ";
    cin >> str2;
    int i = 0, j = 0;
    while (str1[i] != '\0')
    {
        str3[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0')
    {
        str3[i] = str2[j];
        i++;
        j++;
    }
    str3[i] = '\0';
    cout << "Concatenate String : " << str3 << endl;

    return 0;
}
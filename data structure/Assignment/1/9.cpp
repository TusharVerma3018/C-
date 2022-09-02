// WAP to find the reverse of a given string.

//using reverse function
/*
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1 = "Tushar";
    reverse(str1.begin(), str1.end());
    cout << str1 << endl;

    return 0;
}*/

//simple
/*
#include <iostream>
#include <string>
using namespace std;

void reverseStr(string &str)
{
    int n = str.length();
    cout << "Length of a string :" << n << endl;
    for (int i = 0; i < n / 2; i++)
    {
        swap(str[i], str[n - i - 1]);
    }
}

int main()
{
    string str = "Tushar";
    cout << str << endl;
    reverseStr(str);
    cout << str << endl;

    return 0;
}*/

//simple
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Tushar";
    cout << str << endl;
    int n = str.length();
    cout << "Length of a string :" << n << endl;
    cout << "Reverse String : ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << str[i];
    }
    cout << endl;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Month Number : ";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Month Name : January" << endl;
        cout << "Days : 31";
        break;
    case 2:
        cout << "Month Name : Febuary" << endl;
        cout << "Days : 28";
        break;
    case 3:
        cout << "Month Name : March" << endl;
        cout << "Days : 31";
        break;
    case 4:
        cout << "Month Name : April" << endl;
        cout << "Days : 30";
        break;
    case 5:
        cout << "Month Name : May" << endl;
        cout << "Days : 31";
        break;
    case 6:
        cout << "Month Name : June" << endl;
        cout << "Days : 30";
        break;
    case 7:
        cout << "Month Name : July" << endl;
        cout << "Days : 31";
        break;
    case 8:
        cout << "Month Name : August" << endl;
        cout << "Days : 31";
        break;
    case 9:
        cout << "Month Name : September" << endl;
        cout << "Days : 30";
        break;
    case 10:
        cout << "Month Name : October" << endl;
        cout << "Days : 31";
        break;
    case 11:
        cout << "Month Name : November" << endl;
        cout << "Days : 30";
        break;
    case 12:
        cout << "Month Name : December" << endl;
        cout << "Days : 31";
        break;
    default:
        cout << "Invalid Choice!.......";
        break;
    }
    return 0;
}
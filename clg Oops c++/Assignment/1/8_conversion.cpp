#include <iostream>
#include <string>
using namespace std;
int main()
{
    int km, n, m, ft, in, cm;
    cout << "Enter the Distance b/w 2 cities in KM : " << endl;
    cin >> km;
    cout << "Press 1 for Kilometer to Meter Conversion " << endl
         << "Press 2 for Kilometer to feet Conversion " << endl
         << "Press 3 for Kilometer to inches Conversion " << endl
         << "Press 4 for Kilometer to centimeter Conversion " << endl;
    cin >> n;

    switch (n)
    {
    case 1:
        m = 1000 * km;
        cout << "Distance in Meter : " << m << endl;
        break;
    case 2:
        ft = 3280 * km;
        cout << "Distance in Foot : " << ft << endl;
        break;
    case 3:
        in = 39370 * km;
        cout << "Distance in Inches : " << in << endl;
        break;
    case 4:
        cm = 100000 * km;
        cout << "Distance in Centi-Meter : " << cm << endl;
        break;
    default:
        cout << "Enter the valid choice  !..... " << endl;
        break;
    }

    return 0;
}
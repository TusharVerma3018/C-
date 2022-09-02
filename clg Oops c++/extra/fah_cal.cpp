#include <iostream>
using namespace std;

class Convert
{
    float a;

public:
    float Con(float a)
    {
        return ((a - 32) * 5 / 9);
    }
};

int main()
{
    float fah;
    cout << "Enter the temperature in fahrenheit : ";
    cin >> fah;
    Convert obj;
    cout << "Temperature in Celsius : " << obj.Con(fah);
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int l, b, h;
    cout << "Enter the Length : ";
    cin >> l;
    cout << "Enter the Base : ";
    cin >> b;
    cout << "Enter the Hypotenuse : ";
    cin >> h;

    if (l == b && b == h && h == l)
    {
        cout << "This is a Equilateral Triagnle " << endl;
        goto end;
    }
    else if (l == b || b == h || h == l)
    {
        cout << "This is a isosceles Triagnle " << endl;
        goto end;
    }
    else if (h * h == (l * l) + (b * b))
    {
        cout << "This is a Right Angle Triagnle " << endl;
        goto end;
    }
    else
    {
        cout << "This is scalene Triangle" << endl;
    }

end:
    return 0;
}
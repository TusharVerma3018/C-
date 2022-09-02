#include <iostream>
#include <string>
using namespace std;

class Volume
{
public:
    inline float mul(float x, float y)
    {
        return x * y;
    }
    inline float vol_cube(float x)
    {
        return x * x * x;
    }
};

int main()
{
    Volume obj1, obj2;
    int n;
    cout << "Press 1 for Multiplication" << endl;
    cout << "Press 2 for Cube volume" << endl;
    cout << "Press 3 for Exit" << endl;
    do
    {
        cout<<"Enter your choice : ";
        cin >> n;
        switch (n)
        {
        case 1:
            float x, y;
            cout << "Enter The Two Numbers For Multiplication" << endl;
            cin >> x;
            cin >> y;
            cout << "Product of " << x << " and " << y << " : " << obj1.mul(x, y) << endl;
            break;

        case 2:
            float z;
            cout << "Enter The Side of the cube " << endl;
            cin >> z;
            cout << "Volume of cube : " << obj2.vol_cube(z) << endl;
            break;

        case 3:
            cout << "You are Exiting !....";
            break;

        default:
            cout << "Invalid Choice ";
            break;
        }

    } while (n != 3);

    return 0;
}
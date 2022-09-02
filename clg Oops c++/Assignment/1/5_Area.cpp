#include <iostream>
#include <string>
using namespace std;

class Area
{
public:
    float area_circle(int r)
    {
        return (3.14 * r * r);
    }
    float circumference_circle(int r)
    {
        return (2 * 3.14 * r);
    }
    float volume_cylinder(int r, int h)
    {
        return (3.14 * r * r * h);
    }
    float surface_area_cylinder(int r, int h)
    {
        return (2 * 3.14 * r * h + 2 * 3.14 * r * r);
    }
};
int main()
{
    Area obj;
    cout << "Area of circle : " << obj.area_circle(3) << endl;
    cout << "Circumference of circle : " << obj.circumference_circle(3) << endl;
    cout << "Volume of cylinder : " << obj.volume_cylinder(3, 2) << endl;
    cout << "Surace Area of cylinder : " << obj.surface_area_cylinder(3, 2) << endl;

    return 0;
}
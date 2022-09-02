#include <iostream>
#include <math.h>
using namespace std;

class Point
{
    int x, y;
    friend void difference(Point, Point);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};

void difference(Point o1, Point o2)
{
    int x_difference = o2.x - o1.x;
    int y_difference = o2.y - o1.y;
    int dist = sqrt((x_difference) * (x_difference) + (y_difference) * (y_difference));
    cout << "Distance is : " << dist << " units";
}

// Create a function (Hint: Make it a friend function) which takes 2 point objects and computes the distance between those 2 points

// Use these examples to check your code:
// Distance between (1, 1) and (1, 1) is 0
// Distance between (0, 1) and (0, 6) is 5
// Distance between (1, 0) and (70, 0) is 69
int main()
{
    Point p(1, 0);
    p.displayPoint();

    Point q(70, 0);
    q.displayPoint();

    cout << endl;
    difference(p, q);

    cout << endl;
    return 0;
}

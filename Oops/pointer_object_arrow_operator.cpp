#include <iostream>
#include <string>
using namespace std;

class Data
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void getData()
    {
        cout << "The Value of a is " << a << endl
             << "The Value of b is " << b << endl;
    }
};

int main()
{
    Data *ptr = new Data;
    // (*ptr).setData(2, 3); //is exactly same as
    ptr->setData(2, 3);
    // (*ptr).getData(); //is exactly same as
    ptr->getData();

    return 0;
}
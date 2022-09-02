#include <iostream>
#include <string>
using namespace std;

class Data
{
private:
    int a;

public:
    // Data & setData(int a){
    void setData(int a)
    {
        this->a = a;
        // return *this;
    }
    void getData()
    {
        cout << "The Value of a is " << a << endl;
    }
};

int main()
{
    // This is a keywprd which is a pointer to the object which invokes the member function
    Data A;
    A.setData(2);
    A.getData();
    return 0;
}
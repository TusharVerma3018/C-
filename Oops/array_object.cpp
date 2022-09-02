#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int id;
    int salary;

public:
    void setdata()
    {
        cout << "Enter the id of the employee" << endl;
        cin >> id;
    }
    void getid()
    {
        cout << "The id of the employee is " << id << endl;
    }
};

int main()
{
    Employee arr[4];
    for (int i = 0; i < 4; i++)
    {
        arr[i].setdata();
        arr[i].getid();
    }

    return 0;
}
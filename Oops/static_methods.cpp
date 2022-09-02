#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int id;
    static int count;

public:
    void setData()
    {
        cout << "Enter the ID" << endl;
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "The ID of the Employee is " << id << " and this is employee number " << count << endl;
    }
    static void getCount()
    {
        cout << "The value of the count is " << count << endl;
    }
};

int Employee ::count; //by default value is 0

int main()
{
    Employee Tushar, Keshav, Harsht;

    // Tushar.id=1;
    // Tushar.count=1; //cannot do this as id and count are private

    Tushar.setData();
    Tushar.getData();
    Employee::getCount();

    Keshav.setData();
    Keshav.getData();
    Employee::getCount();

    Harsht.setData();
    Harsht.getData();
    Employee::getCount();

    return 0;
}
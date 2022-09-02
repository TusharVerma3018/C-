#include <iostream>
#include <string>

using namespace std;

class Base
{
protected:
    string name, sex;
    int roll;

public:
    Base()
    {
        cout << "Enter your Name : ";
        cin >> name;
        cout << "Enter your Sex : ";
        cin >> sex;
        cout << "Enter your Roll No : ";
        cin >> roll;
    }
    virtual void display() = 0;
};

class Derived : protected Base
{
protected:
    int height, weight;

public:
    Derived() : Base()
    {
        cout << "Enter your Height : ";
        cin >> height;
        cout << "Enter your Weight : ";
        cin >> weight;
    }
    void display()
    {
        cout << "Your Details " << endl;
        cout << "Name : " << name << endl
             << "Sex : " << sex << endl
             << "Roll No : " << roll << endl
             << "Height : " << height << endl
             << "Weight : " << weight << endl;
    }
};

int main()
{
    string name, sex;
    int roll, height, weight;
    int n;
    cout << "Enter the number of students : ";
    cin >> n;
    Derived std[n];

    cout << endl;
    
    for (int i = 0; i < n; i++)
    {
        cout << "Details Of Student " << i + 1 << endl;
        std[i].display();
    }

    return 0;
}
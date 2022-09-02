#include <iostream>
#include <string>
using namespace std;

class Base
{
protected:
    string name, sex;
    int roll;

public:
    Base(string n, string s, int r)
    {
        name = n;
        sex = s;
        roll = r;
    }
    virtual void display() = 0;
};

class Derived : protected Base
{
protected:
    int height, weight;

public:
    Derived(string n, string s, int r, int h, int w) : Base(n, s, r)
    {
        height = h;
        weight = w;
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
    Derived obj(name, sex, roll, height, weight);
    int n;
    do
    {
        cout << "Press 1 for Entering Details" << endl;
        cout << "Press 2 for Display Details" << endl;
        cout << "Press 3 for Exit" << endl;
        cout<<"Enter the choice : ";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Enter the Name : ";
            cin >> name;
            cout << "Enter the sex : ";
            cin >> sex;
            cout << "Enter the Roll No : ";
            cin >> roll;
            cout << "Enter the Height : ";
            cin >> height;
            cout << "Enter the Weight : ";
            cin >> weight;
            break;

        case 2:
            obj.display();

        default:
            cout << "Invalid choice !..." << endl;
            break;
        }

    } while (n != 3);

    return 0;
}
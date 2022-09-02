#include <iostream>
#include <string>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "The value of var_base is " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "The value of var_base is " << var_base << endl;
        cout << "The value of var_derived is " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass *Derived_class_pointer;
    DerivedClass obj_Derived;

    base_class_pointer = &obj_Derived; //pointing base class pointer to derived class
    base_class_pointer->var_base = 1;
    // base_class_pointer->var_derived = 2;  // will throw an error
    base_class_pointer->display();

    base_class_pointer->var_base = 100;
    base_class_pointer->display();

    Derived_class_pointer = &obj_Derived;
    Derived_class_pointer->var_base = 200;
    Derived_class_pointer->var_derived = 300;
    Derived_class_pointer->display();

    return 0;
}
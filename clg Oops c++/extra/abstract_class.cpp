#include<iostream>
#include<string>
using namespace std;

class A{
    public:
    virtual void show()=0;
};
class B:public A
{
    public:
    virtual void show(){
        cout<<"derived class";
    }
};
int main(){
    A *a;
    B b;
    a=&b;
    a->show();
    return 0;
}
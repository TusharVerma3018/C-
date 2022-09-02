#include<iostream>
#include<string>
using namespace std;

class Base
{
private:
    int x;
public:
    Base(){
        cout<<"Base class constructor Called"<<endl;
    }
    Base(int i){
        x=i;
    }
    void display(){
        cout<<"Base Count "<<x<<endl;
    }
};

class Derived
{
private:
    int y;
public:
    Derived(){
        cout<<"Derived class constructor Called "<<endl;
    }
    Derived(int j){
        y=j;
    }
    void show(){
        cout<<"Derived Count "<<y<<endl;
    }
};

int main(){
    Base b;
    Base b1(10);
    b1.display();

    Derived d;
    Derived d1(20);
    d1.show();                               // implicity

    Derived d2 = Derived (30);
    d2.show();                               // Explicity
    return 0;
}
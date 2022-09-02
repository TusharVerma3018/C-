#include<iostream>
#include<string>
using namespace std;

class A
{   
public:
    int x=5;
    friend class B; 
};

class B
{
public:
    void display(A &a){
        cout<<"value of x : "<<a.x;
    }
};


int main(){
    A a;
    B b;
    b.display(a);
    return 0;
}
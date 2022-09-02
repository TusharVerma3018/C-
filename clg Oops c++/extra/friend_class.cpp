#include<iostream>
#include<string>
using namespace std;

class A
{
private:
    int x=5;
public:
   friend class B;
};

class B
{
public:
    void display(A &a){
        cout<<"The value of x "<<a.x;
    }    
};


int main(){
    A a;
    B b;
    b.display(a);
    return 0;
}
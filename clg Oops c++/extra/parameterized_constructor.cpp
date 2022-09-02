#include<iostream>
#include<string>
using namespace std;

class A{
    private:
    int a,b;
    public:
    A(int x,int y){
        a=x;
        b=y;
    }
    int getA(){
        return a;
    }
    int getB(){
        return b;
    }
};

int main(){
    A obj(3,5);
    cout<<"Value of A : "<<obj.getA() <<endl;
    cout<<"Value of B : "<<obj.getB() <<endl;
    return 0;
}
#include<iostream>
#include<string>
using namespace std;

class A{
    int a,b;
    public:
    A(){
        cout<<"Base class";
    }
};

int main(){
    A obj;
    return 0;
}
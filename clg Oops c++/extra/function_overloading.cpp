#include<iostream>
#include<string>
using namespace std;

class A
{
public:
void display(int a){
    cout<<"Value of a : "<<a <<endl;
}
void display(double a){
    cout<<"Value of a : "<<a <<endl;
}
void display(int a,int b){
    cout<<"Value of a : "<<a <<" and " <<"b : "<<b <<endl;
} 
};

int main(){
    A obj;
    obj.display(2);
    obj.display(2.1);
    obj.display(2,3);
    return 0;
}
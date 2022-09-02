#include<iostream>
#include<string>
using namespace std;
int main(){
    int a=2;
    int b=3;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<" a : "<<a  <<endl ;
    cout<<" b : "<<b <<endl;

    // without using third variable
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<" a : "<<a  <<endl ;
    cout<<" b : "<<b;
    return 0;
}
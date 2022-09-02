#include<iostream>
#include<string>
using namespace std;
int main(){
    int a;
    cout<<"Enter the Number : ";
    cin>>a;
    int fac=1;
    for (int i = 1; i <=a; i++)
    {
        fac=fac*i;
    }
    cout<<"Factorial of "<< a <<" is " <<fac;
    return 0;
}
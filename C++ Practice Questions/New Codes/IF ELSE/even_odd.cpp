#include<iostream>
#include<string>
using namespace std;
int main(){
    int a;
    cout<<"Enter the Number : ";
    cin>>a;
    if (a%2==0)
    {
        cout<<a<<" is even Number";
    }
    else{
        cout<<a<<" is odd Number";
    }
    
    return 0;
}
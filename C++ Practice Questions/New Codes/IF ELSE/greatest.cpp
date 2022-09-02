#include<iostream>
#include<string>
using namespace std;
int main(){
    int a;
    cout<<"Enter the First Number : ";
    cin>>a;
    int b;
    cout<<"Enter the Second Number : ";
    cin>>b;
    int c;
    cout<<"Enter the Third Number : ";
    cin>>c;
    if (a>b && a>c)
    {
        cout<<a<<" is the Greatest Number"; 
    }
    else if (b>a && b>c)
    {
        cout<<b<<" is the Greatest Number"; 
    }
    else
    {
        cout<<c<<" is the Greatest Number"; 
    }
    
    
    
    return 0;
}
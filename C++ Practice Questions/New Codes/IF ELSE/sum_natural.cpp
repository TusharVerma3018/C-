#include<iostream>
#include<string>
using namespace std;
int main(){
    int a;
    cout<<"Enter the Number : ";
    cin>>a;
    int sum=0;
    for (int i = 1; i <= a; i++)
    {
        sum=sum+i;
    }
    cout<<"Sum : "<<sum;
    
    return 0;
}
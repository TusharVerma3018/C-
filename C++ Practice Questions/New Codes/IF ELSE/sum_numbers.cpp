#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : " ;
    cin>>n;
    int temp,sum=0;
    while (n!=0)
    {
        temp=n%10;
        sum=sum+temp;
        n/=10;
    }
    cout<<"Sum : "<<sum;
    return 0;
}
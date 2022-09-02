#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : " ;
    cin>>n;
    int temp,rev=0;
    while(n!=0){
        temp=n%10;
        rev=rev*10+temp;
        n/=10;
    }
    cout<<"After the Reverse Number : "<<rev;
    return 0;
}
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,n1;
    cout<<"Enter the Number : " ;
    cin>>n;
    n1=n;
    int temp,rev=0;
    while(n!=0){
        temp=n%10;
        rev=rev*10+temp;
        n/=10;
    }
    if (n1==rev)
    {
        cout<<"The Number "<<n1 <<" is palindrome number";
    }
    else
    {
        cout<<"The Number "<<n1 <<" is not  palindrome number";
    }
    
    return 0;
}
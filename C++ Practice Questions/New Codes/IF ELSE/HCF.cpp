#include<iostream>
#include<string>
using namespace std;
int main(){
    int n1,n2,hcf;
    cout<<"Enter 2 Numbers : " ;
    cin>>n1 >>n2;
    while (n2>n1)
    {
        int temp=n1;
        n1=n2;
        n2=temp;
    }
    for (int i = 1; i <= n2; i++)
    {
        if (n1%i==0 && n2%i==0)
        {
            hcf=i;
        }
        
    }
    cout<<"HCF of "<< n1 << " and "<<n2 <<" is "<<hcf;
    
    return 0;
}
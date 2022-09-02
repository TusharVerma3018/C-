#include<iostream>
#include<string>
using namespace std;
int main(){
    int a;
    cout<<"Enter The Number : ";
    cin>>a;
    cout<<"Factors of "<<a <<" are : ";
    for (int i = 1; i <= a; i++)
    {
        if (a%i==0)
        {
            cout<<i<<"  ";
        }
        
    }
    return 0;
}
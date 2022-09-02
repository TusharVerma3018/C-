                                            //using pow() function

#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the Base Value : ";
    cin>>a;
    cout<<"Enter the Exponent Value : ";
    cin>>b;
    cout<<"Value of "<<a <<" is to the power "<<b <<" is "<<pow(a,b);
    return 0;
} 

                                         //without using pow() function

#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
    int a,b,sum=1;
    cout<<"Enter the Base Value : ";
    cin>>a;
    cout<<"Enter the Exponent Value : ";
    cin>>b;
    for (int i = 1; i <=b; i++)
    {
        sum=sum*a;
    }
    cout<<"Value of "<<a <<" is to the power "<<b <<" is "<<sum;
    return 0;
}
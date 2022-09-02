#include<iostream>
#include<string>
using namespace std;
int main(){
    int t1=0,t2=1,nextterm,a;
    cout<<"Enter the Number : ";
    cin>>a;
    cout << "Fibonacci Series: " << t1 << "," << t2 << ",";
    nextterm = t1 + t2;
    while (nextterm<=a)
    {
        cout<<nextterm<<",";
        t1=t2;
        t2=nextterm;
        nextterm = t1 + t2;
    }
    
    return 0;
}
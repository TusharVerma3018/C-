#include<iostream>
#include<string>
using namespace std;

int count=0;
class A{
    public:
    A(){
        count ++;
        cout<<"No. of object Created "<<count <<endl;
    }
    ~A(){
        cout<<"No. of object deleted "<<count <<endl;
        count --;
    }
};

int main(){
    cout<<"Entered in main"<<endl;
    A a1,a2,a3,a4;
    {
    cout<<"Enter block 1 "<<endl;
    A a5;
    }
    {
    cout<<"Enter block 2 "<<endl;
    A a6;
    }
    cout<<"Re-Enter in main"<<endl;
    return 0;
}
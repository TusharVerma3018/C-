#include<iostream>
#include<string>
using namespace std;

class Time
{
private:
    int h,m,s;
public:
    void Set_time(int t){
        h=t/3600;
        t=t%3600;
        m=t/60;
        t=t%60;
        s=t;
    }
    void Get_time(){
        cout<<"Time in HH::MM::SS is "<<h <<"::"<<m <<"::" <<s <<endl;
    }
};


int main(){
    int t;
    cout<<"Enter Time (in Second)" <<endl;
    cin>>t;
    Time New;
    New.Set_time(t);
    New.Get_time();
    return 0;
}
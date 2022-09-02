#include<iostream>
#include<string>
using namespace std;

class unary
{
private:
    int a=10,b=20,c=30;
public:
    void set(){
        cout<<a <<endl;
        cout<<b <<endl;
        cout<<c <<endl;
    }
    void friend operator-(unary &x){
        x.a=-x.a;
        x.b=-x.b;
        x.c=-x.c;
    };
};

int main(){
    unary obj;
    cout<<"Before overloading "<<endl;
    obj.set();

    cout<<"After overloading "<<endl;
    -obj;
    obj.set();
    return 0;
}
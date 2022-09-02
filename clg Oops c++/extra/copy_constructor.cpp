#include<iostream>
#include<string>
using namespace std;

class A{
    private:
    int id;
    public:
    A(){
        
    }
    A(int i){
        id=i;
    }
    A(A &i){
        id=i.id;
    }
    void show(){
        cout<<id;
    }
};

int main(){
    A a(50);
    a.show(); 
    cout<<endl;
    A b(a);
    b.show(); 
    cout<<endl;
    A c=a;
    c.show();
    cout<<endl;
    A d;
    d=a;
    d.show();
    return 0;
}
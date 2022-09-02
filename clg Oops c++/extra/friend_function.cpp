#include<iostream>
#include<string>
using namespace std;

class friend_function
{
protected:
    int x,y;
public:
    void set(int a,int b){
        x=a;
        y=b;
    }
    friend int mean(friend_function &obj);
};
int mean(friend_function &obj){
    return int (obj.x+obj.y)/2;
}


int main(){
    friend_function obj;
    obj.set(3,5);
    cout<<"Mean of 3 and 5 : "<<mean(obj);
    return 0;
}
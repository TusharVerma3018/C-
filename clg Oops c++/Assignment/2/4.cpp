#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
    int id;
public:
    Student(){               //default Constructor
        id=0;
    }              
    Student(int i){          //Parameterised Constructor
        id=i;
    }
    Student(Student &obj){   //copy constructor
        cout<<"Copy Constructor Called !...";
        id=obj.id;
    }
    void display(){
        cout << "The ID number is " << id << endl;
    }
};

int main(){
    Student x,y(4);
    x.display();
    y.display();
    Student z=y;
    z.display();
    Student z1(y);
    z1.display();
    return 0;
}
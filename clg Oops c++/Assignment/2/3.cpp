#include<iostream>
#include<string>
using namespace std;
#define Max 10

class Student
{
private:
    char name[100];
    int roll;
    int age;
    char gender[100];
    int height;
    int weight;
public:
    void setData(){
        cout<<"Enter the Name : "; 
        cin>>name;
        cout<<"Enter the roll number : "; 
        cin>>roll;
        cout<<"Enter the Age : "; 
        cin>>age;
        cout<<"Enter the gender : "; 
        cin>>gender;
        cout<<"Enter the Height : "; 
        cin>>height;
        cout<<"Enter the Weight : "; 
        cin>>weight;
    }
    void getData(){
        cout<<"Name : "<<name ;
        cout<<" Roll number : " <<roll ;
        cout<<" Age : " <<age ;
        cout<<" gender : " <<gender;
        cout<<" Height : " <<height ;
        cout<<" Weight : " <<weight ;
        cout<<endl;
    }
};

int main(){
    Student std[Max];
    int n;
    cout<<"Enter the number of students : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter Details Of Student " <<i+1 <<endl;
        std[i].setData();
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Details Of Student " <<i+1 <<endl;
        std[i].getData();
    }
    return 0;
}
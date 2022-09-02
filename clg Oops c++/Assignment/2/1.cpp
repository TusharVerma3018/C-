#include<iostream>
#include<string>
using namespace std;

class Details
{
private:
    int date,month,year;
public:
    void set_data(){
        cout<<"Enter the Date : ";
        cin>>date;
        cout<<"Enter the Month : ";
        cin>>month;
        cout<<"Enter the Year : ";
        cin>>year;
    }
    void get_data(){
        cout<<"Date - Month - Year : "<<date <<" - " <<month <<" - " <<year <<endl;
    }
};

int main(){
    int n;
    cout<<"Enter the Number of Element : ";
    cin>>n;
    Details obj[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the Details Element Number " <<i+1 <<endl;
        obj[i].set_data();
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Details of Element Number " <<i+1 <<endl;
        obj[i].get_data();
    }
    
    return 0;
}
#include<iostream>
#include<string>
using namespace std;
int main(){
    int l;
    cout<<"Enter the Array Size : ";
    cin>>l;
    int arr[l],loc,j=0,item;
    cout<<"Enter the Array :"<<endl;
    for (int i = 0; i < l; i++)
    {
        cout<<"Enter the  element at index : "<<i <<endl;
        cin>>arr[i];
    }
    for (int i = 0; i < l; i++)
    {
        cout<<"The Element at "<<i <<" is " <<arr[i] <<endl;
    }
    
    cout<<"Enter the Element to find : ";
    cin>>item;

    for ( loc = 0; loc < l; loc++)
    {
        if (arr[loc]==item)
        {
            j=1;
            break;
        }
        
    }
    if (j==1)
    {
        cout<<"Item found at Location no. : "<<loc;
    }
    else
    {
        cout<<"Item not found !...";
    }
    

    return 0;
}
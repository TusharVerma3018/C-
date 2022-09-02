#include<iostream>
#include<string>
using namespace std;
int main(){
    char input;
    cout<<"Enter the Character : ";
    cin>>input;
    if (input=='a' || input=='e' || input=='i' || input=='o' || input=='u')
    {
        cout<<input<<" is vowel ";
    }
    else{
        cout<<input<<" is consonant ";
    }
    return 0;
}
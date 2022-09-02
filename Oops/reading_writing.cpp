#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    // connecting our file with hout stream
    ofstream hout("sample60.txt");

    // creating a name string variable and filing it with string entered by the user
    string name;
    cout << "Enter your name : ";
    cin >> name;

    //writing a string to the file
    hout << name + " is my name";

    //disconnecting our file
    hout.close();

    // connecting our file with hout stream
    ifstream hin("sample60.txt");

    //creating a content string variable and filling it withstring present there in the text format
    string content;
    hin >> content;
    cout << "The content of the file is : " << content;

    //disconnecting our file
    hin.close();
    return 0;
}
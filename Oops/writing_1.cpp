#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    //declaring an object of the type ofstream
    ofstream out;

    //connecting the object out to the text file using member function open()
    out.open("sample60.txt");

    //writing to the file
    out << "This is me" << endl
        << "This is also me";

    //closing the file connection
    out.close();

    return 0;
}
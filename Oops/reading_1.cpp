#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    //decleration an object to the type ifstream
    ifstream in;

    //declering string variable st
    string st;

    //opening the text file into in
    in.open("sample60.txt");

    //giving output the string lines by storing in st until the file reaches the end of it.
    while (in.eof() == 0)
    {
        //using getline to fill the whole lines in st
        getline(in, st);
        cout << st << endl;
    }

    return 0;
}
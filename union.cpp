#include <iostream>
using namespace std;

union student
{
    char name;
    int roll_no;
    int marks;
};

int main()
{
    union student Tushar, Keshav;
    Tushar.name = 'T';
    // Tushar.roll_no = 1;
    // Tushar.marks = 100;
    // Keshav.name = 'K';
    // Keshav.roll_no = 2;
    // Keshav.marks = 99;
    cout << Tushar.name << endl;
    // cout << Tushar.roll_no << endl;
    // cout << Tushar.marks << endl;
    // cout << Keshav.name << endl;
    // cout << Keshav.roll_no << endl;
    // cout << Keshav.marks << endl;

    return 0;
}
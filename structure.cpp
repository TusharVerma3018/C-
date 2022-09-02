#include <iostream>
using namespace std;

struct student
{
    char name;
    int roll_no;
    int marks;
};

int main()
{
    struct student Tushar, Keshav;
    Tushar.name = 'T';
    Tushar.roll_no = 1;
    Tushar.marks = 100;
    Keshav.name = 'K';
    Keshav.roll_no = 2;
    Keshav.marks = 99;
    cout << Tushar.name << endl;
    cout << Tushar.roll_no << endl;
    cout << Tushar.marks << endl;
    cout << Keshav.name << endl;
    cout << Keshav.roll_no << endl;
    cout << Keshav.marks << endl;

    return 0;
}

// typedef struct student          // typedef uses for short the name
// {
//     char name;
//     int roll_no;
//     int marks;
// } info;

// int main()
// {
//     info Tushar, Keshav;
//     Tushar.name = 'T';
//     Tushar.roll_no = 1;
//     Tushar.marks = 100;
//     Keshav.name = 'K';
//     Keshav.roll_no = 2;
//     Keshav.marks = 99;
//     cout << Tushar.name << endl;
//     cout << Tushar.roll_no << endl;
//     cout << Tushar.marks << endl;
//     cout << Keshav.name << endl;
//     cout << Keshav.roll_no << endl;
//     cout << Keshav.marks << endl;

//     return 0;
// }
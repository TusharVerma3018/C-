#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the First Number:";  /* '<<' is an insertion Operator */
    cin >> a;                           /* '>>' is an Extraction Operator */
    cout << "Enter the Second Number:"; /* '<<' is an insertion Operator */
    cin >> b;                           /* '>>' is an Extraction Operator */
    cout << "Sum:" << a + b << endl;    /* 'endl' is for new line like '\n' */
    return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n1, n2, temp, HCF;
    cout << "Enter The First Number : ";
    cin >> n1;
    cout << "Enter The Second Number : ";
    cin >> n2;
    if (n2 > n1)
    {
        temp = n2;
        n2 = n1;
        n1 = temp;
    }
    for (int i = 1; i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            HCF = i;
        }
    }
    cout << "H.C.F : " << HCF << endl;

    return 0;
}

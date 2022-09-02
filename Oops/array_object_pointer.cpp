#include <iostream>
#include <string>
using namespace std;

class ShopItem
{
private:
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "The Value of id is " << id << endl
             << "The Value of price is " << price << endl;
    }
};

int main()
{
    int size = 3;
    ShopItem *ptr = new ShopItem[size];
    int p, i;
    float q;
    ShopItem *ptrTemp = ptr;

    for (i = 0; i < size; i++)
    {
        cout << "Enter the value of id and price of the item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item Number " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}
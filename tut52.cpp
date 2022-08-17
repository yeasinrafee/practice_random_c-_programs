#include <iostream>
using namespace std;

class ShopItem
{
    int id, price;

public:
    void setData(int a, int b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "The id number of the Item is " << id << endl;
        cout << "The Price of the Item is " << price << endl;
    }
};

int main()
{
    int size = 3;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;

    int x, y;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter your id and price for item no. " << i + 1 << endl;
        cin >> x >> y;
        ptr->setData(x, y);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}
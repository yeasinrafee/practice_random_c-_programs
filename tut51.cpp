#include <iostream>
using namespace std;

class Complex
{
    int data1, data2;

public:
    void setData(int a, int b)
    {
        data1 = a;
        data2 = b;
    }
    void getData()
    {
        cout << "The value of Data 1 is " << data1 << endl;
        cout << "The value of Data 2 is " << data2 << endl;
    }
};

int main()
{
    // Complex c;
    // Complex *ptr = &c;
    Complex *ptr = new Complex;

    // (*ptr).setData(45, 98);
    ptr->setData(34, 67);

    // (*ptr).getData();
    ptr->getData();

    //Array of Objects:
    Complex *ptr1 = new Complex[4];
    ptr1->setData(23, 12);
    ptr1->getData();

    return 0;
}
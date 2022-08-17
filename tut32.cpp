#include <iostream>
using namespace std;

class Simple
{
    int data1, data2, data3;

public:
    Simple(int a, int b = 6, int c = 9)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void display();
};

void Simple::display()
{
    cout << "data 1 is " << data1 << " data 2 is " << data2 << " data 3 is " << data3 << endl;
}

int main()
{
    Simple o1(3, 4, 5);
    o1.display();

    Simple o2(7, 8);
    o2.display();

    Simple o3(5);
    o3.display();

    return 0;
}
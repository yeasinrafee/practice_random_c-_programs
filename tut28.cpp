#include <iostream>
using namespace std;

class Y;
class X
{
    int data;
    friend void add(X, Y);

public:
    void setValue(int value)
    {
        data = value;
    }
};

class Y
{
    int num;
    friend void add(X, Y);

public:
    void setValue(int value)
    {
        num = value;
    }
};

void add(X o1, Y o2)
{
    cout << "Sum of the two object's values are " << o1.data + o2.num << endl;
}

int main()
{
    X o1;
    Y o2;
    o1.setValue(4);
    o2.setValue(6);
    add(o1, o2);

    return 0;
}
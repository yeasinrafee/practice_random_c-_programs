#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    // Number() {}
    Number()
    {
        a = 0;
    }
    Number(int x)
    {
        a = x;
    }

    Number(Number &obj)
    {
        cout << "Copy constructor has been called." << endl;
        a = obj.a;
    }
    void showNumber()
    {
        cout << "Your number is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45);
    x.showNumber();
    y.showNumber();
    z.showNumber();
    Number z1(z);
    z1.showNumber();
    return 0;
}
#include <iostream>
using namespace std;

class Num2;
class Num1
{
    int a;
    friend void exchange(Num1 &, Num2 &);

public:
    void setNum(int x)
    {
        a = x;
    }
    void displayNum1(void)
    {
        cout << a << endl;
    }
};

class Num2
{
    int b;
    friend void exchange(Num1 &, Num2 &);

public:
    void setNum2(int y)
    {
        b = y;
    }
    void displayNum2(void)
    {
        cout << b << endl;
    }
};

void exchange(Num1 &x1, Num2 &y1)
{
    int temp = x1.a;
    x1.a = y1.b;
    y1.b = temp;
}

int main()
{
    Num1 o1;
    Num2 o2;

    o1.setNum(64);
    o2.setNum2(89);

    exchange(o1, o2);

    cout << "The value of object 1 is ";
    o1.displayNum1();
    cout << "The value of object 2 is ";
    o2.displayNum2();
    return 0;
}
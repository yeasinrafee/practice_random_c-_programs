#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setNumber(int x, int y)
    {
        a = x;
        b = y;
    }
    friend complex sumCopmlex(complex o1, complex o2);
    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex sumCopmlex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setNumber(3, 4);
    c1.printNumber();

    c2.setNumber(4, 5);
    c2.printNumber();

    sum = sumCopmlex(c1, c2);
    sum.printNumber();

    return 0;
}
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void);
    void printNumber(void)
    {
        cout << "The sum is " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(void)
{
    a = 20;
    b = 5;
}

int main()
{
    Complex c1;
    c1.printNumber();
    return 0;
}
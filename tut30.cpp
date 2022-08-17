#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);
    void printNumber(void)
    {
        cout << "The sum is " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    Complex a(4, 5);
    a.printNumber();

    Complex b = Complex(7, 8);
    b.printNumber();
    return 0;
}
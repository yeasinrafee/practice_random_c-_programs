#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    void displayComplex(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex o1(4, 5);
    o1.displayComplex();

    Complex o2(3);
    o2.displayComplex();

    Complex o3;
    o3.displayComplex();
    return 0;
}
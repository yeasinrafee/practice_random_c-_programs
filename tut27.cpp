#include <iostream>
using namespace std;

class complex;

class calculator
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(complex, complex);
    int sumComComplex(complex, complex);
};

class complex
{
    int a, b;
    // Individually declaring function as friend:
    // friend int calculator ::sumRealComplex(complex, complex);
    // friend int calculator ::sumComComplex(complex, complex);

    //Aliter: Declaring the entire calcularor class as friend:
    friend class calculator;

public:
    void setNumber(int x, int y)
    {
        a = x;
        b = y;
    }
    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumComComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setNumber(3, 4);
    o2.setNumber(7, 8);
    calculator calc;
    int result = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << result << endl;
    int result2 = calc.sumComComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << result2 << endl;
    return 0;
}
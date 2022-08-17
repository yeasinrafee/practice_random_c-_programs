#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int a)
    {
        data1 = a;
        cout << "Base1 constructor called." << endl;
    }
    void printData1()
    {
        cout << "The value of Data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int b)
    {
        data2 = b;
        cout << "Base2 constructor called." << endl;
    }
    void printData2()
    {
        cout << "The value of Data2 is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derivedData1, derivedData2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derivedData1 = c;
        derivedData2 = d;
        cout << "Derived constractor called." << endl;
    }
    void printData()
    {
        cout << "The value of Derived Data 1 is " << derivedData1 << endl;
        cout << "The value of Derived Data 2 is " << derivedData2 << endl;
    }
};

int main()
{
    Derived rafee(1, 2, 3, 4);
    rafee.printData1();
    rafee.printData2();
    rafee.printData();
    return 0;
}
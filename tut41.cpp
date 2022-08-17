#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void inputBase1(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void inputBase2(int b)
    {
        base2int = b;
    }
};

class Derived : public Base1, public Base2
{
public:
    void showBases()
    {
        cout << "The value of Base 1 is " << base1int << endl;
        cout << "The value of Base 1 is " << base2int << endl;
        cout << "The value of Base 1 + Base 2 is " << base1int + base2int << endl;
    }
};

int main()
{
    Derived rafee;
    rafee.inputBase1(20);
    rafee.inputBase2(50);
    rafee.showBases();
    return 0;
}
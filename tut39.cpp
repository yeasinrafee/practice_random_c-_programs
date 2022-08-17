#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};

class derived : protected Base
{
};

int main()
{
    Base b;
    derived d;
    // cout << d.a << endl;
    return 0;
}
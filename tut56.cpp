#include <iostream>
using namespace std;

class BaseClass
{
public:
    int varBase = 1;
    virtual void display()
    {
        cout << "1. Displaying Base variable varBase " << varBase << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int varDerived = 2;
    void display()
    {
        cout << "2. Displaying Base variable varBase " << varBase << endl;
        cout << "2. Displaying Derived variable varDerived " << varDerived << endl;
    }
};

int main()
{
    BaseClass *BaseClassPointer;
    DerivedClass objDerived;

    BaseClassPointer = &objDerived;
    BaseClassPointer->display();

    return 0;
}
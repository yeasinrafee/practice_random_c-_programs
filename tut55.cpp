#include <iostream>
using namespace std;

class BaseClass
{
public:
    int varBase;
    void display()
    {
        cout << "Displaying Base variable varBase " << varBase << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int varDerived;
    void display()
    {
        cout << "Displaying Base variable varBase " << varBase << endl;
        cout << "Displaying Derived variable varDerived " << varDerived << endl;
    }
};

int main()
{
    BaseClass *BaseClassPointer;
    BaseClass objBase;
    DerivedClass objDerived;

    BaseClassPointer = &objDerived;
    BaseClassPointer->varBase = 34;
    BaseClassPointer->display();

    DerivedClass *derivedClassPointer;
    derivedClassPointer = &objDerived;
    derivedClassPointer->varDerived = 98;
    derivedClassPointer->display();

    return 0;
}
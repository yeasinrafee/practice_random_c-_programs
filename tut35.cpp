#include <iostream>
using namespace std;

class myFirstClass
{
public:
    myFirstClass()
    {
        cout << "Constructor has been called" << endl;
    }
    ~myFirstClass()
    {
        cout << "Destructor has been called" << endl;
    }

    void display()
    {
        cout << "display has been called" << endl;
    }
};

int main()
{
    myFirstClass ob;
    ob.display();

    return 0;
}
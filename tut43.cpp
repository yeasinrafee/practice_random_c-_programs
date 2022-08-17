#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "Hello, How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Hi, kemon asos?" << endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    void greet()
    {
        Base2 ::greet();
    }
};

class B
{
public:
    void say()
    {
        cout << "Hello world!" << endl;
    }
};

class D : public B
{
public:
    // void say()
    // {
    //     cout << "Hello my Homeis!!" << endl;
    // }
};

int main()
{
    //Ambiguity 1:
    // Base1 obj1;
    // obj1.greet();
    // Base2 obj2;
    // obj2.greet();
    // Derived d;
    // d.greet();

    // Ambiguity 2:
    B ob;
    ob.say();
    D ob1;
    ob1.say();

    return 0;
}
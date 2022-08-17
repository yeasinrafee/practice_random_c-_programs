#include <iostream>
using namespace std;

class Test
{
    int a, b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i + j)
    // Test(int i, int j) : a(i), b(2 + j)
    Test(int i, int j) : a(i), b(a + j)
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

int main()
{
    Test t(4, 6);
    return 0;
}
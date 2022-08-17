#include <iostream>
using namespace std;

template <typename T>
void Swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 5;
    int b = 9;
    cout << a << " -- " << b << endl;
    Swap(a, b);
    cout << a << " -- " << b << endl;

    char c = 'c', d = 'd';
    cout << c << " -- " << d << endl;
    Swap(c, d);
    cout << c << " -- " << d << endl;

    return 0;
}
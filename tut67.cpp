#include <iostream>
using namespace std;

template <class T1, class T2>
float average(T1 a, T2 b)
{
    T1 x = a;
    T2 y = b;
    float avg = (x + y) / 2;
    return avg;
}

int main()
{
    float z;
    z = average(6, 4);
    cout << "The average is " << z << endl;

    return 0;
}
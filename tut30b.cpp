#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint(void)
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
};

int main()
{
    Point p1(2, 3);
    p1.displayPoint();

    Point q1(4, 5);
    q1.displayPoint();
    return 0;
}
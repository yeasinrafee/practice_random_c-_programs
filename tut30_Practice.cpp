//Create a function (Hints: Make it a friend function) which takes 2 point objects and comtupes the distance between those points.

#include <iostream>
#include <cmath>
using namespace std;

class pointDis
{
    int a, b;
    friend void distance(pointDis, pointDis);

public:
    pointDis(int x, int y)
    {
        a = x;
        b = y;
    }
};

void distance(pointDis o1, pointDis o2)
{
    int xDim = o2.a - o1.a;
    int yDim = o2.b - o1.b;
    double result = sqrt((xDim) * (xDim) + (yDim) * (yDim));
    cout << "The distance betweet those point is " << result << endl;
}
int main()
{
    pointDis o1(1, 0);
    pointDis o2(70, 0);
    distance(o1, o2);
    return 0;
}
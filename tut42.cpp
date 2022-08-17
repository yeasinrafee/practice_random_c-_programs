#include <iostream>
using namespace std;

class SimpleCalculator
{
protected:
    float num1, num2;
    char operator1;

public:
    SimpleCalculator(float a, float b)
    {
        num1 = a;
        num2 = b;
        switch (operator1)
        {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            cout << num1 / num2;
            break;

        default:
            break;
        }
    }
};

int main()
{
    float n1, n2;

    SimpleCalculator rafee();
    return 0;
}
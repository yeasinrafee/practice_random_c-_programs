#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    int num1, num2;

public:
    void set_data_simple(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void perform_operation_simple()
    {
        cout << "The value of a + b is " << num1 + num2 << endl;
        cout << "The value of a - b is " << num1 - num2 << endl;
        cout << "The value of a * b is " << num1 * num2 << endl;
        cout << "The value of a / b is " << float(num1 / num2) << endl;
    }
};

class ScintificCalculator
{
    int num1, num2;

public:
    void set_data_scintific(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    void perform_operation_scintific()
    {
        cout << "The value of cos(a) is " << cos(num1) << endl;
        cout << "The value of sin(a) is " << sin(num1) << endl;
        cout << "The value of tan(a) is " << tan(num1) << endl;
        cout << "The value of pow(a^b) is " << pow(num1, num2) << endl;
    }
};

class hybritCalculator : public SimpleCalculator, public ScintificCalculator
{
};

int main()
{
    int a, b;
    cout << "Enter a" << endl;
    cin >> a;
    cout << "Enter b" << endl;
    cin >> b;

    hybritCalculator rafee;
    rafee.set_data_simple(a, b);
    rafee.perform_operation_simple();
    rafee.set_data_scintific(a, b);
    rafee.perform_operation_scintific();

    return 0;
}
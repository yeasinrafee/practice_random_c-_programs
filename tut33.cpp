#include <iostream>
using namespace std;

class BankDeposite
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposite(){};
    BankDeposite(int p, int y, float r);
    BankDeposite(int p, int y, int r);
    void showDeposite();
};

BankDeposite ::BankDeposite(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate);
    }
}

BankDeposite ::BankDeposite(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate);
    }
}

void BankDeposite ::showDeposite()
{
    cout << "Your Principal amount was " << principal << ". Return value after " << years << " is " << returnValue << "." << endl;
}

int main()
{
    BankDeposite bd1, bd2, bd3;
    int p, y, R;
    float r;

    cout << "Enter the value of p, y, r" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposite(p, y, r);
    bd1.showDeposite();

    cout << "Enter the value of p, y, R" << endl;
    cin >> p >> y >> R;
    bd1 = BankDeposite(p, y, R);
    bd1.showDeposite();
    return 0;
}
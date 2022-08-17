#include <iostream>
using namespace std;

int main()
{

    float cgpa;
    cout << "Enter your cgpa: " << endl;
    cin >> cgpa;
    if (cgpa < 2.00)
    {
        cout << "You have no waiver." << endl;
    }
    else
    {
        char gendar;
        cout << "Enter your gendar: " << endl;
        cin >> gendar;
        if (gendar == 'f')
        {
            cout << "You will get 50%+15% waiver." << endl;
        }
        else
        {
            cout << "You will get 50% waiver.";
        }
    }
    return 0;
}
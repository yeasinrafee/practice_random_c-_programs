#include <iostream>
using namespace std;

int main()
{
    float cgpa;
    int age;
    cout << "Enter your CGPA: " << endl;
    cin >> cgpa;
    if (cgpa > 3.5)
    {
        cout << "Enter your age: " << endl;
        cin >> age;
        if (age >= 30)
        {
            cout << "You are no eligible for the job" << endl;
        }
        else
        {
            cout << "Your are eligible for the job" << endl;
        }
    }
    else
    {
        cout << "You are not eligible for the job." << endl;
    }

    return 0;
}
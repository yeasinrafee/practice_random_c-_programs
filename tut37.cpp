#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 69.0;
    }
    void displayId()
    {
        cout << id << endl;
    }
    Employee() {}
};

class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee yeasin(101), rafee(102);
    yeasin.displayId();
    cout << yeasin.salary << endl;
    rafee.displayId();
    cout << rafee.salary << endl;

    Programmer skillF(103);
    cout << skillF.languageCode << endl;
    // skillF.getData();
    cout << skillF.id << endl;
    return 0;
}
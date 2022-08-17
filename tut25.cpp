#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        cout << "Enter your ID of your employee." << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The ID of your employee is " << id << endl;
    }
};

int main()
{
    // employee rafee, yeasin, shakil;
    // rafee.setId();
    // rafee.getId();

    int n;
    cout << "Enter your total employee number: " << endl;
    cin >> n;
    employee rafTech[n];
    for (int i = 0; i < n; i++)
    {
        rafTech[i].setId();
        rafTech[i].getId();
    }
    return 0;
}
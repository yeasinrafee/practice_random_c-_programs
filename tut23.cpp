#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setId(void)
    {
        cout << "Enter Id number: " << endl;
        cin >> id;
    };
    void getId(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count + 1 << endl;
        count++;
    };

    static void counter(void)
    {
        cout << "The count number of the employee is " << count << endl;
    }
};

int employee ::count;
int main()
{
    employee rafee;
    rafee.setId();
    rafee.getId();
    employee ::counter();

    employee shakil;
    shakil.setId();
    shakil.getId();
    employee ::counter();
    return 0;
}
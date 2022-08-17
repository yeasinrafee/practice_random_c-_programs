#include <iostream>
using namespace std;

struct employee
{
    string name;
    int id;
};

int main()
{
    employee rafee;
    rafee.id = 101;
    rafee.name = "Yeasin";
    cout << rafee.name << endl;
    cout << rafee.id << endl;
    return 0;
}
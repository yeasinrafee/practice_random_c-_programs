#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["Yeasin"] = 99;
    marksMap["Arafat"] = 73;
    marksMap["Rafee"] = 100;

    marksMap.insert({{"Alif", 89}, {"Mamun", 90}});

    map<string, int>::iterator itr;
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout << (*itr).first << "  " << (*itr).second << endl;
    }
    return 0;
}
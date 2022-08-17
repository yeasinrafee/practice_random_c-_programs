#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // ofstream file("tut61.txt");
    // string name;
    // cout << "Enter your name: " << endl;
    // cin >> name;
    // file << "My name is " << name;
    // file.close();

    ifstream file("tut61.txt");
    string name;
    // file >> name;
    getline(file, name);
    cout << "The content of the file is: " << name << endl;

    return 0;
}
#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

int main()
{
    // string st = "My name is Yeasin Rafee, Leonidas";
    // ofstream file("who am i.txt");
    // file << st;

    string st2;
    ifstream file("who am i.txt");
    getline(file, st2);
    file.close();
    cout << st2;
    return 0;
}
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // ofstream file;
    // file.open("tut60.txt");
    // file << "Hello It's me.\n";
    // file << "The king Yeasin Rafee\n";
    // file << "Wanna be a warrior or king like king Leonidas :)";
    // file.close();

    string st;
    ifstream file;
    file.open("tut60.txt");
    // file >> st;
    // cout << st;
    while (file.eof() == 0)
    {
        getline(file, st);
        cout << st << endl;
    }
    file.close();

    return 0;
}
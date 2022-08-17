#include <iostream>
#include <string>
using namespace std;

class Binary
{
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void Binary ::read(void)
{
    cout << "Enter your binary number : " << endl;
    cin >> s;
}

void Binary ::chk_bin(void)
{
    for (int i = 0; i <= s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Not a binary Number" << endl;
            exit(0);
        }
    }
}
void Binary ::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i <= s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void Binary ::display(void)
{
    cout << "Displaying your Binary number : " << endl;
    for (int i = 0; i <= s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    Binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}
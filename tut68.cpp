#include <iostream>
using namespace std;

template <class T>
class Rafee
{
public:
    T data;
    Rafee(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Rafee<T>::display()
{
    cout << data << endl;
}

void func(int a)
{
    cout << "I am func " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I'm template func " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "I'm template func " << a << endl;
}

int main()
{
    // Rafee<char> r('t');
    // r.display();
    // cout << r.data;

    func1(4);

    return 0;
}
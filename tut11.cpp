#include<iostream>
using namespace std;

int main(){
    // Pointers in c++:

    int a = 4;
    int *b = &a;
    cout<<*b<<endl;
    cout<<b<<endl;
    // cout<<&a<<endl;
    // cout<<&b<<endl;

    // Pointers to pointers in c++ :

    int **c = &b;
    cout<<c<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;
    return 0;
}
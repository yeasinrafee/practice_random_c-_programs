#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a = 34;
    // cout<<a<<endl;
    // a = 86;
    // cout<<a<<endl;

    // const int b = 23;
    // cout<<b<<endl;
    // //b = 46; // output will give an error, becouse b is a constant;
    // cout<<b;

    int a = 34, b = 56, c = 5673;
    cout<<"The value of a without setw is "<<a<<endl;
    cout<<"The value of b without setw is "<<b<<endl;
    cout<<"The value of c without setw is "<<c<<endl;

    cout<<"The value of a with setw is "<<setw(4)<<a<<endl;
    cout<<"The value of b with setw is "<<setw(4)<<b<<endl;
    cout<<"The value of c with setw is "<<setw(4)<<c<<endl;
    return 0;
}
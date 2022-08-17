#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int id;
    char favChar;
    float salary;
}emp;

union money
{
    int rice;
    char car;
    float dollar;
};


int main(){
    enum meal {breakfast, lunch, dinner};
    meal m1 = lunch;
    cout<<m1<<endl;
    cout<<breakfast;

    // union money m1;
    // m1.dollar = 25;
    // m1.car = 'l'; // Not allowd;
    // cout<<m1.dollar;
    // cout<<m1.car;// will print garbage value;

    // struct employee rafee;
    emp rafee;  // If we use typedef;
    rafee.id = 101;
    rafee.favChar = 'r';
    rafee.salary = 15000000;

    // cout<<"The value is "<<rafee.id<<endl;
    // cout<<"The value is "<<rafee.favChar<<endl;
    // cout<<"The value is "<<rafee.salary<<endl;
    return 0;
}
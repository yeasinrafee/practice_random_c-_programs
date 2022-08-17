#include<iostream>
using namespace std;

int sum(int a, int b);

int main(){
    int a = 3;
    int b = 6;
    cout<<"The sum is "<<sum(a, b)<<endl;
    return 0;
}

int sum(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}
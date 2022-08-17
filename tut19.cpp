#include<iostream>
using namespace std;

int sum(int a, int b, int c){
    return a+b+c;
}

int sum(float a, int b){
    return a+b;
}

int main(){
    cout<<"The sum of number 4, 6, 2 is "<<sum(4, 6, 2)<<endl;
    cout<<"The sum of number 8, 7 is "<<sum(8, 7)<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int sum(int a, int b);
void f();
int main(){
    int num1, num2;
    cout<<"Enter your first number : "<<endl;
    cin>>num1;
    cout<<"Enter your second number : "<<endl;
    cin>>num2;

    cout<<"The sum of your number is "<<sum(num1, num2)<<endl;
    f();
    return 0;
}
int sum(int a, int b){
    int sum = a + b;
    return sum;
}
void f(){
    cout<<"Hello world, it's me!";
}
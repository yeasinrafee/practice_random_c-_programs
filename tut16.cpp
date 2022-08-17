#include<iostream>
using namespace std;

// This function will not change the value of x and y;
void swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
// Swap value by using Pointers:
void swapPointer(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
// Swap value using reference 
void swapReferenceVar(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main(){
    int a, b;
    a = 5;
    b = 9;
    cout<<"The value of a and b is "<<a<<" and "<<b<<endl;
    // swap(a, b);   // this function call will not swap the value; 
    // swapPointer(&a, &b);  // this function call will swap the value by using pointers;
    swapReferenceVar(a, b);
    cout<<"The value of a and b is "<<a<<" and "<<b<<endl;
    return 0;
}
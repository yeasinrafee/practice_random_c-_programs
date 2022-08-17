#include<iostream>
using namespace std;

inline int product(int x, int y){
    // static int c = 0;
    // c = c + 1;
    return x*y;
}
float moneyRecive(int currentMoney, float interest = 1.08){
    return currentMoney * interest;
}
int main(){
    int a, b;
    // cout<<"Enter a and b "<<endl;
    // cin>>a>>b;
    // cout<<"The Production of and b is "<<product(a, b)<<endl;
    // cout<<"The Production of and b is "<<product(a, b)<<endl;
    // cout<<"The Production of and b is "<<product(a, b)<<endl;
    // cout<<"The Production of and b is "<<product(a, b)<<endl;
    // cout<<"The Production of and b is "<<product(a, b)<<endl;
    // cout<<"The Production of and b is "<<product(a, b)<<endl;
    // cout<<"The Production of and b is "<<product(a, b)<<endl;
    // cout<<"The Production of and b is "<<product(a, b)<<endl;
    // cout<<"The Production of and b is "<<product(a, b)<<endl;
    // cout<<"The Production of and b is "<<product(a, b)<<endl;
    int money = 100000;
    cout<<"If you have "<<money<<" much money then you will recive "<<moneyRecive(money)<<" after 1 year."<<endl;
    cout<<"If you are VIP and you have "<<money<<" much money then you will recive "<<moneyRecive(money, 1.1)<<" after 1 year.";

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age : "<<endl;
    cin>>age;

    // if(age<18){
    //     cout<<"You are not an adult, you can't visit this website";
    // }else if(age==18){
    //     cout<<"You can just visit this website";
    // }else{
    //     cout<<"You are an adult now, you can visit this website and do sex ;)";
    // }

    switch(age){
        case 1 :
            cout<<"You are one year old";
            break;
        case 18 :
            cout<<"You are 18, wanna sex?";
            break;
        case 20 :
            cout<<"I wanna fuck you";
            break;
        default :
            cout<<"I don't wanna fuck you";
    }
    return 0;
}
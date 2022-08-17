#include<iostream>
using namespace std;

void introduction(string name, string city, int age);

int main(){
    string name1, city1;
    int age1;
    cout<<"Enter your name"<<endl;
    cin>>name1;
    cout<<"Enter your city"<<endl;
    cin>>city1;
    cout<<"Enter your age"<<endl;
    cin>>age1;
    introduction(name1, city1, age1);
    return 0;
}

void introduction(string name, string city, int age = 0){
    cout<<"My name is "<<name<<endl;
    cout<<"I'm from "<<city<<endl;
    if(age != 0)
        cout<<"I'm "<<age<<" years old"<<endl;
}

#include<iostream>
using namespace std;

class employee {
    private :
        int a, b, c;
    public :
        int d, e;
    void setData(int a1, int b1, int c1);
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;

    }
};

void employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    employee rafee;
    // rafee.a = 2;   // this will throw an error bcoz a is privet;
    rafee.d = 3;
    rafee.e = 4;
    rafee.setData(1, 2, 5);
    rafee.getData();
    return 0;
}
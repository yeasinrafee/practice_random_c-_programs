#include<iostream>
using namespace std;

int main(){
    // int arr[] = {13,45, 78, 96};
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[3]<<endl; 

    // Pushing in array :
    int arr2[4];

    arr2[0] = 23;
    arr2[1] = 67;
    arr2[2] = 79;
    arr2[3] = 96;

    // cout<<arr2[0]<<endl;
    // cout<<arr2[1]<<endl;
    // cout<<arr2[2]<<endl;
    // cout<<arr2[3]<<endl;
    // int i = 0;
    // while(i<=3){
    //     cout<<arr2[i]<<endl;
    //     i++;
    // }
    // do{
    //     cout<<arr2[i]<<endl;
    //     i++;
    // }while(i<=3);

    int *ptr = arr2;
    // cout<<*ptr<<endl;
    // cout<<*(ptr+1)<<endl;
    // cout<<*(ptr+2)<<endl;
    // cout<<*(ptr+3)<<endl;

    ptr++;
    ++ptr;
    cout<<*ptr;

    return 0;
}
#include<iostream>
using namespace std;
int main(){
    //A pointer is a variable that stores the memory address of another variable.
    // int a =10;
    // //Print the address of a
    // cout<<&a<<endl; //0x16ef6ab78 hexadecimal form how will you recognize 0X

    // int *ptr = &a;
    // cout<<ptr<<endl; //0x16b7a6b78
    // cout<<sizeof(ptr)<<endl; //8
    // cout<<*ptr<<endl; //10

    // float m =3.6;
    // float *ptr1 = &m;
    // cout<<ptr1<<endl; //0x16d8deb6c
    // cout<<sizeof(ptr1)<<endl; //8




    int a = 20;
    int *ptr = &a;
    cout<<ptr<<endl; // address of a //0x16b2bab78
    cout<<*ptr<<endl;// value inside a //20

    int b =10;
    ptr = &b;
    cout<<ptr<<endl; //0x16b2bab6c
    cout<<*ptr<<endl; //10


    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int arr[5]={11,7,8,12,14};
    int * ptr = arr;

    //Print all the values
    // for(int i=0;i<5;i++){
    //     cout<<ptr[i]<<" "; //11 7 8 12 14 
    // }

    // cout<<endl;

    // //Print all the address
    // for(int i=0;i<5;i++){
    //     cout<<ptr+i<<" ";  //0x16f47aba4 0x16f47aba8 0x16f47abac 0x16f47abb0 
    // }

    // cout<<endl;

    // //Arithemtic Operation ptr++, ptr--
    //   for(int i=0;i<5;i++){
    //     cout<<*ptr<<" "; //11 7 8 12 14 
    //     ptr++; 
    // }

    //cout<<endl;

    //Addition
    // ptr = ptr + 3;
    // cout<<*ptr;


    


    return 0;
}
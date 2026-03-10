#include<iostream>
using namespace std;
int main(){
    int arr[5]={11,7,8,12,14};
    int * ptr = arr;

    //Print the address of first element or 0 index
    cout<<arr<<endl; //0x16cf7ebb0
    cout<<arr+0<<endl; //0x16d7eebb0
    cout<<&arr[0]<<endl; //0x16cffebb0
    cout<<ptr<<endl; //0x16f10ebb0


    //Print the address of second element or first index
    cout<<arr+1<<endl; //0x16b842bb4
    cout<<arr+2<<endl; //0x16bbc6bb8

    cout<<&arr[1]<<endl; //0x16dc26bb4


    //Print the value of 0th index
    cout<<arr[0]<<endl; //11
    cout<<*arr<<endl; //11
    cout<<*(arr+0)<<endl; //11
    cout<<*ptr<<endl; //11

    //Now i want to print all the address
    for(int i=0;i<5;i++){
        cout<<arr+i<<" "; //0x16f5eabb0 0x16f5eabb4 0x16f5eabb8 0x16f5eabbc 0x16f5eabc0 
    }

    cout<<endl;


    //Print all the value
    for(int i=0;i<5;i++){
        cout<<*(arr+i)<<" "; //11 7 8 12 14 
    }




    return 0;
}
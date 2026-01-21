#include<iostream>
using namespace std;
int main(){

    // //int arr[5]; //array declare
    
    // int arr[5]={1,2,3,4,5};
    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr[i]<<" "; //1 2 3 4 5
    // } 

 
    // cout<<endl;

    // int array[6] = {1,2,3};
    // for(int i=0;i<6;i++){
    //     cout<<array[i]<<" "; //1 2 3 0 0 0 some random values
    // }

    // cout<<endl;

    // //I want to take input from user
    // for(int i=0;i<6;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<6;i++){
    //     cout<<arr[i]<<" ";
    // }


    int a[5]={1,2,3,4,5};
    cout<<a[0]<<endl;//1

    cout<<sizeof(a)<<endl;//20
    cout<<sizeof(a)/sizeof(a[0])<<endl;//5



    

    return 0;
}
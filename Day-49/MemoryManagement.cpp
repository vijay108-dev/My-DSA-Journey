#include<iostream>
using namespace std;
int main(){
    //if i want to allocate my variable into heap
    int *ptr = new int;
    cout<<ptr<<endl; //0x100d71ba0

    *ptr = 5; //value assign
    cout<<*ptr<<endl; //5

    float *ptr2 = new float;
    *ptr2=3.6;
    cout<<*ptr2<<endl; //3.6


    int n;
    cout<<"Enter the size of array"<<" ";
    cin>>n;

    int *p = new int[n];

    //put the value
    for(int i=0;i<n;i++)
    p[i]=i+1;

    //now print the values
    for(int i=0;i<n;i++){
        cout<<p[i]<<" "; //1 2 3 4 %   
    }

    //delete keyword use
    delete ptr; //this is for memeory release
    delete ptr2;
    delete []p;

    return 0;
}
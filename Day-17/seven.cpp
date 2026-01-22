#include<iostream>
using namespace std;

void fun(int a[],int n) //a[] this is my pointer not array address
{
    cout<<sizeof(a)<<endl; //8 why bcz our proceesor 64 bit that means 8 byte
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "; //1 2 3 4 5
    }

}

int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<sizeof(arr)<<endl; //20
    fun(arr,5);



    return 0;
}
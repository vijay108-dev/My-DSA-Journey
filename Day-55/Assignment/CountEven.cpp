#include <iostream>
using namespace std;
int countEven(int arr[], int index, int n){
    if(index==n)
        return 0;
    if(arr[index]%2==0)
        return 1 + countEven(arr,index+1,n);
    else
        return countEven(arr,index+1,n);
}

int main(){
    int arr[]={3,4,1,2,8};
    int n=5;
    cout<<countEven(arr, 0, n);

    return 0;
}
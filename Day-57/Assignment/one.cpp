#include <iostream>
using namespace std;
int searchDesc(int arr[], int start, int end, int x){
    if(start>end)
        return 0;
    int mid=(start+end)/2;

    if(arr[mid]==x)
        return 1;

    // descending order hai
    if(arr[mid]<x)
        return searchDesc(arr,start,mid-1,x);
    else
        return searchDesc(arr,mid+1,end,x);
}

int main(){
    int arr[]={22,20,15,11,8,3};
    int n =6;
    int x =11;
    cout<<searchDesc(arr, 0, n-1, x)<<endl;
}
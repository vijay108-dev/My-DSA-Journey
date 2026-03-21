#include <iostream>
using namespace std;
int binarySearch(int arr[], int start, int end, int x){
    // Base case
    if(start>end)
        return 0;
    int mid=(start+end)/2;
    if(arr[mid]==x)
        return mid;
    else if(arr[mid]<x)
        return binarySearch(arr,mid+1,end,x);
    else
        return binarySearch(arr,start,mid-1,x);
}
int main(){
    int arr[]={3,8,11,15,20,22};
    int n=6;
    int x=11;
    cout<<binarySearch(arr,0,n-1,x)<<endl;

    return 0;
}
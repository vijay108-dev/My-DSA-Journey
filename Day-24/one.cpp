#include <iostream>
using namespace std;
int peakIndexMountainArray(int arr[],int n) 
{
    int start=0;
    int end=n-1;
    while (start<=end)
     {
        int mid=start+(end-start)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
         {
            return mid; // peak index
        }
        else if(arr[mid]>arr[mid-1]){
            start =mid+1; // move right
        }
        else{
            end =mid-1; // move left
        }
    }
    return -1;
}
int main() 
{
    int arr[]={2, 4, 6, 8, 10, 8, 5};
    int n=7;
    cout<< "Peak Index: "<<peakIndexMountainArray(arr, n)<<endl;


    return 0;
}

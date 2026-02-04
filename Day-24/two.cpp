#include <iostream>
using namespace std;
int findMininRotatedArray(int arr[],int n) 
{
    int start=0;
    int end=n - 1;
    int ans=arr[0];
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid] >= arr[0])
        {
            start =mid+1;
        }else{
            ans= arr[mid];
            end= mid - 1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {4, 6, 8, 10, 1, 2};
    int n=6;
    cout<<"Minimum element: "<<findMininRotatedArray(arr, n)<<endl;
    return 0;
}

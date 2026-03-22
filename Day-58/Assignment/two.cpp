#include <iostream>
#include <vector>
using namespace std;
long long merge(int arr[], int start, int mid, int end){
    vector<int>temp(end - start+1);
    int left =start;
    int right = mid+1;
    int index = 0;

    long long invCount=0;

    while(left<=mid && right<=end){
        if (arr[left] <= arr[right])
        {
            temp[index++] = arr[left++];
        }
        else
        {
            temp[index++] = arr[right++];

            //inversion logic
            invCount += (mid-left+1);
        }
    }
    while(left <= mid)
        temp[index++] = arr[left++];

    while(right <= end)
        temp[index++] = arr[right++];

    // copy back
    index=0;
    while(start <= end){
        arr[start++] = temp[index++];
    }

    return invCount;
}
long long mergeSort(int arr[], int start, int end)
{
    long long invCount = 0;

    if(start<end)
    {
        int mid = start+(end-start)/2;

        invCount += mergeSort(arr,start,mid);
        invCount += mergeSort(arr,mid+1,end);

        invCount += merge(arr, start, mid, end);
    }

    return invCount;
}
int main(){
    int arr[]={2,4,1,3,5};
    int n=5;
    cout<<"Inversion Count: "<<mergeSort(arr, 0, n-1 )<<endl;

    return 0;
}
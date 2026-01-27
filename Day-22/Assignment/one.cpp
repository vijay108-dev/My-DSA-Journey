#include <iostream>
using namespace std;
int binarySearchDec(int arr[],int n,int key){
    int start =0;
    int end = n-1;
    while (start<=end){
        int mid=start +(end - start)/2;
        if(arr[mid]==key)
            return mid;
        else if (arr[mid]<key)
            end = mid-1;//left side
        else
            start = mid+1;//right side
    }
    return -1;
}

int main(){
    int arr[1000];
    int n;
    cout<<"Enter the number of elements in array"<<" ";
    cin>>n;
    cout<<"Enter elements in the array:"<<" ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter element to search: ";
    cin>>key;

    cout<<binarySearchDec(arr, n, key);

    return 0;
}

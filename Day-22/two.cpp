#include <iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;//index return
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main() 
{
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

    cout<<binarySearch(arr, n, key)<<endl;


    return 0;
}

#include <iostream>
using namespace std;
int searchInsert(int arr[],int n,int key){
    int start=0;
    int end=n - 1;
    int ans =n;
    while (start <=end){
        int mid =start + (end-start)/2;
        if(arr[mid]>=key){
            ans = mid;
            end=mid - 1;
        }
        else{
            start=mid + 1;
        }
    }
    return ans;
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

    cout<<searchInsert(arr, n, key);
    
    return 0;
}

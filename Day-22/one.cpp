#include <iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the number of elements in array"<<" ";
    cin>>n;
    cout<<"Enter elements in the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int Key;
    cout<<"Enter element to search: ";
    cin>>Key;
    int start =0;
    int end=n-1;
    int mid;
    int index=-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==Key){
            index=mid;
            break;
        }
        else if(arr[mid]<Key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    if(index!=-1)
        cout<<"Element found at index: "<<index<<endl;
    else
        cout<<"Element not found";

    return 0;
}

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
    int target;
    cout<<"Enter element to search: ";
    cin >>target;

    int start = 0, end = n - 1;
    int index = n;   // default insert at end

    while(start<=end){
    int mid = (start+end)/2;

    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid]>target){
        index = mid;  //possible insert position
        end = mid-1;
    }
    else{
        start = mid + 1;
    }
}

cout <<index<<endl;

    return 0;
}
//TC =O(logn)
//SC =O(1)
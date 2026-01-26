#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }
    //smallest comes to front
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>i;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }

    return 0;
}

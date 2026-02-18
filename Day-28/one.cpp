#include<iostream>
using namespace std;
    void segregate0and1(int arr[], int n){
        int start=0, end=n-1;
        while(start<end){
            if(arr[start]==0){
                start++;
            }
            else{
                if(arr[end]==0){
                    swap(arr[start], arr[end]);
                    start++;
                    end--;
                }
                else{
                    end--;
                }
            }
        }
    }
int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n];
    cout << "Enter array elements (0 and 1): ";
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }

    segregate0and1(arr,n);

    cout<<"After segregation: ";
    for(int i=0;i<n;i++) 
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
// Time Complexity = O(n)
// Space Complexity = O(1)
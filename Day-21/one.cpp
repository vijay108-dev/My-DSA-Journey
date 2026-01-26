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
    // Insertion Sort
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }else{
                break;
            }
        }
    }

    // Output
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

//Insertion Sort has time complexity O(n) in best case and O(n²) in average and worst cases
//space complexity O(1)
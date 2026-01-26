#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }

    // Bubble Sort
    for(int i=n-2;i>=0;i--)
     {
        for(int j =0;j<=i;j++)
         {
            if(arr[j]>arr[j+1])
             {
                swap(arr[j],arr[j+1]);
            }
        }
    }

    //Output
    cout << "Sorted Array: ";
    for(int i=0;i<n;i++) 
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

//Bubble Sort has time complexity O(n²) in best, average, and worst cases.
//space complexity O(1)
//Sorting is the process of arranging items in a particular order
//Example -> Numbers in ascending order 
//Example -> Numbers in descending order 

//Selection Sort
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    // Selection Sort
    for(int i=0;i<n-1;i++) 
    {
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index])
             {
                index=j;
            }
        }

        // Swap arr[i] and arr[index]
        int temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
    }

    cout<<"Sorted array: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}

//Best case:O(n²) => even if array is sorted
//Worst case:O(n²)
//Average case:O(n²)
//Space complexity:O(1)

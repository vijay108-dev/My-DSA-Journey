#include <iostream>
using namespace std;
int partition(int arr[], int start, int end){
    int pos=start;  // position for smaller elements

    for(int i=start;i<end;i++){
        if (arr[i] < arr[end])
        {
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    // pivot ko correct position pe rakhna zaroori hai
    swap(arr[pos], arr[end]);
    return pos;
}

// Quick Sort
void quickSort(int arr[], int start, int end)
{
    if (start>=end)
        return;

    int pivot = partition(arr, start, end);

    //Left Side
    quickSort(arr, start, pivot-1);

    //Right Side
    quickSort(arr, pivot+1, end);
}
int main()
{
    int arr[] = {10,3,4,1,5,6,3,2,11,9};
    int n=10;
    quickSort(arr,0,9);
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
void merge(int arr[], int start, int mid, int end){
    vector<int>temp(end - start + 1);

    int left = start;
    int right = mid+1;
    int index = 0;

    // Compare elements from both halves
    while(left<=mid && right<=end)
    {
        if (arr[left] <= arr[right])
        {
            temp[index] = arr[left];
            index++;
            left++;
        }
        else
        {
            temp[index] = arr[right];
            index++;
            right++;
        }
    }

    // If left array has remaining elements
    while(left<=mid)
    {
        temp[index] = arr[left];
        index++;
        left++;
    }

    //If right array has remaining elements
    while(right<=end)
    {
        temp[index] = arr[right];
        index++;
        right++;
    }

    //Copy temp array back to original array
    index = 0;
    while(start <= end)
    {
        arr[start] = temp[index];
        start++;
        index++;
    }
}
// Merge Sort function
void mergeSort(int arr[], int start, int end)
{
    if (start>=end)
        return;

    int mid = start + (end-start) / 2;

    //Left part sort
    mergeSort(arr, start, mid);

    // Right part sort
    mergeSort(arr, mid + 1, end);

    // Merge both
    merge(arr, start, mid, end);
}
int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9};
    int n=8;
    mergeSort(arr, 0, n-1);
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

//TC = O(n*logn)
//SC = O(n)
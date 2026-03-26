#include <iostream>
using namespace std;
int subsetSum(int arr[], int index, int n, int target)
{
    // base case
    if(target==0)
     return 1;
    if(index==n || target<0)
     return 0;

    //NO + YES
    return subsetSum(arr, index+1, n, target) || subsetSum(arr, index+1, n, target-arr[index]);
}

int main()
{
    int arr[]={3,6,4,5};
    int n=4;
    int target=12;
    cout<<subsetSum(arr,0,n,target);

    return 0;
}
//TC = 2^N
//SC = O(n)
#include <iostream>
using namespace std;
int subset(int arr[], int index, int n, int sum) 
{
    // Base cases
    if(sum==0)
        return 1;

    if(sum<0 || index==n)
        return 0;

    //Exclude                          + Include
    return subset(arr, index+1, n,sum) + subset(arr, index+1, n, sum-arr[index]);

}
int main()
 {
    int arr[]={5,2,3,6,10,8};
    int n=6;
    int target=10;
    cout<<"Total subsets: "<<subset(arr,0,n,target);

    return 0;
}
//TC = O(2^n)
//SC = O(n)

//if my number is non postive then my base condition will change

// int subset(int arr[], int index, int n, int sum){
//     // Jab saare elements use ho gaye
//     if(index==n){
//         if (sum==0)
//             return 1;
//         else
//             return 0;
//     }
//     // Exclude + Include
//      return subset(arr, index+1, n,sum) + subset(arr, index+1, n, sum-arr[index]);
// }
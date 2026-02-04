#include <iostream>
using namespace std;
int findKthPositive(int arr[], int n, int k)
{
    int start =0;
    int end =n - 1;
    int ans =n;// default position
    while (start<=end){
        int mid = start + (end - start)/2;
        //Missing numbers till index mid
        if(arr[mid] - mid - 1 >= k){
            ans = mid;
            end = mid -1;
        }else{
            start = mid+1;
        }
    }

    //Final answer
    return ans + k;
}
int main(){
    int arr[] = {2,3,4,7,11,12};
    int n = 6;
    int k = 5;
    cout<<findKthPositive(arr, n, k)<<endl;
    return 0;
}

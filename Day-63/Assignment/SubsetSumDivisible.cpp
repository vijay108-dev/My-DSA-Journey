#include <iostream>
using namespace std;
int subsetDivisible(int arr[], int index, int n, int sum, int m){
    // base case
    if (index==n)
    {
        if (sum%m==0 && sum!=0)
            return 1;
        return 0;
    }
    // exclude                                        + include
    return subsetDivisible(arr, index+1, n, sum, m) + subsetDivisible(arr, index+1, n, sum+arr[index], m);
}
int main(){
    int arr[]={3,1,7,5};
    int n=4;
    int m=6;
    cout<<"Total subsets divisible by m: "<<subsetDivisible(arr, 0, n, 0, m);

    return 0;
}
//TC = O(2^n)
//SC = O(n)
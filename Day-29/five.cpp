#include <iostream>
#include <climits>
using namespace std;
int main(){

    int arr[]= {4, -6, 2, 8};
    int n=4;

    // Prefix sum array
    int prefix[n];
    prefix[0]=arr[0];

    for(int i=1;i<n;i++){
        prefix[i] = prefix[i - 1] + arr[i];
    }
    int maxi=INT_MIN;

    // start = starting index
    for(int start = 0; start < n; start++){

        // end = ending index
        for(int end = start; end < n; end++){

            int sum;
            if(start ==0)
                sum =prefix[end];
            else
                sum =prefix[end] - prefix[start - 1];

            maxi =max(maxi, sum); //update max
        }
    }

    cout<< "Maximum Subarray Sum = " <<maxi<<endl;

    return 0;
}

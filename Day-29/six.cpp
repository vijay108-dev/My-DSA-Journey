#include <iostream>
using namespace std;

int main() {

    //Kadane Algorithm
    int arr[]= {3,4,-5,8,-12,7,6,2};
    int n =8;
    int prefix =0;//current running sum
    int maxi =INT_MIN;//maximum subarray sum
    for(int i=0;i<n;i++){
        prefix = prefix +arr[i]; //add element

        maxi = max(maxi,prefix);//update maximum

        if(prefix<0){
            prefix=0;//reset if negative
        }
    }
    cout <<"Maximum Subarray Sum = " <<maxi<<endl;
}

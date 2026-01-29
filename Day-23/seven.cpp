#include <iostream>
using namespace std;
int main() {
    int arr[1000];
    int n, k;
    cin >>n;
    for(int i= 0;i < n;i++) 
    {
        cin >>arr[i];
    }
    cin >>k;

    int start = 0, end = n - 1;

    while(start<=end){
        int mid=start + (end - start) / 2;

        if (arr[mid] - (mid +1)<k)
            start= mid +1;
        else
            end=mid - 1;
    }

    cout <<start + k;
    return 0;
}

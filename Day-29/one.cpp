#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>arr={6,4,5,-3,2,8};
    int n=arr.size();
    //Prefix sum
    vector<int> prefix(n);
    prefix[0] =arr[0];
    for(int i = 1; i < n; i++) 
    {
        prefix[i] = prefix[i-1] + arr[i];
    }

    //Suffix sum
    vector<int> suffix(n);
    suffix[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; i--) 
    {
        suffix[i] = suffix[i+1] + arr[i];
    }

    // Output
    cout << "Prefix sum: ";
    for(int x : prefix) cout << x << " ";
    cout << endl;

    cout << "Suffix sum: ";
    for(int x : suffix) cout << x << " ";
    cout << endl;

    return 0;
}
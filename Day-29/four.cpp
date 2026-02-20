#include <iostream>
#include <vector>
using namespace std;
void printSubarraySums(const vector<int>& arr) 
{
    int n =arr.size();

    for(int size=1; size<= n;size++){
        cout<<size<<" size subarrays:\n";
        for(int start=0; start <=n - size; start++){
            int sum= 0;
            cout<< "[ ";
            for(int i = start; i<start+size;i++){
                cout<< arr[i]<<" ";
                sum +=arr[i];
            }
            cout<< "] Sum = " << sum << "\n";
        }

        cout<< "----------------------\n";
    }
}
int main(){
    vector<int> arr = {4, -6, 2, 8};
    cout<< "Array: [ ";
    for(int x : arr) 
    cout<<x << " ";
    cout<<"]\n\n";
    printSubarraySums(arr);

    return 0;
}

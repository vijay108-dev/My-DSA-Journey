#include <iostream>
#include <vector>
using namespace std;
void printSubarrays(const vector<int>& arr) 
{
    int n=arr.size();

    for (int size=1;size<=n;size++)
    {
        cout<<"Subarrays of size " << size <<endl;

        for(int start =0; start <= n-size;start++) 
        {
            cout<< "[ ";
            for(int i=start; i < start+size; i++){
                cout<<arr[i]<<" ";
            }
            cout<<"]\n";
        }

        cout<<"----------------------\n";
    }
}
int main(){
    vector<int> arr={4, 3, 7, 2};
    cout<<"Array: [ ";
    for(int x:arr)
    cout <<x << " ";
    cout<< "]\n\n";


    printSubarrays(arr);

    return 0;
}
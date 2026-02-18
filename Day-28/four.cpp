#include<iostream>
#include<vector>
using namespace std;
    bool isProduct(vector<int> arr, long long x) 
    {
        int n=arr.size();
        sort(arr.begin(), arr.end());
        int start=0;
        int end=n -1;
        while(start<end) 
        {
            
            long long prod= 1LL * arr[start] * arr[end];
            
            if(prod==x)
                return true;
            
            else if(prod<x)
                start++;
            else
                end--;
        }
        
        return false;
    }

int main(){
    vector<int> arr = {10, 20, 9, 40};
    long long x = 400;

    if(isProduct(arr, x))
        cout << "true"<< endl;
    else
        cout << "false"<< endl;

    return 0;
}
//Time complexity = O(nlogn)
//Space complexity = O(1)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(vector<int> &arr, int target, int index,vector<int> &temp, vector<vector<int>> &ans)
{
    // base case
    if(target==0)
    {
        ans.push_back(temp);
        return;
    }

    for(int i=index;i<arr.size();i++)
    {
        // duplicate skip (IMPORTANT)
        if(i>index && arr[i] == arr[i-1])
            continue;

        // pruning
        if(arr[i]>target)
            break;

        temp.push_back(arr[i]);          // include
        solve(arr, target-arr[i], i+1, temp, ans); // next index
        temp.pop_back();                 // backtrack
    }
}

int main(){
    vector<int> arr = {10,1,2,7,6,1,5};
    int target =8;

    sort(arr.begin(),arr.end());  // must

    vector<vector<int>>ans;
    vector<int>temp;
    solve(arr, target, 0, temp, ans);

    // print answer
    for(auto v:ans)
    {
        for(auto x:v)
            cout<<x<<" ";
        cout<<endl;
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> nextSmallerElement(vector<int>& arr, int n)
{
    stack<int>st;
    vector<int>ans(n, -1);
    for(int i=0;i<n;i++)
    {
        while(!st.empty() && arr[st.top()]>arr[i])
        {
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;
}

int main()
{
    vector<int> arr = {7, 9, 12, 10, 14, 8, 3, 6, 9};
    int n = arr.size();
    vector<int> ans = nextSmallerElement(arr, n);
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}

// TC: O(n)
// SC: O(n)
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> nextGreaterElement(vector<int>& arr, int n)
{
    stack<int>st;
    vector<int>ans(n, -1);
    for(int i=0;i<n;i++)
    {
        while(!st.empty() && arr[st.top()]<arr[i])
        {
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;
}

int main(){
    vector<int> arr = {1, 3, 2, 4};
    int n = arr.size();
    vector<int>ans = nextGreaterElement(arr, n);
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}
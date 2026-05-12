#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> smallestNumberOnLeft(vector<int>& arr, int n)
{
    stack<int>st;
    vector<int>ans(n, -1);
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && arr[st.top()]>arr[i])
        {
            ans[st.top()]=arr[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;
}

int main(){
    vector<int> arr = {4, 13, 2, 5, 9, 7, 8, 6};
    int n = arr.size();
    vector<int>ans = smallestNumberOnLeft(arr, n);
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}
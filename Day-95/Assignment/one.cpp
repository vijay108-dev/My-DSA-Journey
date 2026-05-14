#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> minOfMax(int arr[] , int n)
{
    vector<int>ans;
    for(int k=1;k<=n;k++)
    {
        int mini=INT_MAX;
        for(int i=0;i<=n-k;i++)
        {
            stack<int>st;

            for(int j=i;j<i+k;j++)
            {
                while(!st.empty() && st.top() < arr[j])
                {
                    st.pop();
                }
                st.push(arr[j]);
            }
            mini = min(mini , st.top());
        }
        ans.push_back(mini);
    }
    return ans;
}

int main()
{
    int arr[] = {10,20,30,50,10,70,30};
    int n = 7;
    vector<int>ans = minOfMax(arr,n);
    for(int i=0;i<ans.size() ;i++)
    {
        cout<<ans[i]<<" ";
    }
}
// Time Complexity → O(N³)
// Space Complexity → O(K)

// Stack direct use karke sliding maximum efficient nahi hota
// Sliding window maximum ke liye
// Deque>Stack
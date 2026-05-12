#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> stockSpan(vector<int>& price, int n)
{
    stack<int>st;
    vector<int>ans(n, 1);
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && price[i]>price[st.top()])
        {
            ans[st.top()] = st.top() - i;
            st.pop();
        }
        st.push(i);
    }
    return ans;
}

int main()
{
    vector<int> price = {100, 80, 55, 70, 60, 75, 85};
    int n = price.size();
    vector<int> ans = stockSpan(price, n);
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}
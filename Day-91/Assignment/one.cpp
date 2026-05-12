#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
using namespace std;
vector<int> oppositeSignPairReduction(vector<int>& arr)
{
    stack<int>st;
    for(int i=0; i<arr.size();i++)
    {
        int current = arr[i];
        while(!st.empty() && ((st.top()>0 && current<0) || (st.top()<0 && current>0)))
        {
            if(abs(st.top()) > abs(current))
            {
                current = st.top();
                st.pop();
            }
            else if(abs(st.top()) < abs(current))
            {
                st.pop();
            }
            else
            {
                st.pop();
                current = 0;
                break;
            }
        }
        if(current!=0)
        {
            st.push(current);
        }
    }
    vector<int> ans(st.size());
    for(int i = st.size()-1; i>=0;i--)
    {
        ans[i] = st.top();
        st.pop();
    }
    return ans;
}

int main(){
    vector<int> arr = {10, -5, -8, 2, -5};
    vector<int> ans = oppositeSignPairReduction(arr);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}
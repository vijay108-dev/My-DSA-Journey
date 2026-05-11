#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> getMinAtPop(vector<int> arr) 
{
    stack<int>st;
    vector<int>ans;

    // Push all elements into stack
    for(int i=0;i<arr.size();i++) 
    {
        st.push(arr[i]);
    }
    while(!st.empty()) 
    {
        stack<int>temp = st;
        int mn=temp.top();
        // Find minimum in current stack
        while(!temp.empty()) 
        {
            if(temp.top()<mn) 
            {
                mn = temp.top();
            }
            temp.pop();
        }
        ans.push_back(mn);
        st.pop();
    }
    return ans;
}

int main() 
{
    vector<int>arr = {1,6,43,1,2,0,5};
    vector<int>result= getMinAtPop(arr);

    for(int i=0;i<result.size();i++) 
    {
        cout<<result[i]<<" ";
    }

    return 0;
}
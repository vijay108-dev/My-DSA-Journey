// #include<iostream>
// #include<stack>
// using namespace std;
// int main()
// {
//     vector<int>arr={10,20,30,50,10,70,30};
//     int n=arr.size();
//     vector<int>ans(n,0);
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-i;j++)
//         {
//             int num=INT_MAX;
//             for(int k=j;k<j+i+1;k++)
//             {
//                 num=min(num, arr[k]);
//             }
//             ans[i]=max(ans[i], num);
//         }
//     }
//     for(int x : ans)
//         cout<<x<<" ";

//     return 0;
// }

//----------------------------------- METHOD = 2 ----------------------------------------------
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> maxOfMin(int arr[], int n)
{
    vector<int>ans(n,0);
    stack<int>st;
    int range;
    for (int i=0;i<n;i++)
    {
        while (!st.empty() && arr[st.top()]<arr[i])
        {
            int index=st.top();
            st.pop();
            if (st.empty())
            {
                range=i;
                ans[range - 1]=max(ans[range - 1], arr[index]);
            }
            else
            {
                range=i-st.top()-1;
                ans[range-1] = max(ans[range-1], arr[index]);
            }
        }
        st.push(i);
    }
    while(!st.empty())
    {
        int index=st.top();
        st.pop();
        if (st.empty())
        {
            range=n;
            ans[range-1] = max(ans[range-1], arr[index]);
        }
        else
        {
            range=n-st.top()-1;
            ans[range-1] = max(ans[range-1],arr[index]);
        }
    }
    for (int i=n-2;i>=0;i--)
    {
        ans[i]=max(ans[i],ans[i+1]);
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>result=maxOfMin(arr, n);
    for (int i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }

    return 0;
}
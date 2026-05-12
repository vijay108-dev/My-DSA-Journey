// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;
// int largestRectangleArea(vector<int>& height)
// {
//     int n = height.size();
//     vector<int>Right(n);
//     vector<int>Left(n);
//     stack<int>st;

//     // Next Smaller Element on Right
//     for(int i=0;i<n;i++)
//     {
//         while(!st.empty() && height[st.top()]>height[i])
//         {
//             Right[st.top()]=i;
//             st.pop();
//         }
//         st.push(i);
//     }
//     while(!st.empty())
//     {
//         Right[st.top()] = n;
//         st.pop();
//     }

//     // Next Smaller Element on Left
//     for (int i=n-1;i>=0;i--)
//     {
//         while (!st.empty() && height[st.top()]>height[i])
//         {
//             Left[st.top()]=i;
//             st.pop();
//         }
//         st.push(i);
//     }
//     while (!st.empty())
//     {
//         Left[st.top()]=-1;
//         st.pop();
//     }
//     int ans=0;
//     for(int i=0;i<n;i++)
//     {
//         ans = max(ans,height[i] * (Right[i] - Left[i]-1));
//     }
//     return ans;
// }

// int main(){
//     vector<int>height = {2,3,4,2,6,5,4,5,3};
//     cout<<"Largest Rectangle Area = " <<largestRectangleArea(height)<<endl;

//     return 0;
// }

// TC = O(n)
// SC = O(n)


// --------------------------------------------------- METHOD = 2 -------------------------------------------
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int largestRectangleArea(vector<int>& height)
{
    int n = height.size();
    int ans = 0;
    stack<int>st;
    for (int i=0;i<n;i++)
    {
        while(!st.empty() && height[st.top()]>height[i])
        {
            int index = st.top();
            st.pop();
            if(!st.empty())
            {
                ans = max(ans, height[index] *(i-st.top() - 1));
            }
            else
            {
                ans = max(ans,height[index]*i);
            }
        }
        st.push(i);
    }

    while (!st.empty())
    {
        int index = st.top();
        st.pop();

        if(!st.empty())
        {
            ans = max(ans,height[index] * (n -st.top()-1));
        }
        else
        {
            ans = max(ans,height[index]*n);
        }
    }
    return ans;
}

int main()
{
    vector<int>height = {2,3,4,2,6,5,4,5,3};
    cout<<"Largest Rectangle Area = " <<largestRectangleArea(height)<<endl;

    return 0;
}
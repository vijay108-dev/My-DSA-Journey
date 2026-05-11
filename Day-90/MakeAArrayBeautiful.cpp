#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> makeBeautiful(vector<int> arr) 
{

    stack<int> s;
    for(int i=0;i<arr.size();i++) 
    {
        // If stack is empty
        if(s.empty()) 
        {
            s.push(arr[i]);
        }

        // Non-negative number
        else if(arr[i]>=0) 
        {
            // Negative
            if (s.top()>=0) 
            {
                s.push(arr[i]);
            }
            //Non-Negative
            else 
            {
                s.pop();
            }
        }

        // Negative number
        else 
        {

            // Negative
            if(s.top()<0) 
            {
                s.push(arr[i]);
            }
            //Non-Negative
            else
            {
                s.pop();
            }
        }
    }

    vector<int> ans(s.size());

    int i=s.size()-1;

    // Store stack elements into vector
    while(!s.empty()) 
    {
        ans[i] = s.top();
        s.pop();
        i--;
    }
    return ans;
}

int main()
{
    vector<int>arr = {2, 3, 5, -4, 6, -2, -8, 9};
    vector<int>result = makeBeautiful(arr);

    // Print result
    for(int i=0;i<result.size();i++) 
    {
        cout<<result[i]<<" ";
    }

    return 0;
}
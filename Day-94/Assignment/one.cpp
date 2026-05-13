#include<iostream>
#include<stack>
using namespace std;
    int trap(vector<int>& height){
        int n = height.size();
        stack<int>st;
        int water=0;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && height[i] > height[st.top()])
            {
                int middle = st.top();
                st.pop();
                if(st.empty())
                    break;

                int left = st.top();
                int width = i - left - 1;

                int boundedHeight = min(height[left], height[i]) - height[middle];
                water+=width*boundedHeight;
            }
            st.push(i);
        }
        return water;
    }


int main()
{
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(height)<<endl;

    return 0;
}
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
long long countSubarrays(vector<int>& nums, int minK, int maxK)
{
    queue<int>minQ;
    queue<int>maxQ;
    long long ans = 0;
    int badIndex = -1;
    for(int i=0;i<nums.size();i++)
    {
        // invalid element
        if(nums[i]<minK || nums[i]>maxK)
        {
            badIndex = i;
            while(!minQ.empty())
            minQ.pop();
            while(!maxQ.empty()) 
            maxQ.pop();
        }

        // store minK index
        if(nums[i] == minK)
        {
            minQ.push(i);
        }

        // store maxK index
        if(nums[i] == maxK)
        {
            maxQ.push(i);
        }

        // remove old indices
        while(!minQ.empty() && minQ.front()<=badIndex)
        {
            minQ.pop();
        }

        while(!maxQ.empty() && maxQ.front()<=badIndex)
        {
            maxQ.pop();
        }

        // valid subarray
        if(!minQ.empty() && !maxQ.empty())
        {
            ans+=min(minQ.front(), maxQ.front())-badIndex;
        }
    }
    return ans;
}

int main()
{
    vector<int>nums={1,3,5,2,7,5};
    int minK=1;
    int maxK=5;
    cout<<countSubarrays(nums,minK,maxK)<<endl;

    return 0;
}
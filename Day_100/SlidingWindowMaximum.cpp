// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>nums = {4,3,7,5,2,3,1,2,8,7};
//     int n=nums.size();
//     int k=3;
//     vector<int>ans;
//     for(int i=0;i<=n-k;i++)
//     {
//         int total=INT_MIN;
//         for(int j=i;j<i+k ;j++)
//         {
//             total = max(total,nums[j]);
//         }

//         ans.push_back(total);
//     }
//     for(int i=0;i<ans.size();i++)
//     {
//         cout<<ans[i]<<" ";
//     }

//     return 0;
// }

// Time Complexity: O(n*k)
// Space Complexity: O(n)


//==================================== METHOD = 2 ===========================================
#include<iostream>
#include<vector>
#include<deque>
using namespace std;
int main(){
    vector<int>nums={4,3,7,5,2,3,1,2,8,7};
    int n=nums.size();
    int k=3;
    deque<int>d;
    vector<int>ans;
    for(int i=0;i<k-1;i++)
    {
        if(d.empty())
            d.push_back(i);
        else{
            while(!d.empty() && nums[i]>nums[d.back()])
            {
                d.pop_back();
            }
            d.push_back(i);
        }
    }

    for(int i=k-1;i<n;i++)
    {
        while(!d.empty() && nums[i]>nums[d.back()])
        {
            d.pop_back();
        }

        d.push_back(i);

        if(d.front()<=i-k)
        {
            d.pop_front();
        }
        ans.push_back(nums[d.front()]);
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}
// Time Complexity : O(n)
// Space Complexity : O(k)
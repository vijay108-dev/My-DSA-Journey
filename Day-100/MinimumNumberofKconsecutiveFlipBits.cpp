// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>nums={0,1,0};
//     int k=1;
//     int n=nums.size();
//     int flip=0;
//     for(int i=0;i<n;i++)
//     {
//         if(nums[i]==0)
//         {
//             for(int j=i;j<=i+k-1 && j<n;j++)
//             {
//                 nums[j]=!nums[j];
//             }
//             flip++;
//         }
//     }
//     cout<<flip<<endl;

//     return 0;
// }
// Time Complexity: O(n*k)
// Space Complexity: O(1)

//=======================================METHOD = 2 =========================================
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums={0,1,0};
    int k=1;
    int n=nums.size();
    queue<int>q;
    int flip=0;
    for(int i=0;i<n;i++)
    {
        if(!q.empty() && q.front()<i)
        {
            q.pop();
        }
        if(q.size()%2 == nums[i])
        {
            if(i+k-1>= n)
            {
                cout<<-1<<endl;
                return 0;
            }
            q.push(i+k-1);
            flip++;
        }
    }
    cout<<flip<<endl;

    return 0;
}
// Time Complexity : O(n)
// Space Complexity : O(k)
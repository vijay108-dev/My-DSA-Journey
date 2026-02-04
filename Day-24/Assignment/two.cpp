#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int specialArray(vector<int>& nums){
    // Step 1 sort the array
    sort(nums.begin(),nums.end());
    int n=nums.size();
    // Step 2 try every possible value of x
    for(int x=1;x<=n;x++){
        int count =0;
        // Step 3 count elements >= x
        for(int i=0;i<n;i++){
            if(nums[i]>=x){
                count=n-i;
                break;
            }
        }
        // Step 4 check condition
        if(count==x)
            return x;
    }

    return -1;
}

int main() {
    vector<int> nums={3, 5};
    cout<<"Special Value: "<< specialArray(nums)<<endl;
    return 0;
}
